/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCusto.h
 * Author: felipe
 *
 * Created on 14 de agosto de 2022, 09:13
 */

#ifndef CCUSTO_H
#define CCUSTO_H

class cCusto {
public:
    cCusto();
    cCusto(const cCusto& orig);
    virtual ~cCusto();
    
    float custo_p;
    void lerDados();
    float calcPreco();
private:

    

};

#endif /* CCUSTO_H */

