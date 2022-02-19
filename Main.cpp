#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ape,dir,f;
	int tel;
	cout<<"Ingrese Nit:";
	cin>>n;
	cout<<"Ingrese Nombres:";
	cin>>nom;
	cout<<"Ingrese Apellidos:";
	cin>>ape;
	cout<<"Ingrese Direccion:";
	cin>>dir;
	cout<<"Ingrese Nacimiento:";
	cin>>f;
	cout<<"Ingrese Telefono:";
	cin>>tel;
	
	//instancias
	Cliente obj_c = Cliente(nom,ape,dir,f,tel,n);
	obj_c.leer();
	
}
