/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPedido.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2022, 09:15
 */

#include "cPedido.h"
#include <iostream>
#include <memory>

using namespace std;
cPedido::cPedido() {
}

cPedido::cPedido(const cPedido& orig) {
}

cPedido::~cPedido() {
}

void cPedido :: lerDados(){
    
    int codProduto=0, qtdeProduto;
    char opcao;
    float conta;
    cout << "Tabela de codigos  - Protudos"<<endl;
    
    while(opcao!='s'){        
        cout << "Digite o codigo do produto"<< endl;
        cin >>codProduto;
        cout << "Digite a quatidade desse produto: ";
        cin >> qtdeProduto;
    
        conta+=calcularConta(codProduto,qtdeProduto);
    
        cout << "Digite s para sair ou n para continuar";
        cin>>opcao;
    }
    
    cout << "Valor final da conta é: " << conta;
}


float cPedido :: calcularConta(int codProduto,int qtdeProduto){
    
    float valorFinal;
 
    switch(codProduto){
        case 1001: valorFinal = 5.32 *qtdeProduto;
        break;
        case 1324: valorFinal = 6.45 *qtdeProduto;
        break;
        case 6548: valorFinal = 2.37 *qtdeProduto;
        break;
        case 687: valorFinal = 5.32 *qtdeProduto;
        break;
        case 7623: valorFinal = 6.45 *qtdeProduto;
        break;
    }
    return valorFinal;
    
}

