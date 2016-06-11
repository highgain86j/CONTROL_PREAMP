//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_HC4053_H
#define CONTROL_PREAMP_HC4053_H

class HC4053 {
public:
    void Write() {
        for (int i = 0; i < 3; i++) {
            if (src_n_bin_cur[i] != src_n_bin_new[i]) {
                if (src_n_bin_new[i] == 1) {
                    digitalWrite(ic4053_pin[i], HIGH);
                } else if (src_n_bin_new[i] == 0) {
                    digitalWrite(ic4053_pin[i], LOW);
                }
                src_n_bin_cur[i] = src_n_bin_new[i];
            }
        }
    }
};

#endif //CONTROL_PREAMP_HC4053_H
