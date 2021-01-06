#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <algorithm>
using namespace std;
class Complejo
{
    private: //atributos que van a tener los objetos que creemos
        int real; //real
        int imaginario;//imaginario
        
    public: //metodos
        Complejo (int, int);
        friend Complejo operator+(const Complejo &c1, const Complejo &c2);
        friend Complejo operator-(const Complejo &c1, const Complejo &c2);
        void print();

};
Complejo add (Complejo numerocomplejo1, Complejo numerocomplejo2);
Complejo sub (Complejo numerocomplejo1, Complejo numerocomplejo2);
#endif