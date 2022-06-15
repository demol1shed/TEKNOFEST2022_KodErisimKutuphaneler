#ifndef nRF24_H
#define nRF24_H
#pragma region includes
#include <RF24.h>
#include <SPI.h>
#include <Arduino.h>
#include <joystick.h>
#pragma endregion

class nRF24{
public:
    //unsigned int alinanVeri[];
    bool radyoCalisti;
    bool radyoVeriAldi;
    static const int elementSayisi = 4;
    nRF24();
    RF24 nRF24AliciKurulum(RF24 radyo, unsigned int gucSeviyesi, unsigned int monitorFrekansi, rf24_datarate_e veriFrekansi);
    RF24 nRF24VericiKurulum(RF24 radyo, unsigned int gucSeviyesi, unsigned int monitorFrekansi, rf24_datarate_e veriFrekansi);
    void nRF24VeriGonder(RF24 radyo, int gonderilecekVeri[], const int gonderilecekElementSayisi=3);
    //const int nRF24ElementSayisiKoy(const int _elementSayisi);
    void nRF24VeriAl(RF24 radyo,  int (&yazilacakArr)[elementSayisi], const int gonderilecekElementSayisi=3);
private:
    byte adres[2][6] = {"1Node","2Node"};
};
#endif