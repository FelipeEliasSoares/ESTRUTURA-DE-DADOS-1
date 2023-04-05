/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   lerNumeros.cpp
 * Author: felipe
 * 
 * Created on 15 de agosto de 2022, 10:46
 */

#include "lerNumeros.h"
#include <iostream>

using namespace std;

lerNumeros::lerNumeros() {
}

lerNumeros::lerNumeros(const lerNumeros& orig) {
}

lerNumeros::~lerNumeros() {
}

void lerNumeros::numeros(){
    int n1,n2,n3,maior;
    
    cout << "Digite o seu primeiro numero: ";
    cin>>n1;
    cout << "Digite o seu segundo numero: ";
    cin>>n2;
    cout << "Digite o seu terceiro numero: ";
    cin>>n3;
    
    if(n1>n2){
        if(n1>n3){
            maior= n1;
        }
        else{
            maior =n3;
        }
    }
    
    else{
        if(n2>n3){
            maior = n2;
        }
        else{
            maior= n3;
        }
    }

    cout << "O maior numero entre os três foi " << maior;
}

