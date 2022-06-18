/*
 * mostrarResultados.c
 *
 *  Created on: 11 abr. 2022
 *      Author: ignac
 */
#include <stdio.h>

void mostarDatosAerolineas(float kilometros,float aerolineasArgentinas,float resultadoDebitoAerolineas, float resultadoCreditoAerolineas, float resultadoBitcoinAerolineas,
							float resultadoPrecioUnitarioAerolineas){

	printf("\n\t\t<-----------------Informacion de los datos------------------>");
	printf("\n\t\t KMs Ingresados: %2.f"
			"\n\t\t Precio Aerolineas: $%1.f"
			"\n\t\t a) Precio con tarjeta de debito: $%2.f"
			"\n\t\t b) Precio con tarjeta de credito: $%2.f"
			"\n\t\t c) Precio pagado can bitcoin: BTC %f"
			"\n\t\td) Mostrar precio unitario: $%2.f",kilometros,aerolineasArgentinas,resultadoDebitoAerolineas,resultadoCreditoAerolineas,resultadoBitcoinAerolineas, resultadoPrecioUnitarioAerolineas);
}
void mostarDatosLatam(float resultadoDebitLatam,float latam ,float resultadoCreditoLatam, float resultadoBitcoinLatam, float resultadoPrecioUnitarioLatam
		, float resultadoDiferenciaDePrecio){


		printf("\n\t\t Precio Latam: $%1.f"
				"\n\t\t a) Precio con tarjeta de debito: $%2.f"
				"\n\t\t b) Precio con tarjeta de credito: $%2.f"
				"\n\t\t c) Precio pagado can bitcoin: BTC %f"
				"\n\t\td) Mostrar precio unitario: $%2.f",latam,resultadoDebitLatam,resultadoCreditoLatam,resultadoBitcoinLatam,resultadoPrecioUnitarioLatam, resultadoDiferenciaDePrecio);

}

void mostrarCargaForzada(float kilometros,float aerolineasArgentinas,float latam, float totDebitoAerolineasArg, float totDebitoLatam, float totInteresAerolineasArg, float totInteresLatam, float totBitcoinAerolineasArg,
		float totBitcoinLatam, float precioUnitarioporKmAerolineasArg, float precioUnitarioporKmLatam, float diferenciaDePreciosDeVuelo){

	printf("\n\t\t<-----------------Carga forzada de datos------------------>");
	printf("\n\t\t KMs Ingresados: %2.f",kilometros);
	printf("\n\t\t Precio Aerolineas: $%2.f", aerolineasArgentinas);
	printf("\n\t\t 	a) Precio con tarjeta de debito: $%2.f", totDebitoAerolineasArg);
	printf("\n\t\t 	b) Precio con tarjeta de credito: $%2.f", totInteresAerolineasArg);
	printf("\n\t\t 	c) Precio pagado can bitcoin: BTC %f", totBitcoinAerolineasArg);
	printf("\n\t\t	d) Mostrar precio unitario: $%2.f", precioUnitarioporKmAerolineasArg);

	printf("\n\t\t Precio Aerolineas: $%2.f", latam);
	printf("\n\t\t 	a) Precio con tarjeta de debito: $%2.f", totDebitoLatam);
	printf("\n\t\t 	b) Precio con tarjeta de credito: $%2.f", totInteresLatam);
	printf("\n\t\t 	c) Precio pagado can bitcoin: BTC %f", totBitcoinLatam);
	printf("\n\t\t  	d) Mostrar precio unitario: $%2.f", precioUnitarioporKmLatam);

	printf("\n\t\t La diferencia de precio es: $%2.f", diferenciaDePreciosDeVuelo);
	printf("\n\t\t<--------------------------------------------------------->");

}



