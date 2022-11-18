#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef CONTOCORRENTE_H
#define CONTOCORRENTE_H
#include "ContoCorrente.h"
#endif

ContoCorrente::ContoCorrente(string numeroConto, float saldo){
	this-> numeroConto= numeroConto;
	this-> saldo = saldo;
}

ContoCorrente::deposita(float importo){
	cin>>importo;
	saldo+=importo;
}

ContoCorrente::preleva(float importo){
	do{
		cin>>importo;
	}while(importo>saldo);
	
	saldo-=importo;
}

ContoCorrente::~ContoCorrente(){
	cout<<"Conto corrente eliminato";
}

ContoCorrente::acquistaTitoloDiStato(){
	
}
