/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMultiplos.cpp
 * Author: felipe
 * 
 * Created on 15 de agosto de 2022, 09:55
 */

#include "cMultiplos.h"
#include <iostream>

using namespace std;

cMultiplos::cMultiplos() {
}

cMultiplos::cMultiplos(const cMultiplos& orig) {
}

cMultiplos::~cMultiplos() {
}

void cMultiplos :: lerNumeros(){
    int a,b,m;
    
    cout << "Digite o primeiro numero: ";
    cin>>a;
    cout << "Digite o segundo numero: ";
    cin>>b;
    
    if(a>b){
        if( a % b==0){
            cout << "São multiplos";
        }
        else{
            cout << "Não são multiplos";
        }
    }
    else{
        if(b % a==0){
            cout << "São multiplos";
        }
        else{
            cout << "Não são multiplos";
        }
    }
}
