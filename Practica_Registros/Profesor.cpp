/*
 * Profesor.cpp
 *
 *  Created on: 19 may. 2020
 *      Author: erickl
 */
#include <iostream>
#include "Profesor.h"


Profesor::Profesor() {
	// TODO Auto-generated constructor stub

}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

void Profesor::setNombre(string nombre){

	this -> nombre = nombre;
}

void Profesor::setPrimerApellido(string primerApellido){

	this -> primerApellido = primerApellido;

}

void Profesor::setSegundoApellido(string segundoApellido){

	this -> segundoApellido = segundoApellido;
}

void Profesor::setDia(int dia){

	this -> dia = dia;
}

void Profesor::setMes(int mes){

	this -> mes = mes;
}

void Profesor::setAno(int ano){

	this -> ano = ano;
}

void Profesor::setRfc(string rfc){

	this -> rfc = rfc;
}

string Profesor::getNombre(){

	return nombre;
}

string Profesor::getPrimerApellido(){

	return primerApellido;
}

string Profesor::getSegundoApellido(){

	return segundoApellido;
}

int Profesor::getDia(){

	return dia;
}

int Profesor::getMes(){

	return mes;
}

int Profesor::getAno(){

	return ano;
}

string Profesor::getRfc(){

	return rfc;
}
