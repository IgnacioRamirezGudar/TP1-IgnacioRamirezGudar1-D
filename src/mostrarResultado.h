/*
 * mostrarResultado.h
 *
 *  Created on: 11 abr. 2022
 *      Author: ignacio Ramirez Gudar
 */

#ifndef MOSTRARRESULTADO_H_
#define MOSTRARRESULTADO_H_

void mostrarCargaForzada(float kilometros,float aerolineasArgentinas,float latam, float totDebitoAerolineasArg, float totDebitoLatam, float totInteresAerolineasArg, float totInteresLatam, float totBitcoinAerolineasArg,
		float totBitcoinLatam, float precioUnitarioporKmAerolineasArg, float precioUnitarioporKmLatam, float diferenciaDePreciosDeVuelo);
void mostarDatosAerolineas(float kilometros,float aerolineasArgentinas,float resultadoDebitoAerolineas, float resultadoCreditoAerolineas, float resultadoBitcoinAerolineas
							, float resultadoPrecioUnitarioAerolineas);
void mostarDatosLatam(float resultadoDebitLatam, float latam,float resultadoCreditoLatam, float resultadoBitcoinLatam, float resultadoPrecioUnitarioLatam
						, float resultadoDiferenciaDePrecio);
#endif /* MOSTRARRESULTADO_H_ */
