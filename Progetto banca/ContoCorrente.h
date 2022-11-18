#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef MUTUO_H
#define MUTUO_H
#include "Mutuo.h"
#endif


class ContoCorrente{
	private:
		string numeroConto;
		float saldo;
		vector<Mutuo> mutuiAccesi;
		//vector<TitoloDiStato> titoliDiStato;
	public:
		ContoCorrente();
		ContoCorrente(string);
		ContoCorrente(string, float);
		void preleva(float);
		void deposita(float);
		void acquistaTitoloDiStato(string);
		~ContoCorrente();
		
		
		
};
