/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDias.h
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 17:22
 */

#ifndef CDIAS_H
#define CDIAS_H

class cDias {
public:
    cDias();
    cDias(const cDias& orig);
    virtual ~cDias();
    
    int anos,dias,meses;
    void LerIdade();
    int idade();
private:

};

#endif /* CDIAS_H */

