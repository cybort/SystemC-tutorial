//This function is syntesizable

#inlcude "up_counter.h"

// main function for counter
 void counter::counter_main (void) {
    if (reset.read()) { 
      count = 0 ;
    } else if (enable.read()) {
      count = count + 1;
    }
    out.write(count);
  }
