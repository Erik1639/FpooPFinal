/*
 * Estudios.h
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <iostream>
using namespace std;

#ifndef ESTUDIOS_H_
#define ESTUDIOS_H_

class Estudios {
private:
	string licenciatura;
	string cedula;
public:
	Estudios();
	virtual ~Estudios();

	void setLicenciatura(string licenciatura);
	string getLicenciatura();
	void setCedula(string cedula);
	string getCedula();
};

#endif /* ESTUDIOS_H_ */
