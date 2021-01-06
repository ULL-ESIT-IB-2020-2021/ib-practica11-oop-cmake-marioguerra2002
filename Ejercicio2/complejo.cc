#include "funciones.h"
int main(){
    Complejo complejo1 (14,24);
    Complejo complejo2 (12, 23);
    Complejo resultado = {0,0};
    complejo1.print ();
    complejo2.print ();
    resultado = add (complejo1,complejo2);
    resultado.print();
    resultado = sub (complejo1,complejo2);
    resultado.print();    
}

