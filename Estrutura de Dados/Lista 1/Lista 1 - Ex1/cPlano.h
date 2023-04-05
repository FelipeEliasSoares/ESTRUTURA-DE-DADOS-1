/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPlano.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:55
 */

#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:
    cPlano(); // Método costrutor
    cPlano(const cPlano& orig);
    virtual ~cPlano();
    
    int x1,x2,y1,y2;
    
    void lerDados();
    float calcDistEucli();
    
private:

};

#endif /* CPLANO_H */

