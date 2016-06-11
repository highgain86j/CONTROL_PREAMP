//
// Created by Tahiro on 2016/06/11.
//

#ifndef CONTROL_PREAMP_PT_HANDLER_H
#define CONTROL_PREAMP_PT_HANDLER_H

#include <pt/pt.h>

class PT_HANDLER {
public:
    static struct pt pt0, pt1, pt2, pt3, pt4, pt5, pt6, pt7, pt8, pt9; // each protothread needs one of these

// Defining 10 threads using pt
    static int protothread_0(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        //ButtonChoice();
                        //keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_1(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        //ReadChoice();
                        //keeprun = false;
                    }
        PT_END(pt);
    }

    static int protothread_2(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        Write4503();
                        //keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_3(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        ser.Write();
                        delay(5000);
                        //keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_4(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        //WriteVFD();
                        //keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_5(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        /*Input_freq()*/;
                        keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_6(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        /*Input_freq()*/;
                        keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_7(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        /*Input_freq()*/;
                        keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_8(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        /*Input_freq()*/;
                        keeprun = false;
                    }
        PT_END(pt);
    }


    static int protothread_9(struct pt *pt) {
        static unsigned long timestamp = 0;
        PT_BEGIN(pt);
                    while (boolean keeprun = true) { // never stop
                        /* each time the function is called the second boolean
                        *  argument "millis() - timestamp > interval" is re-evaluated
                        *  and if false the function exits after that. */
                        /*Input_freq()*/;
                        keeprun = false;
                    }
        PT_END(pt);
    }

    void Setup() {
        PT_INIT(&pt0);
        PT_INIT(&pt1);
        PT_INIT(&pt2);
        PT_INIT(&pt3);
        PT_INIT(&pt4);
        PT_INIT(&pt5);
        PT_INIT(&pt6);
        PT_INIT(&pt7);
        PT_INIT(&pt8);
        PT_INIT(&pt9);
    }

    void Run() {
        protothread_0(&pt0); // schedule Input_freq()
        protothread_1(&pt1); // schedule Input_freq()
        protothread_2(&pt2); // schedule Input_freq()
        protothread_3(&pt3); // schedule Input_freq()
        protothread_4(&pt4); // schedule Input_freq()
        protothread_5(&pt5); // schedule Input_freq()
        protothread_6(&pt6); // schedule Input_freq()
        protothread_7(&pt7); // schedule Input_freq()
        protothread_8(&pt8); // schedule Input_freq()
        protothread_9(&pt9); // schedule Input_freq()
    }
};

#endif //CONTROL_PREAMP_PT_HANDLER_H
