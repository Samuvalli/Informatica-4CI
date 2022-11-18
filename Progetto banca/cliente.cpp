#include <iostream>
#include <string>
#include <vector>
using namespace std;

Cliente::Cliente(string nome, string domicilio){
	this-> nome = nome; 
	this-> domicilio = domicilio;
}

Cliente::~Cliente(){
	cout<<"Cliente perso"<<endl;
}
