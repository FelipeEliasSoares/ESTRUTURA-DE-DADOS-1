/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Recursivade.cpp
 * Author: aluno
 * 
 * Created on 6 de outubro de 2022, 10:33
 */

#include "Recursivade.h"
#include <iostream>

using namespace std;
Recursivade::Recursivade() {
}

Recursivade::Recursivade(const Recursivade& orig) {
}

Recursivade::~Recursivade() {
}


int Recursivade :: factorial (int a){
    if (a > 1)
    return (a * factorial (a-1));
    else
    return (1);
}