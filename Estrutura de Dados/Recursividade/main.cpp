/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 6 de outubro de 2022, 10:33
 */

#include <cstdlib>
#include <iostream>

#include "Recursivade.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Recursivade obj;
    int number;
    cout << "Digite o numero: ";
    cin >> number;
    cout << number << "! = " << obj.factorial(number) << endl;
    return 0;
    return 0;
}

