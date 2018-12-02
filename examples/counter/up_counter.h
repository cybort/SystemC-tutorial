/////////////////////////////////////////
//     This module is syntesizable     //
/////////////////////////////////////////

#include <systemc.h>

//module counter
SC_MODULE (up_down_counter) {
  
  //input signals
  sc_in    <bool> enable, clk, reset;
  
  //output result
  sc_out   <sc_uint<8> > out;
  
  //internal variable
  sc_uint<8>  count;

  //up count function which will leater be defined
  void counter_main ();
  
  //constructor phase
  SC_CTOR(up_down_counter) {
    SC_METHOD (counter);
      sensitive << clk.pos();
  }

};