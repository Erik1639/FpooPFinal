/*
 * Profesor.h
 *
 *  Created on: 19 may. 2020
 *      Author: erickl
 */
#include <iostream>
using namespace std;

#ifndef PROFESOR_H_
#define PROFESOR_H_

class Profesor{
private:
	string nombre;
	string primerApellido;
	string segundoApellido;
	int dia;
	int mes;
	int ano;
	string rfc;
public:
	//Profesor(string);
	Profesor();
	virtual ~Profesor();

	void setNombre(string nombre);
	string getNombre();
	void setPrimerApellido(string primerApellido);
	string getPrimerApellido();
	void setSegundoApellido(string segundoApellido);
	string getSegundoApellido();
	void setDia(int dia);
	int getDia();
	void setMes(int mes);
	int getMes();
	void setAno(int ano);
	int getAno();
	void setRfc(string rfc);
	string getRfc();
};

#endif /* PROFESOR_H_ */
