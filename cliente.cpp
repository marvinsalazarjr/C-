#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	//atributos
	private: string nit; 
	
	//envio de parametros
	public : 	
			Cliente(string nom, string ape, string dir, string f, int tel, string n) : Persona(nom,ape,dire,f,tel){
				nit=n;
			}
				
	// metodo de leer
	void leer(){
		cout<<"----------Metodo leer------------"<<endl;
		cout<<"Nit:  "<<nit<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos:  "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fn<<endl;
	}
};
