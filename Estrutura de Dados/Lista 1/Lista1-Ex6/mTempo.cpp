/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mTempo.cpp
 * Author: felipe
 * 
 * Created on 14 de agosto de 2022, 08:26
 */

#include "mTempo.h"
#include <iostream>

using namespace std;
mTempo::mTempo() {
}

mTempo::mTempo(const mTempo& orig) {
}

mTempo::~mTempo() {
}

void mTempo :: lerDados(){
    int s;
    
    this->s= s;
    
    cout << "Digite o tempo em segundos: ";
    cin >>this->s;
    
}

void mTempo :: calcTempo(){
    int horas,minutos,segundos;
    
    horas= this->s/3600;
    minutos= ((this->s% 3600)/60);
    segundos =((this->s % 3600)/60);
    
    cout << "A duração foi de " << horas << " horas" << minutos << " minutos e " << segundos << " segundos";
    
    
}

