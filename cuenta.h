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
