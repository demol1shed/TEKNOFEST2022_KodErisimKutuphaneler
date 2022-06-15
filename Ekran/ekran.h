#ifndef EKRAN_H
#define EKRAN_H
#include <Arduino.h>
#include "U8glib.h"
#include <Wire.h>
#include <stdio.h>



/*
sik_dürüm
*/
class OledEkran{
    private:
    static const int maksimumEkranSayisi = 5;
    const int pinA = 11;
    const int pinB = 13;
    const int pinC = 15;
    u8g_uint_t x, y;
    const u8g_fntpgm_uint8_t* font = u8g_font_gdr17;
    public:
    char bufferX[BUFFER_LENGTH];
    char bufferY[BUFFER_LENGTH];
    char bufferZ[BUFFER_LENGTH];
    OledEkran();
    OledEkran(u8g_uint_t _x, u8g_uint_t _y);
    ~OledEkran();
    void PinKurulum();
    void EkranKurulum(byte deger, byte deger1, byte deger2);
    void EkranaYaz(U8GLIB_SSD1306_128X64 u8g);
};
#endif