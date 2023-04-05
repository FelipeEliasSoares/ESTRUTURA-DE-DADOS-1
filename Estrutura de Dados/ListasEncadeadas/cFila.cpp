/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFila.cpp
 * Author: aluno
 * 
 * Created on 27 de outubro de 2022, 08:09
 */

#include "cFila.h"
#include <iostream>

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}


void cFila::Cadastrar(){
	int x;

        cout<<"\nEntre com o numero a inserir: ";
        cin>>x;
        if(Consultar(x)==true){
            cout<<"Ja exite";
            cout<<endl;
        }
        else{

            this->aux=(struct nodo *) malloc(sizeof(this->aux));
            this->aux->elem=x;

            if(this->inicio==NULL){
                this->inicio= this->aux;
            }
            else{
                this->fim->prox= this->aux;
            }

            this->fim= this->aux;
            this->fim->prox=NULL;
        }
        cout<<this->aux<<"\n";
        cout<<this->inicio<<"\n";
        cout<<this->aux->prox<<"\n";
	cout<<this->fim<<"\n";
	cout<<"\nElemento inserido!\n\n";
        
}

void cFila ::Listar(){
    for (this->aux=this->inicio; this->aux!=NULL; this->aux=this->aux->prox){
            cout<<this->aux->elem;
            cout<<endl;
    }
}

void cFila ::Remover(){
	if (this->inicio!=NULL){
	   this->aux=this->inicio;
	   this->inicio=this->inicio->prox;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!";
	}
}

void cFila ::Menu(){
    int opc;
    while(opc!=0){
        switch(opc){
            case 1:
               this->Cadastrar();
            break;
            case 2:
                this->Listar();
            break;
            case 3:
                this->Remover();
            break;
    };
    cout<<endl;
    cout<<"Digete\n1-Cadastrar\n2-Listar\n3-Remover\n4-Consultar \n0-sair : ";
    cin>>opc;
    }
}

bool cFila ::Consultar(int x){
   bool chave=false;
    for(this->aux;this->aux!=NULL;this->aux->prox){
        if(x== this->aux->elem){
            return chave=true;
        }
        return chave;
    }
}