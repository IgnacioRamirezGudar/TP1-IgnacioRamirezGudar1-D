/*
 * calculos.h
 *
 *  Created on: 11 abr. 2022
 *      Author: ignacio Ramirez Gudar
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

float debitoAerolineas(float precioAerolineas);
float debitoLatam(float precioLatam);
float creditoAerolineas(float precioAerolineas);
float creditoLatam(float precioLatam);
float bitcoinAerolineas( float precioAerolineas);
float bitcoinLatam(float precioLatam);
float precioUnitarioAerolineas(float kilometros,float precioAerolineas);
float precioUnitarioLatam(float kilometros,float precioLatam);
float diferenciaEntrePrecios(float precioAerolineas, float precioLatam);
void cargaForzada(void);
#endif /* CALCULOS_H_ */
