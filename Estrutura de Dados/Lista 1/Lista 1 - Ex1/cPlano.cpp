/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPlano.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 10:55
 */

#include "cPlano.h"
#include <iostream>
#include <math.h>

using namespace std;
cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano :: lerDados(){
    cout << "Digite valor de X1: ";
    cin >>this->x1;
    
    cout << "Digite valor de y2: ";
    cin >>this->y1;
    
    cout << "Digite valor de x2: ";
    cin >>this->x2;
    
    cout << "Digite valor de y2: ";
    cin >>this->y2;
    
    cout <<"A distancia é: " << this->calcDistEucli();
}

float cPlano :: calcDistEucli(){
    float d;
    d = sqrt(pow((this->x2-this->x1),2)
            + pow((this->y2-this->y1),2));
    
    return d;
}