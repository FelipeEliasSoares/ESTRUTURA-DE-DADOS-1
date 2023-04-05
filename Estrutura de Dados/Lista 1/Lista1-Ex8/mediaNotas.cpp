/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mediaNotas.cpp
 * Author: felipe
 * 
 * Created on 14 de agosto de 2022, 09:42
 */

#include "mediaNotas.h"
#include <iostream>

using namespace std;

mediaNotas::mediaNotas() {
}

mediaNotas::mediaNotas(const mediaNotas& orig) {
}

mediaNotas::~mediaNotas() {
}

float mediaNotas :: lerNotas(){
    float n1,n2,n3,media;
    
    cout << "Digite a nota1: ";
    cin>>n1;
    cout << "Digite a nota2: ";
    cin>>n2;
    cout << "Digite a nota2: ";
    cin>>n3;
    
    media=this->calcMedia(n1,n2,n3);
    
    cout << "Voce teve media "<< media <<endl ;
    if(media>=6){
        cout << "Aprovado";
        
    }
    else{
        cout << "Reprovado";
    }
         
}

float mediaNotas :: calcMedia(float n1,float n2,float n3){
    float media;
    
    media = (n1+n2+n3)/3;

    return media;
}
