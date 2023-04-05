/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cLancheria.h
 * Author: felipe
 *
 * Created on 16 de agosto de 2022, 19:04
 */

#ifndef CLANCHERIA_H
#define CLANCHERIA_H

class cLancheria {
public:
    cLancheria();
    cLancheria(const cLancheria& orig);
    virtual ~cLancheria();
    
    void caixa();
    float calculo(int opc);
private:

};

#endif /* CLANCHERIA_H */

