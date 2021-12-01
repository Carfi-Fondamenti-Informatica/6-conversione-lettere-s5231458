//
// Created by badin on 30/11/2021.
//

#include "Lib.h"

bool conversione(char &a){
    bool t=true;
    if(a>=65 and a<=90 or a>=97 and a<=122){
        t=true;
        if (a>=65 and a<=90) {
            a=a+32;
            return &a;
        }else{
            a=a-32;
            return &a;

        }


    }else{
        t=false;
    }
    return t;

}


