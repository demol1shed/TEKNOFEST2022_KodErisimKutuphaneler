#ifndef MZ80_H        
#define MZ80_H

#include <Arduino.h>

class MZ80{
private:
    byte _MZ80;
    byte LED;

public:
    MZ80();
    MZ80(byte _mz80);
    virtual ~MZ80();

    int MZ80_OKU();
};
#endif