//
// Created by RealL on 9/7/2022.
//

#include "gb.h"
gb::gb(char* argv[]) {
    mem.load(argv);
}
void gb::run() {
   ofstream outfile("log.txt");
    while(true) {
        processor.checkInterrupts();
        processor.log(outfile);
        int cycles = processor.step();
        tim.updateTimer(cycles);
    }
}