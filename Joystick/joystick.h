#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <Arduino.h>

class Joystick{
protected:
    byte x;
private:
    byte JOY_X;
    byte JOY_Y;
    byte JOY_BUT;
public:
    bool butonDurumu;
    int veriVektorleri[2];
    // Constructorlar
    Joystick(byte joy_x, byte joy_y);
    Joystick(byte joy_x, byte joy_y, byte joy_but);
    // Deconstructor
    ~Joystick();

    // Metod
    void JoystickOku(int _delay);
    void ButonKurulum();
    bool JoystickButonOku();
};

#endif