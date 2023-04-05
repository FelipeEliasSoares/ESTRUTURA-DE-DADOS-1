/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDias.cpp
 * Author: felipe
 * 
 * Created on 13 de agosto de 2022, 17:22
 */

#include "cDias.h"
#include <iostream>

using namespace std;
cDias::cDias() {
}

cDias::cDias(const cDias& orig) {
}

cDias::~cDias() {
}

void cDias ::LerIdade(){
    int ano,dias,meses;
    this->anos=ano;
    this->dias=dias;
    this->meses=meses;
    
    cout<< "Digite seus anos de vida: ";
    cin>>this->anos;
    cout<< "Digite os seus meses de vida: ";
    cin>>this->dias;
    cout<< "Digite os seus dias de vida: ";
    cin>>this->meses;
}

int cDias ::idade(){
    int anos,meses,dias;
    
    anos = (this->anos*365);
    meses = (this->meses*30);
    
    dias= (anos+meses+this->dias);
    
    cout << "Sua idade em dias é igual à " << dias;
    return dias;
}



