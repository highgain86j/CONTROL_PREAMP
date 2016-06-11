//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_VFD_HANDLER_H
#define CONTROL_PREAMP_VFD_HANDLER_H


#include <GU7000/GU7000_Interface.h>
#include <GU7000/GU7000_Parallel.h>
#include <GU7000/GU7000_Serial_Async.h>
#include <GU7000/GU7000_Serial_SPI.h>
#include <GU7000/GU7000_Serial_Sync.h>
#include <GU7000/Noritake_VFD_GU7000.h>

GU7000_Serial_Async interface(38400, 2, 3, 4); // BAUD RATE,SIN,BUSY,RESET
//GU7000_Serial_Sync interface( 3, 5, 6, 7 ); // SIN,BUSY,SCK,RESET
//GU7000_Serial_SPI interface( 3, 5, 6, 7, 8 ); // SIN,BUSY,SCK,RESET,CS
//GU7000_Parallel interface( 'R', 8,9,10,11, 0,1,2,3,4,5,6,7 ); // Module Pin#3 = RESET; BUSY,RESET,WR,RD,D0-D7
//GU7000_Parallel interface( 'B', 8,9,10,11, 0,1,2,3,4,5,6,7 ); // Module Pin#3 = BUSY; BUSY,RESET,WR,RD,D0-D7
//GU7000_Parallel interface( 'N', 8,9,10,11, 0,1,2,3,4,5,6,7 ); // Module Pin#3 = nothing; BUSY,RESET,WR,RD,D0-D7

class VFD_HANDLER {
public:
    void BasicSetup() {
        //initialize vfd
        _delay_ms(500);           // wait for device to power up
        Noritake_VFD_GU7000::begin(280, 16);       // 280x16 module
        // Enter the 4-digit model class number
        // E.g. 7040 for GU140X16G-7040A
        Noritake_VFD_GU7000::interface(interface); // select which interface to use
        Noritake_VFD_GU7000::isModelClass(7000);
        //Noritake_VFD_GU7000::isGeneration('B');    // Uncomment this for B generation
        Noritake_VFD_GU7000::GU7000_reset();       // reset module
        Noritake_VFD_GU7000::GU7000_init();        // initialize module
        Noritake_VFD_GU7000::GU7000_setScreenBrightness(30);
        /*
         * | WINDOW1 | WINDOW2 |
         * | WINDOW3 | WINDOW4 |
         */
        Noritake_VFD_GU7000::GU7000_defineWindow(1, 0, 0, 140, 8);
        Noritake_VFD_GU7000::GU7000_defineWindow(2, 141, 0, 140, 8);
        Noritake_VFD_GU7000::GU7000_defineWindow(3, 0, 9, 140, 8);
        Noritake_VFD_GU7000::GU7000_defineWindow(4, 141, 9, 140, 8);
        for (int i = 0; i < 4; i++) {
            int j = i + 1;
            Noritake_VFD_GU7000::GU7000_selectWindow(j);
            Noritake_VFD_GU7000::GU7000_cursorOff();
        }
        Noritake_VFD_GU7000::GU7000_selectWindow(0);
    }

    void WriteVFD() {
        char outchar[40] = {"NULL"};
        String(src_n_dec).toCharArray(outchar, String(src_n_dec).length() + 1);
        Noritake_VFD_GU7000::print(outchar);
        delay(750);
    }
};

#endif //CONTROL_PREAMP_VFD_HANDLER_H