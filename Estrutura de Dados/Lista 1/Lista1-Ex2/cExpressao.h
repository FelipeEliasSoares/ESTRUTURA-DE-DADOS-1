/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cExpressao.h
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 16:48
 */

#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    
    
    int  A,B,C,R,S;
    float D;
    void lerDados();
    float calcularE();
    
private:

};

#endif /* CEXPRESSAO_H */

