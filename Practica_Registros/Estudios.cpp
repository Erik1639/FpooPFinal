/*
 * Estudios.cpp
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <iostream>
using namespace std;

#include "Estudios.h"

Estudios::Estudios() {
	// TODO Auto-generated constructor stub

}

Estudios::~Estudios() {
	// TODO Auto-generated destructor stub
}

void Estudios::setLicenciatura(string licenciatura){

	this -> licenciatura = licenciatura;
}

void Estudios::setCedula(string cedula){

	this -> cedula = cedula;
}

string Estudios::getLicenciatura(){

	return licenciatura;
}

string Estudios::getCedula(){

	return cedula;
}
