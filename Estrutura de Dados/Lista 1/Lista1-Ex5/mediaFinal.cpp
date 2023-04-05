/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mediaFinal.cpp
 * Author: felipe
 * 
 * Created on 13 de agosto de 2022, 18:45
 */

#include "mediaFinal.h"]
#include <iostream>

using namespace std; 
mediaFinal::mediaFinal() {
}

mediaFinal::mediaFinal(const mediaFinal& orig) {
}

mediaFinal::~mediaFinal() {
}

void mediaFinal::lerDados(){
    cout << "Digite o seu nota1 :";
    cin>>this->nota1;
    cout << "Digite o seu nota2 :";
    cin>>this->nota2;
    cout << "Digite o seu nota3 :";
    cin>>this->nota3;
}

float mediaFinal::calculo(){
    float media;
    
    media = ((this->nota1*2)+(this->nota2*3)+(this->nota3*5)/10);
    return media;
}
