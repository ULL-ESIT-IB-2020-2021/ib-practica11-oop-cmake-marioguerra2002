#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
class Fecha
{
    private: //atributos que van a tener los objetos que creemos
        int dia;
        int mes;
        int anio;
    public: //metodos
        Fecha (int, int, int); //constructor
        //acciones
        void MostrarFecha(); 
        void Bisiesto();
        //void Escribir();
        void Diasiguiente(); 
        int Getdia();
        int Getmes();
        int Getanio();       
};
void usage(int argc, char *argv[]);