#ifndef FREQUENCY_INPUT_H
#define FREQUENCY_INPUT_H

#define SYNC_FrequencyInput INPUT
unsigned int FrequencyMode; //
float FrequencyResult; //

float ResultOfLowFrequency; //
float ResultOfMiddleFrequency; //
float ResultOfHighFrequency; //
char SetValue_Hz[] = {"Hz"}; //
char SetValue_kHz[] = {"kHz"}; //
char SetValue_MHz[] = {"MHz"}; //

static uint16_t count_msw;
static uint32_t count_prev;
static volatile uint32_t count_output;
static volatile uint8_t count_ready;
static uint16_t gate_length;
static uint16_t gate_index;


class FrequencyInput
{
  public:
  FrequencyInput(int SynchInput){
  float InputFrequ = SynchInput; //
  pinMode(InputFrequ, SYNC_FrequencyInput); //
  FrequencyMode = digitalRead(InputFrequ); //
//  FrequencyMode = pulseIn(InputFrequ); //
  //FrequencyMode = pulseIn(_PinInput, HIGH); //
  };
  static void begin(uint16_t delay_ms){
    if (delay_ms < 10) return;
  gate_index = 0;
  count_msw = 0;
  count_prev = 0;
  count_ready = 0;
//  counter_init();
//  gate_length = timer_init(delay_ms);
  uint8_t status = SREG;
  cli();
//  timer_start();
//  timer_isr_latency_delay();
//  counter_start();
  SREG = status;

  }; //
  static uint8_t available(void){
  return count_ready;
    }; //
  static uint32_t read(void){
    uint32_t count;
    uint8_t status;
    status = SREG;
    cli();
    count = count_output;
    count_ready = 0;
    SREG = status;
    return count;
    }; //
  static void end(void){
//    timer_shutdown();
//    counter_shutdown();
    }; //
  
  private:
  static volatile unsigned int _PinInput;
  
  protected:
};

#endif
