//
//  Computadora.h
//  tarea5
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Computadora_h
#define Computadora_h
using namespace std;
class Computadora{
public:
    // declaracion de metodos a utilizar en el encabezado...
    Computadora();
    Computadora(string mr, string os, int ram);
    void setMarca(string mc);
    void setSistema(string os);
    void setRam(int ram);
    string getMarca();
    string getSistema();
    int getRam();
private:
    // declaracion de atributos a utilizar en el encabezado...
    string marca, sistema;
    int memram;
};
// constructores de clase...
Computadora::Computadora(){
    marca=" ";
    sistema=" ";
    memram=0;
}
Computadora::Computadora(string mr, string os, int ram){
    marca=mr;
    sistema=os;
    memram=ram;
}
// definir metodos...
void Computadora::setMarca(string mr){
    marca=mr;
}
void Computadora::setSistema(string os){
    sistema=os;
}
void Computadora::setRam(int ram){
    memram=ram;
}
string Computadora::getMarca(){
    return marca;
}
string Computadora::getSistema(){
    return sistema;
}
int Computadora::getRam(){
    return memram;
}

#endif /* Computadora_h */
