/*
 ============================================================================
 Name        : Tp1-IgnacioRamirezGudar1�D.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice :D
 Description : Trabajo Practico 1, (Yo en mi caso utilize arrays para hacer el trabajo, capaz no es lo que pidieron profes, pido perdon pero se me hizo facil hacerlo asi)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "mostrarResultado.h"
#include "datosAnteriores.h"

int main(void){
	setbuf(stdout, NULL);
	int opcionesMenu;
	char YorN;
	float kilometrosIngresados;
	int activar;
	int opcionesDeVuelo;
	int activar2;
	float precioAerolineas;
	float precioLatam;

	float resultadoDebitoAerolineas;
	float resultadoDebitLatam;
	float resultadoCreditoAerolineas;
	float resultadoCreditoLatam;
	float resultadoBitcoinAerolineas;
	float resultadoBitcoinLatam;
	float resultadoPrecioUnitarioAerolineas;
	float resultadoPrecioUnitarioLatam;
	float resultadoDiferenciaDePrecio;
	do{
		printf("\n----------Menu de vuelo----------");
		printf("\n1) Ingreso de kilómetros del vuelo");
		printf("\n2) Opciones de vuelos");
		printf("\n3) Carga de datos forzada");
		printf("\n4) Salir");
		printf("\n---------------------------------------------");
		printf("\nOpcion a elegir:");
		scanf("%d", &opcionesMenu);
		clearscreen();
		switch(opcionesMenu){
			case 1:
				activar = 1;
				printf("\n1) Ingreso de kilómetros del vuelo: ");
				scanf("%f", &kilometrosIngresados);

				while (kilometrosIngresados <= 0){
					printf("Error... reingrese Kilómetros: ");
					scanf("%f", &kilometrosIngresados);
				}
				clearscreen();
				break;
			case 2:
				if(kilometrosIngresados <= 0){
					printf("Error... primero debe ingresar los Kilómetros: ");
				} else {
					do{
						activar2 = 1;
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
									clearscreen();
									break;
								case 2:
									printf("\n- Ingrese precio de vuelos Latam: ");
									scanf("%f", &precioLatam);
									clearscreen();
									break;
								default:
									printf("\nOpcion incorrecta");
									break;
												}
					}while(opcionesDeVuelo != 2 );
					clearscreen();
				}
				break;
			case 3:
				cargaForzada();
				printf("\n\t\t\tVolver al menu inicial (S / N): ");
				scanf("%s", &YorN);
				switch(YorN){
					case 'S':
					case 's':
						break;
				}
				clearscreen();
				break;
			case 4:
				clearscreen();
				printf("\n\t\t-------------------SALISTE DE LA APLICACION-------------------");
				break;
			default:
				printf("\nOpcion incorrecta");
				break;
		}
		newMenu(activar, activar2,kilometrosIngresados,precioAerolineas, precioLatam);
	}while(opcionesMenu != 4);
	resultadoDebitoAerolineas = debitoAerolineas(precioAerolineas);
	resultadoDebitLatam = debitoLatam(precioLatam);
	resultadoCreditoAerolineas = creditoAerolineas(precioAerolineas);
	resultadoCreditoLatam = creditoLatam(precioLatam);
	resultadoBitcoinAerolineas = bitcoinAerolineas(precioAerolineas);
	resultadoBitcoinLatam = bitcoinLatam(precioLatam);
	resultadoPrecioUnitarioAerolineas = precioUnitarioAerolineas(kilometrosIngresados,precioAerolineas);
	resultadoPrecioUnitarioLatam = precioUnitarioLatam(kilometrosIngresados,precioLatam);
	resultadoDiferenciaDePrecio = diferenciaEntrePrecios(precioAerolineas, precioLatam);
	return 0;
}
