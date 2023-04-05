/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 16:41
 */

#include <cstdlib>
#include <iostream>
#include "cExpressao.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cExpressao  obj1;
        obj1.lerDados();
        cout << obj1.calcularE();
    
    return 0;
}

