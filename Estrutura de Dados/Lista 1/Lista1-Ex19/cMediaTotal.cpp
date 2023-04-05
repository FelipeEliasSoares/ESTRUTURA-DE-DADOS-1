/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMediaTotal.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2022, 11:04
 */

#include "cMediaTotal.h"
#include <iostream>

using namespace std;
cMediaTotal::cMediaTotal() {
}

cMediaTotal::cMediaTotal(const cMediaTotal& orig) {
}

cMediaTotal::~cMediaTotal() {
}

void cMediaTotal :: lerNotas(){
    
    float mediaf;
    int opcao;
    cout << "Digite a sua nota 1:";
    cin>>this->nota1;
    cout << "Digite a sua nota 2: ";
    cin>>this->nota2;
    cout << "Digite a sua nota 3: ";
    cin>> this->nota3;
    
    cout << "Tipo de media" <<endl;
    cout << "1 -Media ponderada" << endl;
    cout << "2 -Media aritmetrica" << endl;
    cout << "3 -Media harmonica" << endl;
    cout << "Digite: ";
    cin>>opcao;
    mediaf = media(opcao); 
    
    cout << "Sua media é  " << mediaf;
}

float cMediaTotal :: media(int opcao){
    
    float mediaF;
    switch(opcao){
        case 1:
            cout << "A media selecionada foi Media Ponderada"<<endl;
            mediaF= ((this->nota1*3) + (this->nota2*3) + (this->nota3*4))/10;
        break;
        case 2:
            cout << "A media selecionada foi Aritmetrica"<<endl;
            mediaF= (this->nota1 + this->nota2 + this->nota3)/3;
        break;
        case 3:
            cout << "A media selecionada foi Media Harmonica"<<endl;
            mediaF = 3/(1/this->nota1 + 1/this->nota2 +1/this->nota3);
                    
    }
    
    return mediaF;
    
}