/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDuplamente.cpp
 * Author: felipe
 * 
 * Created on 14 de novembro de 2022, 19:37
 */

#include "cDuplamente.h"
#include <iostream>

using namespace std;
cDuplamente::cDuplamente() {
}

cDuplamente::cDuplamente(const cDuplamente& orig) {
}

cDuplamente::~cDuplamente() {
}

void cDuplamente :: Inserir(){
    int x;
    
    
    
    cout<<"Digite o elemento: ";
    cin>>x;
    
    this->aux=(struct Nodo*) malloc(sizeof(this->aux));
    this->aux->elemento=x;
    
    if(this->inicio==NULL){
        this->aux->ant= NULL;
        this->inicio=this->aux;
    }
    else{
        this->aux->prox=NULL;
        this->fim->prox= this->aux;
        this->aux->ant= this->fim;
    }
    
    
    this->fim=this->aux;
    this->fim->prox = NULL;
    
    /*cout<<this->aux<<"\n";
    cout<<this->inicio<<"\n";
    cout<<this->aux->prox<<"\n";
    cout<<this->aux->ant<<"\n";
    */cout<<"\nElemento inserido!\n\n";
    
}

void cDuplamente :: Menu(){
    int opc;
    while(opc!=0){
        switch(opc){
            case 1:
               this->Inserir();
            break;
            case 2:
                this->Listar();
            break;
            case 3:
                this->Remover();
            break;
            case 4:
                this->Inserir_Meio();
            break;
            case 5:
                this->Remover_Meio();
    };
    cout<<endl;
    cout<<"Digete\n1-Cadastrar:\n2-Listar\n3-Remover\n4-Inserir_Meio\n5-Remover_Meio\n0-Sair\n\nDigite:";
    cin>>opc;
    }
}


void cDuplamente ::Listar(){
    int opc;
    cout<<"Digite" <<endl<< "1- para listar em FILA " << endl <<"2- para listar em PILHA" <<endl<< "Digite:";
    cin>>opc;
    if(opc==1){
       for(this->aux=this->inicio; this->aux!=NULL; this->aux=this->aux->prox){
        cout<<this->aux->elemento;
        cout<<endl;
    }}
    else{
        for(this->aux=this->fim; this->aux!=NULL ;this->aux=this->aux->ant){
        cout<<this->aux->elemento;
        cout<<endl;
    }
        
    }
  
    

}

void cDuplamente :: Remover(){
    int opc;
    cout<<"Digite" <<endl<< "1- para remover o primeiro " << endl <<"2-para remover o ultimo";
    cin>>opc;
    if(opc==1){
        if(this->inicio!=NULL){
            this->aux=inicio;
            this->inicio= this->inicio->prox;
            //this->fim=this->aux->ant;
            free(this->aux);
        }
    }
    else{
        if(this->fim!=NULL){
            this->aux=this->fim;
            this->fim=this->fim->ant;
            free(this->aux);
        }
    }
}

void cDuplamente :: Inserir_Meio(){
    this->aux=(struct Nodo*)malloc(sizeof(aux));
    this->aux->elemento=15;
    aux->prox=fim;
    aux->ant=inicio;
    fim->ant=aux;
    inicio->prox=aux;
}

void cDuplamente :: Remover_Meio(){
    if(this->fim->ant==this->inicio->prox){
        this->aux=inicio->prox;
        this->inicio->prox=this->fim;
        this->fim->ant=this->inicio;
        free(this->aux);
    }
}