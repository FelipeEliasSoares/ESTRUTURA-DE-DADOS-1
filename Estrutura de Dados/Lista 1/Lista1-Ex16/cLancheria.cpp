/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cLancheria.cpp
 * Author: felipe
 * 
 * Created on 16 de agosto de 2022, 19:04
 */

#include "cLancheria.h"
#include <iostream>

using namespace std;

cLancheria::cLancheria() {
}

cLancheria::cLancheria(const cLancheria& orig) {
}

cLancheria::~cLancheria() {
}

void cLancheria :: caixa(){
    
    int opc;
    char continuar;
    float total;
    cout << "-----CARDAPIO-----" << endl;
    cout << "-----ESPECIFICAÇÂO-----CODIGO----PRECO" << endl;
    cout << "-----Cachorro quente---100-------1,20" <<endl;
    cout << "-----Bauru simples-----101-------1,30" <<endl;
    cout << "-----Bauru com ovo-----102-------1,50" <<endl;
    cout << "-----Hamburguer--------103-------1,20" <<endl;
    cout << "-----CheeseBurguer-----104-------1,30" << endl;
    cout << "-----Refrigerante------105-------1,30" <<endl;
    cout << endl;
    cout << "Digite o codigo do seu pedido";
    
    while(continuar !='s'){
        cout << "\n Digite o seu Numero : ";
        cin >> opc;
    
        total = this->calculo(opc);
    
        cout << "O toltal a ser pago é " << total<< endl;
       
        cout << "Digite s para sair ou n para continuar";
        cin>>continuar;
    }

}

float cLancheria :: calculo(int opc){
    float quantidade;
    
    switch(opc) {

        case 100:
        cout << "Voce escolheu Cachorro Quente. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.20;



    break;

    case 101:
        cout << "Voce escolheu Bauru simples. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.30;

    break;

    case 102:
        cout << "Voce escolheu Bauru com OVO. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.50;

    break;

    case 103:
        cout << "Voce escolheu Hamburger. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.20;
    break;

    case 104:
        cout << "Voce escolheu CheeseBurguer. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.30;
 
    break;

    case 105:
        cout << "Voce escolheu Refrigerante Lata. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 1.00;

    break;

    case 106:
        cout << "Voce escolheu Agua. Quantos voce deseja: ";
        cin >> quantidade;
        quantidade = quantidade * 3.00;

    break;

    default :
        cout << "Opção Invalida.";

    }
    
    return quantidade;
}