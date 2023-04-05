/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cVolume.cpp
 * Author: felipe
 * 
 * Created on 5 de setembro de 2022, 10:03
 */

#include "cVolume.h"
#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.14
using namespace std;

cVolume::cVolume() {
}

cVolume::cVolume(const cVolume& orig) {
}

cVolume::~cVolume() {
}

void cVolume :: LerRaio(){
    float raio,volumef;
    
    cout<<"---Calculador de volume---" << endl;
    cout<<"Digite o raio para o calculo:";
    cin>>raio;
    
    volumef=calcVolume(raio);
    
    cout<<"O volume é " << volumef << " .";
}

float cVolume :: calcVolume(float raio){
    float v;
    v= (4/3 *(PI*(pow(raio,3))));
    
    return v;
}