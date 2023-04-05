/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: felipe
 *
 * Created on 14 de agosto de 2022, 08:25
 */

#include <cstdlib>

#include "mTempo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    mTempo obj1;
    obj1.lerDados();
    obj1.calcTempo();
    return 0;
}

