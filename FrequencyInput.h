#ifndef FREQUENCY_INPUT_H
#define FREQUENCY_INPUT_H

#define IO_MCU_FrequencyInput INPUT

#define CFG_Time_PerSecond 10000

#define CFG_MaximalLowFrequency 2000
#define CFG_MaximalMiddleFrequency 2000000
#define CFG_MaximalHighFrequency 2000000000
#define PulseDivider 2

unsigned int MLF = CFG_MaximalLowFrequency;
unsigned int MMF = CFG_MaximalMiddleFrequency;
unsigned int MHF = CFG_MaximalHighFrequency;

int PROCESS_FrequencyInput; //
long Temp = CFG_Time_PerSecond; //
int Pulses = Temp; //

boolean Pulse; //
unsigned int FrequencyMode; //
int PulseLow; //
int PulseHigh; //
float PulseTotal; //
float FrequencyResult; //
float Frequency; //
unsigned long PERIOD = 1000;

long FREQU; //Enabled frequency to results which will be displayed on the terminal device
long TIME; //Enabled period time
bool PULSE; //Enabled pulse per time
int PULSES; //Enabled period pulses

float ResultOfLowFrequency; //
float ResultOfMiddleFrequency; //
float ResultOfHighFrequency; //
char SetValue_Hz[] = {"Hz"}; //
char SetValue_kHz[] = {"kHz"}; //
char SetValue_MHz[] = {"MHz"}; //

class FrequencyInput
{
  public:
  FrequencyInput(int SynchInput){
  PROCESS_FrequencyInput = SynchInput; //
  pinMode(PROCESS_FrequencyInput, IO_MCU_FrequencyInput); //
  
  };
  
  static void begin(){
    PULSE = HIGH; //
  }; //
  
  static uint8_t available(){}; //
  
  static uint32_t read(const int SynchInput){
    FrequencyMode = digitalRead(SynchInput); //
    }; //

void setLow(){
TIME = millis(); //
if(digitalRead(PROCESS_FrequencyInput)==HIGH){
  if(PULSE == HIGH){
    PULSES = PULSES + 1; //
    }
    PULSE = LOW; //
  }
else{
  PULSE == HIGH; //
  }

if(TIME % MLF == 0){
  FREQU = PULSE /2; //
  PULSES = 0; //
  }

}

void setMiddle(){
  TIME = millis(); //
if(digitalRead(PROCESS_FrequencyInput)==HIGH){
  if(PULSE == HIGH){
    PULSES = PULSES + 1; //
    }
    PULSE = LOW; //
  }
else{
  PULSE == HIGH; //
  }

if(TIME % MMF == 0){
  FREQU = PULSE /2; //
  PULSES = 0; //
  }

}

void setHigh(){
  TIME = millis(); //
if(digitalRead(PROCESS_FrequencyInput)==HIGH){
  if(PULSE == HIGH){
    PULSES = PULSES + 1; //
    }
    PULSE = LOW; //
  }
else{
  PULSE == HIGH; //
  }

if(TIME % MHF == 0){
  FREQU = PULSE /2; //
  PULSES = 0; //
  }

}

static void end(){
  
}

  private:
  static volatile unsigned int _PinInput;

  protected:
};


#endif
