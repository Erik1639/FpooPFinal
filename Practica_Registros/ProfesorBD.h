/*
 * ProfesorBD.h
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include "Profesor.h"
#include <iostream>

#ifndef PROFESORBD_H_
#define PROFESORBD_H_

class ProfesorBD : public Profesor{
public:
	ProfesorBD();
	virtual ~ProfesorBD();

	int guardarProfesor();
	void buscaProfesor(string);
};

#endif /* PROFESORBD_H_ */
