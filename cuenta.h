/*
* Programacion Orientada a Objetos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* Cuenta Bancaria
*/
#ifndef CUENTA_H
#define CUENTA_H
#include<iostream>
using namespace std;
class Cuenta
{
private:
    //Atributos
   string NombreTitular;
   int MontoActual;
    
public:
    Cuenta();
    Cuenta(string NombreTitular,int MontoMontoActual);
    int ingresar(int valor);
    int  retirar(int valor);
    void balance();
    int getMonto() const;
    void setMonto(int value);
    string getNombreTitular() const;
};

#endif // CUENTA_H
