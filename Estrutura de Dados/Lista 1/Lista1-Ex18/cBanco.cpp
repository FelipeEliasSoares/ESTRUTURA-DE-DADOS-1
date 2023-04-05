/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cBanco.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2022, 10:19
 */

#include "cBanco.h"
#include <iostream>

using namespace std;
cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}


void cBanco :: lerDados(){
    float credito;
    
    cout <<"Digite so seu salario medio: ";
    cin>> this->salarioMedio;
    
    credito = calculo();
    
    cout << "O valor do seu cretido é " << credito;
}

float cBanco :: calculo(){
    int opcao;
    float valorC;
    if((this->salarioMedio >= 0) && (this->salarioMedio <=200))
        opcao =1;
    else
      if((this->salarioMedio>=201) && (this->salarioMedio <=400))
        opcao = 2;
      else
          if((this->salarioMedio>=401)&&(this->salarioMedio <=600))
              opcao = 3;
          else
              if((this->salarioMedio>=601))
                  opcao=4;
              
    
    switch(opcao){
        case 1:
            
            valorC = 0;
        break;
        case 2: 
            
            valorC = this->salarioMedio*1.20;
        break;
        case 3: 
            valorC = this->salarioMedio*1.30;
        break;
        case 4: 
            valorC = this->salarioMedio*1.40;
        break;
            
    }
    
    return valorC;
    
    
}

