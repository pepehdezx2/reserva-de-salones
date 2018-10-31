//
//  Salon.h
//  tarea5
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Salon_h
#define Salon_h
#include "Computadora.h"
class Salon{
public:
    // declaracion de metodos a utilizar en el encabezado...
    Salon();
    Salon(int sal, Computadora comp);
    void setSalon(int sal);
    void setComputadora(Computadora comp);
    int getSalon();
    Computadora getComputadora();
private:
    // declaracion de atributos a utilizar en el encabezado...
    int salon;
    Computadora computadora;
};
// constructores de clase...
Salon::Salon(){
    Computadora compu(" ", " ", 0);
    salon=0;
    computadora=compu;
}
Salon::Salon(int sal, Computadora comp){
    salon=sal;
    computadora=comp;
}
// definir metodos...
void Salon::setSalon(int sal){
    salon=sal;
}
void Salon::setComputadora(Computadora comp){
    computadora=comp;
}
int Salon::getSalon(){
    return salon;
}
Computadora Salon::getComputadora(){
    return computadora;
}

#endif /* Salon_h */
