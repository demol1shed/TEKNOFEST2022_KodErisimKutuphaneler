#include <Arduino.h>
#include "MZ80.h"

/**
 * @note Default constructor sadece arraylar içindir. Çoklu sensör kullanımında öncelikle sensörlerin pinleri girilmelidir.
 */
MZ80::MZ80(){}

MZ80::MZ80(byte _mz80){
    _MZ80 = _mz80;
    pinMode(_MZ80, INPUT);
}

MZ80::~MZ80(){}

/**
 * @brief digitalRead() kullanarak optik sensörden gelen veriyi geri döndürür.
 */
int MZ80::MZ80_OKU(){
    return digitalRead(_MZ80);
}