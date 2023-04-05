/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPedido.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 09:15
 */

#ifndef CPEDIDO_H
#define CPEDIDO_H

class cPedido {
public:
    
    cPedido();
    cPedido(const cPedido& orig);
    virtual ~cPedido();
    
 
    void lerDados();
    float calcularConta(int codProduto,int qtdeProduto);
private:

};

#endif /* CPEDIDO_H */

