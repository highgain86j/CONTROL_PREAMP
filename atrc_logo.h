//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_ATRC_LOGO_H
#define CONTROL_PREAMP_ATRC_LOGO_H


#include "vfd_handler.h"

class ATRC_LOGO {
public:
    logo_VFD() {
        Noritake_VFD_GU7000::GU7000_clearScreen();
        Noritake_VFD_GU7000::println( "         Tokyo Denki University" );
        Noritake_VFD_GU7000::println( "     Audio Technology Research Club" );
    }

    logo_Serial() {
        Serial.println( "" );
        Serial.println( "         Tokyo Denki University" );
        Serial.println( "     Audio Technology Research Club" );
    }
};

#endif //CONTROL_PREAMP_ATRC_LOGO_H