﻿// Tyuiu.BreslavskayaIV.Controle0.V2.Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.BreslavskayaIV.Controle0.V2.Task1.Lib/Tyuiu.BreslavskayaIV.Controle0.V2.Task1.Lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x;
    float z;
    ISprint0Task8V1* date = new Service0();
    cout << "Введите х:";
    cin >> x;
    cout << "Введите z:";
    cin >> z;
    cout << "Значение выражения = "<<date->Chislo(x,z);
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
