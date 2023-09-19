// Tyuiu.BreslavskayaIV.Controle0.V2.Task1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service0 : public ISprint0Task8V1
{
    virtual float Chislo(float x, float z) override
    {
        float y;
        float a;
        a = pow(x, 4);
        float b;
        b = sqrt(234.0 + z);
        float c;
        c = (12 * x + a) / (x * x + b);
        y = sqrt(c);
        return y;



    }
};