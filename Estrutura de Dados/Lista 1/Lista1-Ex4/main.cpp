/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 17:52
 */

#include <cstdlib>
#include <iostream>

#include "cIdade2.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cIdade2 obj1;
    obj1.lerDados();
    cout << "voce tem " << obj1.anos() << " anos";
    cout << " voce tem " << obj1.meses() << " em meses" << endl;
    cout << "voce tem " << obj1.dias() << " em dias" << endl;
    return 0;
}

