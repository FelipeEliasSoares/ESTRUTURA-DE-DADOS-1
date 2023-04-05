/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdade2.h
 * Author: felipe
 *
 * Created on 13 de agosto de 2022, 17:53
 */

#ifndef CIDADE2_H
#define CIDADE2_H

class cIdade2 {
public:
    cIdade2();
    cIdade2(const cIdade2& orig);
    virtual ~cIdade2();
    
    int dia;
    
    int anos();
    int meses();
    int dias();
    void lerDados();
    
private:

};

#endif /* CIDADE2_H */

