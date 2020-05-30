/*
 * MedioContacto.h
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <iostream>
using namespace std;

#ifndef MEDIOCONTACTO_H_
#define MEDIOCONTACTO_H_

class MedioContacto {
private:
	string nombreMedio;
	string valor;
public:
	MedioContacto();
	virtual ~MedioContacto();

	void setNombreMedio(string nombreMedio);
	string getNombreMedio();
	void setValor(string valor);
	string getValor();
};

#endif /* MEDIOCONTACTO_H_ */
