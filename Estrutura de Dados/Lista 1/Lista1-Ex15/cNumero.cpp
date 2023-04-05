/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNumero.cpp
 * Author: felipe
 * 
 * Created on 15 de agosto de 2022, 11:53
 */

#include "cNumero.h"
#include <iostream>

using namespace std;

cNumero::cNumero() {
}

cNumero::cNumero(const cNumero& orig) {
}

cNumero::~cNumero() {
}

void cNumero :: numero(){
    int n;
    
    cout<< "Digite um numero : ";
    cin>>n;
    
    if(n % 2==0){
        if(n>0){
            cout << "O numero " << n << " é PAR e é POSITIVO";
        }
        else{
            cout << "O numero " << n << " é PAR e é NEGATIVO";
        }
    }
    else{
        if(n>0){
            cout << "O numero " << n << " é IMPAR e é POSITIVO";
        }
        else{
            cout << "O numero " << n << " é IMPAR e é NEGATIVO";
        }
    }
    
}
