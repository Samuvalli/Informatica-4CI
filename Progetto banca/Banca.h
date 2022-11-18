#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Banca{
	private:
		string nome;
		vector<Cliente> clienti;
		
	public:
		//getters & setters
		Banca();
		Banca(string);
		void aggiungiContoCorrente();
		void rimuoviContoCorrente();
		void accendiMutuo(Cliente, Mutuo);
		void accendiMutuo(Cliente, float, string, int);
		~Banca();		
};
