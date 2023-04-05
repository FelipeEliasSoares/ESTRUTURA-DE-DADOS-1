/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   mediaFinal.h
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 18:45
 */

#ifndef MEDIAFINAL_H
#define MEDIAFINAL_H

class mediaFinal {
public:
    mediaFinal();
    mediaFinal(const mediaFinal& orig);
    virtual ~mediaFinal();
        
    float nota1,nota2,nota3;
    void lerDados();
    float calculo();
private:

};

#endif /* MEDIAFINAL_H */

