/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIdade2.cpp
 * Author: felipe
 * 
 * Created on 13 de agosto de 2022, 17:53
 */

#include "cIdade2.h"
#include <iostream>


using namespace std;
cIdade2::cIdade2() {
}

cIdade2::cIdade2(const cIdade2& orig) {
}

cIdade2::~cIdade2() {
}

void cIdade2::lerDados(){
    int dia;
    this->dia = dia;
    cout << "Digite o seus dias de vidas: ";
    cin>>this->dia;
}


int cIdade2 :: anos(){
    int anos;
    anos = this->dia/365;   
    return anos;
}

int cIdade2 :: meses(){
    int meses;
    
    meses= this->dia/30;
    
    return meses;
        
}

int cIdade2 :: dias(){
    int dia;
    
    dia = this->dia;
    
    return dia;
}

