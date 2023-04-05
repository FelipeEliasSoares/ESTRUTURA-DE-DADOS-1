/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cBanco.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 10:19
 */

#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    
    float salarioMedio;
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    
    void lerDados();
    float calculo();
   
private:
    


};

#endif /* CBANCO_H */

