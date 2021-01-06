#include "funciones.h"
Complejo::Complejo (int _real,int _imaginario){ //contructor para inicializar atribtuos
    real = _real;
    imaginario = _imaginario;
}

Complejo operator+(const Complejo &c1, const Complejo &c2){
    return Complejo(c1.real + c2.real, c1.imaginario + c2.imaginario);
}
Complejo operator-(const Complejo &c1, const Complejo &c2){
    return Complejo(c1.real - c2.real, c1.imaginario - c2.imaginario);
}
//Definir la sobrecarga para que add y sub tengan accesos a los atributos
Complejo add (Complejo numerocomplejo1, Complejo numerocomplejo2){
    return numerocomplejo1 + numerocomplejo2;
}
Complejo sub (Complejo numerocomplejo1, Complejo numerocomplejo2){
    return numerocomplejo1 - numerocomplejo2;
}

void Complejo::print(){
    cout << real << "," << imaginario;
}