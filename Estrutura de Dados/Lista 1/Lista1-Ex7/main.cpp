/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: felipe
 *
 * Created on 14 de agosto de 2022, 09:01
 */

#include <cstdlib>
#include <iostream>
#include "cCusto.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cCusto obj1;
    obj1.lerDados();
    cout<<obj1.calcPreco();
    return 0;
}

