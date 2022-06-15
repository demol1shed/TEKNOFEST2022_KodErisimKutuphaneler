#include <Arduino.h>
#include "joystick.h"
/**
 * @brief Yeni Joystick:: Joystick nesnesi oluştur. Buton hariçtir.
 * 
 * @param joy_x 
 * @param joy_y 
 */
Joystick::Joystick(byte joy_x, byte joy_y){
    JOY_X = joy_x;
    JOY_Y = joy_y;
}
/**
 * @brief Yeni Joystick:: Joystick nesnesi oluştur. Buton dahildir.
 * 
 * @param joy_x 
 * @param joy_y 
 * @param joy_but 
 */
Joystick::Joystick(byte joy_x, byte joy_y, byte joy_but){
    JOY_X = joy_x;
    JOY_Y = joy_y;
    JOY_BUT = joy_but; 
}
Joystick::~Joystick(){

}

// Joystickten gelen veriyi okur.
void Joystick::JoystickOku(int _delay){
    veriVektorleri[0] = analogRead(JOY_X);
    veriVektorleri[1] = analogRead(JOY_Y);
    delay(_delay);
}

// Butonun dahili direncini açar.
void Joystick::ButonKurulum(){
    pinMode(JOY_BUT, INPUT_PULLUP);
}

// Joystick'in butondaki verisini okur.
bool Joystick::JoystickButonOku(){
    butonDurumu = digitalRead(JOY_BUT);
    return butonDurumu;
}