/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMultiplos.h
 * Author: felipe
 *
 * Created on 15 de agosto de 2022, 09:55
 */

#ifndef CMULTIPLOS_H
#define CMULTIPLOS_H

class cMultiplos {
public:
    cMultiplos();
    cMultiplos(const cMultiplos& orig);
    virtual ~cMultiplos();
    
    int multiplos(int a,int b);
    void lerNumeros();
private:

};

#endif /* CMULTIPLOS_H */

