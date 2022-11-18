#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cliente{
	private:
		string nome;
		string domicilio;
		vector<ContoCorrente> contiCorrente;
	
	public:
		Cliente();
		Cliente(string, string);
		~Cliente();
};
