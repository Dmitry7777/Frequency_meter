/*
 * SAB6456 SAB6456A Switching Prescaler frequency converter DIP-8 In Stock
 */
#ifndef SAB6456_H
#define SAB6456_H

#define IO_MCU_QH INPUT
#define IO_MCU_QL INPUT

uint64_t PROCESS_QH;
uint64_t PROCESS_QL;
char LOG0[] = {"Hz"};
char LOG1[] = {"kHz"};
char LOG2[] = {"MHz"};
char LOG3[] = {"GHz"};

class SAB6456{
  public:
SAB6456(uint64_t QH, uint64_t QL){
  PROCESS_QH = QH;
  PROCESS_QL = QL;
  pinMode(QH, IO_MCU_QH); //
  pinMode(QL, IO_MCU_QL); //
  };

  void begin(){
    
  }
  void inputVoltage(){
    
  }
  void end(){
    
  }
  
  private:

  
  protected:

  
};

#endif
