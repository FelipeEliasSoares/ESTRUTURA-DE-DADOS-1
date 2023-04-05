/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMaior.cpp
 * Author: felipe
 * 
 * Created on 18 de agosto de 2022, 20:24
 */

#include "cMaior.h"
#include <iostream>

using namespace std;
cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior :: lerNumeros(){
    int a,b,c,maior;
    
    cout << "Digite o numero A: ";
    cin >> a;
    cout << "Digite o numero A: ";
    cin >> b;
    cout << "Digite o numero A: ";
    cin >> c;
    
    if(a > b){
        if(a >c){
            cout << "O numero A" << a << " foi o maior";
        }
        else {
            cout << "O numero C" << c << " foi o maior";
        }
    }
    else
        if(b >c){
            cout << "O numero B" << b << " foi o maior";
        }
        else {
            cout << "O numero C" << c << " foi o maior";
        }
}

