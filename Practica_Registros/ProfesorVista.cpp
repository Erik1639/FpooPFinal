/*
 * ProfesorVista.cpp
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include "Profesor.h"
#include "Estudios.h"
#include "MedioContacto.h"
#include "ProfesorBs.h"
#include "ProfesorVista.h"

using namespace std;

ProfesorVista::ProfesorVista() {
	// TODO Auto-generated constructor stub

}

ProfesorVista::~ProfesorVista() {
	// TODO Auto-generated destructor stub
}

void ProfesorVista::wRegistraProfesor(){

}

//Declaracion de variables globales
string nombre, primerAp, segundoAp,rfc;
int dia,mes,ano;
string licenciatura,cedula;
string medio,valor;

void profe();
void ecribirArchivo();
void leerArchivo();

int main(){

	int op;
	cout<<"\t-----ALTA DE PROFESORES -----"<<endl;
	cout<<"Elige una opcion a realizar: "<<endl;
	cout<<"1)Registrar Profesor"<<endl;
	cout<<"2)Mostrar Registros "<<endl;
	cin>>op;

	switch (op) {
		case 1:
			profe();
			break;
		case 2:
			leerArchivo();
			break;
	}
}

void profe(){
				cout<<"\t----- Ingrese informacion del docente -----"<<endl;

				Profesor *profesor;
				profesor = new Profesor();

				Estudios *estudios;
				estudios = new Estudios();

				MedioContacto *medioC;
				medioC = new MedioContacto();

				/*string nombre, primerAp, segundoAp,rfc;
				int dia,mes,ano;
				string licenciatura,cedula;
				string medio,valor;*/
				cout<<"Nombre: "<<endl;
				cin>>nombre;
				cout<<"Primer Apellido: "<<endl;
				cin>>primerAp;
				cout<<"Segundo Apellido: "<<endl;
				cin>>segundoAp;
				cout<<"Dia de Nacimineto: "<<endl;
				cin>>dia;
				cout<<"Mes de Nacimiento: "<<endl;
				cin>>mes;
				cout<<"Ano de Nacimiento: "<<endl;
				cin>>ano;
				cout<<"RFC: "<<endl;
				cin>>rfc;
				cout<<"Licenciatura: "<<endl;
				cin>>licenciatura;
				cout<<"No. Cedula: "<<endl;
				cin>>cedula;
				cout<<"Medio de Contacto: "<<endl;
				cin>>medio;
				cout<<"Dato: "<<endl;
				cin>>valor;

				profesor->setNombre(nombre);
				profesor->setPrimerApellido(primerAp);
				profesor->setSegundoApellido(segundoAp);
				profesor->setDia(dia);
				profesor->setMes(mes);
				profesor->setMes(mes);
				profesor->setAno(ano);
				profesor->setRfc(rfc);

				estudios->setLicenciatura(licenciatura);
				estudios->setCedula(cedula);

				medioC->setNombreMedio(medio);
				medioC->setValor(valor);

				cout<<profesor->getNombre()<<" "<<profesor->getPrimerApellido()<<" "<<profesor->getSegundoApellido()<<" "<<profesor->getDia()
					<<" "<<profesor->getMes()<<" "<<profesor->getAno()<<" "<<profesor->getRfc()<<endl;

				cout<<estudios->getLicenciatura()<<" "<<estudios->getCedula()<<endl;

				cout<<medioC->getNombreMedio()<<" "<<medioC->getValor();

				ecribirArchivo();

				delete profesor;
				delete estudios;
				delete medioC;

}

void ecribirArchivo(){//guardar archivo

	ofstream archivo;

	archivo.open("Registros.txt",ios::app);//Abriendo archivo

	if(archivo.fail()){
		cout<<"Error al abrir archivo!";
		exit(1);
	}else{

	archivo<<"\nDatos ingresados\n";
	archivo<<"Nombre: " + nombre;
	archivo<<"\nPrimer Apellido: " + primerAp;
	archivo<<"\nSegundo Apellido: " + segundoAp;
	archivo<<"\nDia de Nacimiento: " + dia;
	archivo<<"\nMes de Nacimiento: " + mes;
	archivo<<"\nAno de Nacimiento: " + ano;
	archivo<<"\nLicenciatura: " + licenciatura;
	archivo<<"\nCedula: " + cedula;
	archivo<<"\nMedio de Contacto: " + medio;
	archivo<<"\nDato: " + valor;
	archivo<<"\n\n";
	archivo.close();

	}
	cout<<"\n\tExito al escribir archivo !";
}

void leerArchivo(){//mpstrar registros

	ifstream archivo;
	string texto;

	archivo.open("Registros.txt",ios::in);//Abriendo archivo

	if(archivo.fail()){
		cout<<"Error al abrir el archivo! \n Verificar su existencia!";
		exit(1);
	}else{
		cout<<"\n\nAbriendo Archivo: \n\n";
		while(!archivo.eof()){

			getline(archivo,texto);
			cout<<texto<<endl;
		}
	}
	archivo.close();
}
