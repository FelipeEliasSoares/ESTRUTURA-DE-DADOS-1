/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:54
 */

#include <cstdlib>

#include "cPlano.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cPlano obj; 
    obj.lerDados();
    // Alocação estatica
    //cPlano *obj = new cPlano();  Alocação Dinamica
    return 0;
}

