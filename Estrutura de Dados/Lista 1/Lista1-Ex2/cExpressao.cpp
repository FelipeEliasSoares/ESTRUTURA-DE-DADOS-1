/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cExpressao.cpp
 * Author: felipe
 * 
 * Created on 13 de agosto de 2022, 16:48
 */

#include "cExpressao.h"
#include <iostream>
#include <math.h>

using namespace std;
cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::lerDados(){

    cout << "Digite o valor A: ";
    cin >> this->A;
    cout << "Digite o valor B: ";
    cin >> this->B;
    cout << "Digite o valor C: ";
    cin >> this->C;
}


float cExpressao::calcularE(){ 
    R = pow((A + B), 2);
    S = pow((B + C),2);
    D = (R+S)/2;

    return D;
}
