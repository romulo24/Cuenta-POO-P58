/*
* Programacion Orientada a Objetos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* Cuenta Bancaria
*/
#include "cuenta.h"

int Cuenta::getMonto() const
{
    return this->MontoActual;
}

void Cuenta::setMonto(int value)
{
    this->MontoActual= value;
}

string Cuenta::getNombreTitular() const
{
    return this->NombreTitular;
}

Cuenta::Cuenta()
{
    this->NombreTitular = "";
    this->MontoActual = 0;
}

Cuenta::Cuenta(string NombreTitular, int MontoActual)
{
    this->NombreTitular=NombreTitular;
    this->MontoActual=MontoActual;
}

int Cuenta::ingresar(int valor )
{
    if(valor<0){
        return MontoActual;
    }
    else{
        MontoActual=MontoActual+valor;
    }
    return MontoActual;
}

int Cuenta::retirar(int valor)
{
    if (MontoActual-valor<0){
           cout<<"Valor no Disponible usted solo cuenta con: $"<<MontoActual<<endl;
       }
       else {
           MontoActual = MontoActual - valor;
       }
       return valor;
   }

void Cuenta::balance()
{
    cout<<"Titular:"<<NombreTitular<<", Cantidad: "<<MontoActual<<endl;
}
