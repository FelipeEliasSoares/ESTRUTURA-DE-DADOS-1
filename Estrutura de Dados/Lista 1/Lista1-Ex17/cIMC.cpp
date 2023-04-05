/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIMC.cpp
 * Author: felipe
 * 
 * Created on 16 de agosto de 2022, 19:34
 */

#include "cIMC.h"
#include <iostream>

using namespace std;
cIMC::cIMC() {
}

cIMC::cIMC(const cIMC& orig) {
}

cIMC::~cIMC() {
}


void cIMC :: lerDados(){
    float altura,imc;
    char opc;
    
    cout << "Digite sua altura: ";
    cin>>altura;
    cout << "---SEXO---"<<endl;
    cout << "---F:Ferminino---"<<endl;
    cout << "---M:Masculino---"<<endl;
    cout << "Digite a opçãp: ";
    cin >> opc;
    
    this->altura =altura;
    if(opc=='F'){
           imc = this->calcF();
           cout <<"Seu IMC é " << imc ;
    }
    else if(opc=='M'){
           imc=this->calcM();
           cout <<"Seu IMC é " << imc ;
    }
    else{
        cout << "Opção invalida";
    }
    
   
}

float cIMC :: calcF(){
    float imc;
    
    imc=(62.1 * this->altura) - 44.7;
    
    return imc;
}

float cIMC :: calcM(){
    float imc;
    
    imc=(72.7 * this->altura) - 58.0;
    
    return imc;
}



