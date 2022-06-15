#include "ekran.h"

/**
 * @brief Yeni Oled Ekran:: Oled Ekran nesnesi oluştur.
 * 
 * @param _x 
 * @param _y 
 */
OledEkran::OledEkran(u8g_uint_t _x, u8g_uint_t _y){
    x = _x;
    y = _y;
}

OledEkran::~OledEkran(){
    
}

// Oled ekranların pinlerini kurar.
void OledEkran::PinKurulum(){
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    pinMode(pinC, OUTPUT);
    
    Wire.begin();
}

/**
 * @brief Oled ekranı değerlerle seçer ve pinleri ayarlar.
 * @note Değerler arraya aktarılabilir. Aynı zamanda arraya aktarıldığı durumda for loopta kullanılabilir.
 * @param deger 
 * @param deger1 
 * @param deger2 
 */
void OledEkran::EkranKurulum(byte deger, byte deger1, byte deger2){
    digitalWrite(pinA, deger);
    digitalWrite(pinB, deger1);
    digitalWrite(pinC, deger2);
}

// Bufferdaki veriyi ekrana yaz.
void OledEkran::EkranaYaz(U8GLIB_SSD1306_128X64 u8g){
    u8g.setFont(font);
    u8g.drawStr( x, y, bufferX);
    u8g.drawStr( x, y + 20, bufferY);
    u8g.drawStr( x, y + 40, bufferZ);
}