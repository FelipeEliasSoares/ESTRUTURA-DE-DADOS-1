/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNadador.cpp
 * Author: felipe
 * 
 * Created on 15 de agosto de 2022, 10:15
 */

#include "cNadador.h"
#include <iostream>

using namespace std;

cNadador::cNadador() {
}

cNadador::cNadador(const cNadador& orig) {
}

cNadador::~cNadador() {
}


void cNadador::categoria(){
    int idade;
    
    cout << "Digite sua idade: ";
    cin>> idade;
    
        if(idade <= 4){
            cout <<("Muito jovem!");
        }
 
        else if((idade >= 5) && (idade <= 7)){
           cout <<"Infantil A";
            }
 
        else if((idade >= 8) && (idade <= 10)){
            cout <<"Infantil B";
            }
 
        else if((idade >= 11) && (idade <= 13)){
            cout <<"Juvenil A";
            }
 
        else if((idade >= 14) && (idade <= 17)){
            cout <<"Juvenil B";
            }
 
        else if(idade >= 18){
            cout <<"Adulto";
            } 

}
