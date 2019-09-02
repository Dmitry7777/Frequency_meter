#ifndef FREQUENCY_INPUT_H
#define FREQUENCY_INPUT_H

#define SYNC_FrequencyInput INPUT

#define CFG_Time_PerSecond 10000
long Temp = CFG_Time_PerSecond; //
int Pulses = Temp; //

boolean Pulse; //
unsigned int FrequencyMode; //
int PulseLow; //
int PulseHigh; //
float FrequencyResult; //
float Frequency; //

unsigned long PERIOD = 1000;

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
  float InputFrequ = SynchInput; //
  pinMode(InputFrequ, SYNC_FrequencyInput); //
  //FrequencyMode = digitalRead(InputFrequ); //
  };
  static void begin(uint16_t delay_ms){
    
  }; //
  //static uint8_t available(void){}; //
  static uint32_t read(void){
//PulseLow = pulseIn(InputFrequ, LOW);
//  PulseHigh = pulseIn(InputFrequ, HIGH);
    }; //

void setLow(){
//if(LF){}float LF

    Pulses = PulseLow + PulseHigh; //
    ResultOfLowFrequency = Pulses / 1000;
    delay(Temp); //
}

void setMiddle(){
//if(MF){}float MF
    Pulses = PulseLow + PulseHigh; //
    ResultOfMiddleFrequency = Pulses / 1000000;
    delay(Temp); //
}

void setHigh(){
  //if(HF){ }float HF
    Pulses = PulseLow + PulseHigh; //
    ResultOfHighFrequency = Pulses / 1000000000;
    delay(Temp); //
}

static void end(){
  
}

  private:
  static volatile unsigned int _PinInput;

  protected:
};

#endif
