/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMediaTotal.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 11:04
 */

#ifndef CMEDIATOTAL_H
#define CMEDIATOTAL_H

class cMediaTotal {
public:
    
    float nota1,nota2,nota3;
    cMediaTotal();
    cMediaTotal(const cMediaTotal& orig);
    virtual ~cMediaTotal();
    
    
    void lerNotas();
    
    float media(int opcao);
private:

};

#endif /* CMEDIATOTAL_H */

