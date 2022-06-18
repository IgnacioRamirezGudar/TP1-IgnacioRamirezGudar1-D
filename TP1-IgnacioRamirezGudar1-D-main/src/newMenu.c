/*
 * newMenu.c
 *
 *  Created on: 14 abr. 2022
 *      Author: ignac
 */


#include <stdio.h>
#include "mostrarResultado.h"
#include "calculos.h"


void clearscreen(void){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void newMenu(int activar, int activar2,float kilometros, float precioAerolineas,float precioLatam){
	int opcionesMenu;
	char YorN;
	int opcionesDeVuelo;
	int suma;


	float resultadoDebitoAerolineas;
	float resultadoDebitLatam;
	float resultadoCreditoAerolineas;
	float resultadoCreditoLatam;
	float resultadoBitcoinAerolineas;
	float resultadoBitcoinLatam;
	float resultadoPrecioUnitarioAerolineas;
	float resultadoPrecioUnitarioLatam;
	float resultadoDiferenciaDePrecio;

	suma = activar + activar2;

	if(suma == 2){
		do{
				printf("\n----------Menu de vuelo----------");
				printf("\n1) Ingreso de kilómetros del vuelo");
				printf("\n2) Opciones de vuelos");
				printf("\n3) Informar resultados");
				printf("\n4) Carga de datos forzada");
				printf("\n5) Salir");
				printf("\n---------------------------------------------");
				printf("\nOpcion a elegir:");
				scanf("%d", &opcionesMenu);
				clearscreen();
				switch(opcionesMenu){
					case 1:
						printf("\n[Dato anterior ingredo: %2.f km]", kilometros);
						printf("\n1) Ingreso de kilómetros del vuelo: ");
						scanf("%f", &kilometros);

						while (kilometros <= 0){
							printf("Error... reingrese Kilómetros: ");
							scanf("%f", &kilometros);
						}
						break;
					case 2:
						printf("\n[Dato anterior de Aerolineas cargado: $%2.f]", precioAerolineas);
						printf("\n[Dato anterior de Latam cargado: $%2.f]", precioLatam);
						do{
								printf("\n----------Ingreso de precios por tipo de vuelo------------");
								printf("\nEliga el tipo de vuelo: ");
								printf("\n1) Vuelo Aerolíneas");
								printf("\n2) Vuelo Latam");
								printf("\nOpcion: ");
								scanf("%d", &opcionesDeVuelo);
								switch(opcionesDeVuelo){
									case 1:
										printf("\n- Ingrese precio de vuelos Aerolíneas: ");
										scanf("%f", &precioAerolineas);
										break;
									case 2:
										printf("\n- Ingrese precio de vuelos Latam: ");
										scanf("%f", &precioLatam);
										break;
									default:
										printf("\nOpcion incorrecta");
										break;
								}
						}while(opcionesDeVuelo != 2);
						break;
					case 3:
						resultadoDebitoAerolineas = debitoAerolineas(precioAerolineas);
						resultadoDebitLatam = debitoLatam(precioLatam);
						resultadoCreditoAerolineas = creditoAerolineas(precioAerolineas);
						resultadoCreditoLatam = creditoLatam(precioLatam);
						resultadoBitcoinAerolineas = bitcoinAerolineas(precioAerolineas);
						resultadoBitcoinLatam = bitcoinLatam(precioLatam);
						resultadoPrecioUnitarioAerolineas = precioUnitarioAerolineas(kilometros,precioAerolineas);
						resultadoPrecioUnitarioLatam = precioUnitarioLatam(kilometros,precioLatam);
						resultadoDiferenciaDePrecio = diferenciaEntrePrecios(precioAerolineas, precioLatam);
						mostarDatosAerolineas(kilometros,precioAerolineas,resultadoDebitoAerolineas, resultadoCreditoAerolineas, resultadoBitcoinAerolineas, resultadoPrecioUnitarioAerolineas);
						mostarDatosLatam(resultadoDebitLatam,precioLatam ,resultadoCreditoLatam, resultadoBitcoinLatam, resultadoPrecioUnitarioLatam, resultadoDiferenciaDePrecio);
						printf("\n\t\t\tVolver al menu inicial (S / N): ");
						scanf("%s", &YorN);
						switch(YorN){
							case 'S':
							case 's':
								break;
						}
						break;
					case 4:
						cargaForzada();
						printf("\n\t\t\tVolver al menu inicial (S / N): ");
						scanf("%s", &YorN);
						switch(YorN){
							case 'S':
							case 's':
								break;
						}
						break;
					case 5:
						printf("\n\t\t\t-------------------SALISTE DE LA APLICACION-------------------");
						break;
					default:
						printf("\nOpcion incorrecta");
						break;
				}

			}while(opcionesMenu != 5);
	}
}
