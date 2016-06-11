//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_SERIAL_HANDLER_H
#define CONTROL_PREAMP_SERIAL_HANDLER_H

class SERIAL_HANDLER {
public:
    Setup() {
        Serial.begin(115200);
    }

    Write() {
        Serial.println(String(src_n_dec));
        delay(750);
    }
};


#endif //CONTROL_PREAMP_SERIAL_HANDLER_H