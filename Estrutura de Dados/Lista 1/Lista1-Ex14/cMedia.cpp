/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: felipe
 * 
 * Created on 15 de agosto de 2022, 11:03
 */

#include "cMedia.h"
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia :: lerDados(){
    int codigo;
    float media,nota1,nota2,nota3;
  
    cout << "Insira o seu codigo no sistema : ";
    cin >> codigo;
    cout << "Digite a nota  :";
    cin >> nota1;
    cout << "Digite a nota  :";
    cin >> nota2;
    cout << "Digite a nota  :";
    cin >> nota3;
    
    media = this->media(nota1,nota2,nota3);
    cout << endl;
    
    if(media>=5){
        cout << "O aluno do codigo: " << codigo << "\nObteve media:" << media << "\nesta aprovado";
    }
    else{
        cout << "O aluno do codigo: " << codigo << "\nObteve media:" << media << "\nesta reprovado";
    }
}


float cMedia :: media(float nota1, float nota2, float nota3){
    float calc;
    
    calc = ((nota1*4+nota2*3+nota3*3)/10);
    
    return calc;
}

