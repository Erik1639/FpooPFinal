/*
 * MedioContacto.cpp
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <iostream>
#include "MedioContacto.h"

MedioContacto::MedioContacto() {
	// TODO Auto-generated constructor stub

}

MedioContacto::~MedioContacto() {
	// TODO Auto-generated destructor stub
}

void MedioContacto::setNombreMedio(string nombreMedio){

	this  -> nombreMedio = nombreMedio;
}

void MedioContacto::setValor(string valor){

	this -> valor = valor;
}

string MedioContacto::getNombreMedio(){

	return nombreMedio;
}

string MedioContacto::getValor(){

	return valor;
}
