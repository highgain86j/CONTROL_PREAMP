//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_VAR_HANDLER_H
#define CONTROL_PREAMP_VAR_HANDLER_H

class VAR_HANDLER {
// Define a variable to indicate the source number
public:
    int ic4503_pin[3] = {6, 7, 8}; // Define pins to be used for 74HCT4503
    int button_pin = 9; //  Define a pin to be used for a tact-switch
    int src_n_bin_cur[3] = {0}; //Define a variable to indicate the current selection in 3bits
    int src_n_bin_new[3] = {0}; //Define a variable to indicate the new selection in 3bits
    int src_n_dec = 0;

    void init() {
        pinMode(button_pin, INPUT);
        for (int i = 0; i < 3; i++) {
            pinMode(ic4503_pin[i], OUTPUT);
        }
    }

    void ButtonChoice() {
        if (digitalRead(button_pin) == HIGH) {
            src_n_dec = src_n_dec % 8;
            delay(20);
        }
    }

    void ReadChoice() {
        for (int i = 0; i < 3; i++) {
            src_n_bin_new[i] = bitRead(src_n_dec, i);
        }
    }
};


#endif //CONTROL_PREAMP_VAR_HANDLER_H
