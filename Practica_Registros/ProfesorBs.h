/*
 * ProfesorBs.h
 *
 *  Created on: 21 may. 2020
 *      Author: erickl
 */
#include <string>
#include "Profesor.h"

#ifndef PROFESORBS_H_
#define PROFESORBS_H_

class ProfesorBs : public Profesor{
public:
	ProfesorBs();
	virtual ~ProfesorBs();

	//void registrarProfesor(int profesor);
	void validaProfesor();
};

#endif /* PROFESORBS_H_ */
