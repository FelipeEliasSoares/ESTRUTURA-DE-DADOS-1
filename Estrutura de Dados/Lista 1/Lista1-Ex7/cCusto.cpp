/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCusto.cpp
 * Author: felipe
 * 
 * Created on 14 de agosto de 2022, 09:13
 */

#include "cCusto.h"
#include <iostream>

using namespace std;

cCusto::cCusto() {
}

cCusto::cCusto(const cCusto& orig) {
}

cCusto::~cCusto() {
}

void cCusto :: lerDados(){
    float custo_P;
    
    this->custo_p= custo_P;
    cout<<"Digite o custo de produção: ";
    cin>>this->custo_p;
    
}

float cCusto :: calcPreco(){
    
    float valorDistribuidor,valorImposto,valorComsumidor,portDistribuidor,portPercimposto;
    
    portDistribuidor = 28;
    portPercimposto=45;
    
    valorDistribuidor= this->custo_p + (this->custo_p*portDistribuidor/100);
    valorImposto=  this->custo_p + (this->custo_p*portPercimposto/100);
    valorComsumidor = this->custo_p + valorImposto + valorDistribuidor;
    
    return valorComsumidor;
}


