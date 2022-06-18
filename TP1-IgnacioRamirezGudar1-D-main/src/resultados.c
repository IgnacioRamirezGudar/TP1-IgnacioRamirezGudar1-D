/*
 * resultados.c
 *
 *  Created on: 11 abr. 2022
 *      Author: ignacio Ramirez Gudar
 */
#include <stdio.h>
#include "mostrarResultado.h"

float debitoAerolineas(float precioAerolineas){
	int descuento;
	float totalDescuentoAerolineas;
	descuento = 10;

	totalDescuentoAerolineas = precioAerolineas - (precioAerolineas*descuento/100);

	return totalDescuentoAerolineas;
}
float debitoLatam(float precioLatam){
	int descuento;
	float totalDescuentoLatam;
	descuento = 10;

	totalDescuentoLatam = precioLatam - (precioLatam * descuento/100);

	return totalDescuentoLatam;
}
float creditoAerolineas(float precioAerolineas){
	int interes;
	float totalInteresAerolineas;
	interes = 25;

	totalInteresAerolineas = precioAerolineas + (precioAerolineas*interes/100);

	return totalInteresAerolineas;
}
float creditoLatam(float precioLatam){
	int interes;
	float totalInteresLatam;
	interes = 25;

	totalInteresLatam = precioLatam + (precioLatam * interes/100);

	return totalInteresLatam;
}
float bitcoinAerolineas( float precioAerolineas){
	int bitcoin;
	float totalBitcoinAerolineas;
	bitcoin = 4606954.55;

	totalBitcoinAerolineas = precioAerolineas/bitcoin;

	return totalBitcoinAerolineas;
}
float bitcoinLatam(float precioLatam){
	int bitcoin;
	float totalBitcoinLatam;
	bitcoin = 4606954.55;

	totalBitcoinLatam = precioLatam/bitcoin;

	return totalBitcoinLatam;
}
float precioUnitarioAerolineas(float kilometros,float precioAerolineas){
	float totalPrecionUnitarioAerolineas;
	totalPrecionUnitarioAerolineas = precioAerolineas/kilometros;

	return totalPrecionUnitarioAerolineas;
}
float precioUnitarioLatam(float kilometros,float precioLatam){
	float totalPrecionUnitarioLatam;
	totalPrecionUnitarioLatam = precioLatam/kilometros;

	return totalPrecionUnitarioLatam;
}
float diferenciaEntrePrecios(float precioAerolineas, float precioLatam){
	float totalDiferenciaDePrecios;
	totalDiferenciaDePrecios = precioAerolineas - precioLatam;

	return totalDiferenciaDePrecios;
}

void cargaForzada(void){
	float kilometros;
	float aerolineasArgentinas;
	float latam;
	float totDebitoAerolineasArg;
	float totDebitoLatam;
	float totInteresAerolineasArg;
	float totInteresLatam;
	float totBitcoinAerolineasArg;
	float totBitcoinLatam;
	float precioUnitarioporKmAerolineasArg;
	float precioUnitarioporKmLatam;


	int descuento;
	int interes;
	float bitCoin;
	float diferenciaDePreciosDeVuelo;

	descuento = 10;
	interes = 25;
	bitCoin = 4606954.55;

	kilometros = 7090;
	aerolineasArgentinas = 162965;
	latam = 159339;

	totDebitoAerolineasArg = aerolineasArgentinas - (aerolineasArgentinas*descuento/100);
	totDebitoLatam = latam - (latam * descuento/100);

	totInteresAerolineasArg = aerolineasArgentinas + (aerolineasArgentinas*interes/100);
	totInteresLatam = latam + (latam * interes/100);

	totBitcoinAerolineasArg = aerolineasArgentinas/bitCoin;
	totBitcoinLatam = latam/bitCoin;

	precioUnitarioporKmAerolineasArg = aerolineasArgentinas/kilometros;
	precioUnitarioporKmLatam = latam/kilometros;

	diferenciaDePreciosDeVuelo = aerolineasArgentinas - latam;

	mostrarCargaForzada(kilometros,aerolineasArgentinas,latam,totDebitoAerolineasArg, totDebitoLatam, totInteresAerolineasArg,
						totInteresLatam, totBitcoinAerolineasArg, totBitcoinLatam, precioUnitarioporKmAerolineasArg, precioUnitarioporKmLatam, diferenciaDePreciosDeVuelo);

}
