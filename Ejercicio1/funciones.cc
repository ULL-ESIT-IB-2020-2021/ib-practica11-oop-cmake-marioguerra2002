#include "funciones.h"
using namespace std;
Fecha::Fecha (int _dia,int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
void Fecha::MostrarFecha(){
    cout<< "Hoy es dia " << dia << " del mes " << mes << " del anio " << anio << endl;
} 
void Fecha::Bisiesto(){
    if (anio%4==0 && anio%100!=0 || anio%400==0){
        cout << "Ese a" << char(164) /*ñ en ASCII*/ << "o es bisiesto" << endl;
    }else{
        cout << "Ese a" << char(164) << "o no es bisiesto" << endl;
    }
    return;
} 
void Fecha::Diasiguiente(){
    ++dia;
    if(dia > 31 && (mes == 1||mes==3||mes==7||mes==8||mes==10||mes==12 )){
        dia=1;
        mes++;
    }
    if (dia >30 && (mes == 4||mes==6||mes==9||mes==11)){
        dia=1;
        mes++;
    }
    if (dia >29 && mes ==2 && ((anio % 4 ==0 && anio % 100!=0||anio%400==0))){
        dia = 1;
        mes++;
    }
    if (dia >28 && mes == 2 && (anio%4 != 0 || (anio % 400 !=0 && anio %100 ==0))){
        dia = 1;
        ++mes;
    }
    if (mes > 12){
        mes=1;
        ++anio;
    }
}
int Fecha::Getdia(){
    return dia;
}
int Fecha::Getmes(){
    return mes;
}
int Fecha::Getanio(){
    return anio;
}
void usage(int argc, char *argv[]) {
    if (argc == 2 && strcmp(argv[1], "--help") == 0){
        cout << "Este programa para ser ejecutado necesita que le introduzca por linea de comando en este orden y separados por un espacio: un dia, un mes y un año (en números)." <<endl;
        cout << "Puebe con './fehas 06 04 2002'"<<endl;
        exit (EXIT_SUCCESS);
    }
}         