/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIMC.h
 * Author: felipe
 *
 * Created on 16 de agosto de 2022, 19:34
 */

#ifndef CIMC_H
#define CIMC_H

class cIMC {
public:
    cIMC();
    cIMC(const cIMC& orig);
    virtual ~cIMC();
    
    void lerDados();
    float calcM();
    float calcF();
    float altura;
    
    
private:

};

#endif /* CIMC_H */

