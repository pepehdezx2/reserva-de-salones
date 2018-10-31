//  A01381334 Jose Antonio Hernandez Hernandez
//  main.cpp
//  tarea5
//
//  Created by Jose Antonio on 27/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//  Algoritmo
//  declarar variables y arreglos de objetos de tipo computadora y salon
//  preguntar y recibir el tamaño de arreglo que sera
//  ciclo que le pregunta al usuario las caracteristicas de la computadora y el salon donde esta
//  imprimir en pantalla opciones para el usuario
//  ciclo do while que pregunta y recibe un caso y segun el condicional switch busca de una forma especifica o acaba el programa
//  dentro de las opciones de busqueda definir la opcion vacia como menos 1 y hacer un ciclop de busqueda
//  dependiendo de si se modifico la opcion vacia imprimir con metodos de acceso el salon donde se ubica lo buscado, sino se modifica imprime que no se encuentra en un salon
//  cerrar el ciclo

#include <iostream>
#include <string>
#include "Computadora.h"
#include "Salon.h"
using namespace std;
int main() {
    // declaracion de arreglos de objeto...
    Computadora arrc[10];
    Salon arrs[10];
    // declaracion de variables...
    int tam, aqui, salon, ram, seguir;
    string mr, os;
    char casos;
    // preguntar y recibir el tamaño de los arreglos...
    cout << "cuantos salones hay" << endl;
    cin >> tam;
    // ciclo que recibe informacion del salon y computadoras...
    for (int i=0; i<tam; i++){
        // metodo para eliminar la basura para poder recibir datos...
        cin.ignore();
        // recibe datos dados por el usuario del salon y computadora...
        cout << "marca" << endl;
        getline(cin, mr);
        cout << "sistema operativo" << endl;
        getline(cin, os);
        cout << "memoria RAM" << endl;
        cin >> ram;
        cout << "salon" << endl;
        cin >> salon;
        // modifica a los objetos...
        arrc[i].setMarca(mr);
        arrc[i].setSistema(os);
        arrc[i].setRam(ram);
        arrs[i].setSalon(salon);
        arrs[i].setComputadora(arrc[i]);
    }
    // imprimir opciones al usuario...
    cout << "Presiona A para buscar por marca" << endl;
    cout << "Presiona B para buscar por sistema operativo" << endl;
    cout << "Presiona C para buscar por memoria RAM" << endl;
    cout << "Presiona D para terminar" << endl;
    // ciclo do while que realiza operaciones pedidas por el usuario...
    do{
        // recibe los casos...
        cin >> casos;
        // condicional switch...
        switch (casos){
                case 'A':
                cin.ignore();
                cout << "que marca deseas buscar" << endl;
                getline(cin, mr);
                aqui=-1;
                // ciclo de busqueda...
                for (int i=0; i<tam; i++){
                    if (arrc[i].getMarca()==mr){
                        aqui=i;
                }
    }
                if(aqui>=0){
                    salon=arrs[aqui].getSalon();
                    cout << "en el salon " << salon << " se encuentra una computadora con la marca " << mr << endl;
                }
                else {
                    cout << "no hay salon con una computadora de la marca " << mr << endl;
                }
                seguir=1;
                break;
                case 'B':
                cin.ignore();
                cout << "que sistema operativo deseas buscar" << endl;
                getline(cin, os);
                aqui=-1;
                // ciclo de busqueda...
                for (int i=0; i<tam; i++){
                    if (arrc[i].getSistema()==os){
                        aqui=i;
                    }
                    }
                if(aqui>=0){
                    salon=arrs[aqui].getSalon();
                    cout << "en el salon " << salon << " se encuentra una computadora con el sistema operativo " << mr << endl;
                }
                else {
                    cout << "no hay salon con una computadora con el sistema operativo " << mr << endl;
                }
                seguir=1;
                break;
                case 'C':
                cin.ignore();
                cout << "que memoria RAM deseas buscar" << endl;
                cin >> ram;
                aqui=-1;
                // ciclo de busqueda...
                for (int i=0; i<tam; i++){
                    if (arrc[i].getRam()==ram){
                        aqui=i;
                }
                }
                if(aqui>=0){
                    salon=arrs[aqui].getSalon();
                    cout << "en el salon " << salon << " se encuentra una computadora con la memoria ram " << ram << endl;
                }
                else {
                    cout << "no hay salon con una computadora con la memoria ram " << ram << endl;
                }
                seguir=1;
                break;
                case 'D':
                // define la condicion para termoinar con el ciclo...
                seguir=0;
        }
    } while (seguir!=0);
    return 0;
}
