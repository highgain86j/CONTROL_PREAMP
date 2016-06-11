//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_TDU_ATRC_H
#define CONTROL_PREAMP_TDU_ATRC_H

#endif //CONTROL_PREAMP_TDU_ATRC_H

#include <GU7000/GU7000_Interface.h>
#include <GU7000/GU7000_Parallel.h>
#include <GU7000/GU7000_Serial_Async.h>
#include <GU7000/GU7000_Serial_SPI.h>
#include <GU7000/GU7000_Serial_Sync.h>
#include <GU7000/Noritake_VFD_GU7000.h>

class TDU_ATRC{
    void logo_VFD(){
        Noritake_VFD_GU7000::GU7000_clearScreen();
        Noritake_VFD_GU7000::println( "         Tokyo Denki University" );
        Noritake_VFD_GU7000::println( "     Audio Technology Research Club" );
    }

    void logo_Serial(){
        Serial.println( "" );
        Serial.println( "         Tokyo Denki University" );
        Serial.println( "     Audio Technology Research Club" );
    }
};