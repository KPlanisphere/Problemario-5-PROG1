//3. Programa que simula el procedimiento de una m�quina cafetera.

//Cargar la/s librer�a/s
#include <stdio.h>
#include <stdlib.h>

//Prototipos
void llenar (float *x,float *y,float *z);
void vaciar (float *x);
void servir (float *x);

//Principal
int main (){
	
	//Declarar variables
	float capactu=0,capmax=0,ag;
	int error;
	char op;
	
	//Nota para el usuario
	printf ("\t|NOTA: Son necesarios 150 ml como m%cnimo para servir una taza|\n",161);
	printf ("\t|\t\t\t\to\t\t\t     |\n");
	printf ("\t|           3600 ml como m%cximo para servir 24 tazas\t     |\n",160);
	
	//Bucle do while
	do{	
		error=0;
		//Obtenci�n de datos por teclado
		printf ("\nIngrese la cantidad m%cxima (en ml) de la cafetera:",160);
		scanf ("%f",&capmax);
		
		//Error fuera de rango
		if (capmax < 0){
			system ("cls");
			printf ("\n\t[!] ERROR: No podemos servir una taza, capacidad inexistente [!]\n");
			error = 1;
		}else{
			if (capmax < 150){
				system ("cls");
				printf ("\n\t[!] ERROR: No podemos servir una taza, capacidad insuficiente [!]\n");
				error=1;
			}
		}
	
		//Error fuera de l�mite
		if (capmax > 3600){
			system ("cls");
			printf ("\n\t[!] ERROR: Capacidad l%cmite superada [!]\n",161);
			error = 1;
		}
		printf("\n");
	}while (error != 0);
	
	//Limpiar informaci�n de la anterior pantalla
	system ("cls");

	//Bucle do while
	do{
		//Estado de la cafetera
		printf ("\nCapacidad actual de la cafetera: %.2f ml\n",capactu);
		printf ("Capacidad m%cxima de la cafetera: %.2f ml\n",160,capmax);
			
		//Men�
		printf ("\n\t\t MEN%C DE ACCIONES DE LA CAFETERA\n",233);
		printf ("\t\t---------------------------------");
		printf ("\n------->Elija la opci%cn que desee ejecutar sobre la m%cquina\n",162,160);		
		printf ("\n [a] Llenar cafetera.");
		printf ("\n [b] Vaciar cafetera.");
		printf ("\n [c] Servir vaso.");
		printf ("\n [d] Salir\n");
		printf ("\nOpci%cn:",162);
		fflush (stdin);
		scanf ("%c",&op);
		printf ("]");
		switch (op){
			//Caso para llenar un vaso
			case 'a':
				system ("cls");
				if (capactu == capmax){
					printf ("\n\tNo fue posible atender la solicitud, capacidad actual se encuentra al m%cximo\n",160);
				}else{
				llenar (&capactu,&capmax,&ag);
				printf ("\n\tLa cantidad de ml agregados a la cafetera fueron: %.2f ml\n",ag);
				}
			break;
			
			//Caso para vaciar la capacidad de la cafetera
			case 'b':
				system ("cls");
				if (capactu == 0){
					printf ("\n\tNo fue posible atender la solicitud, capacidad actual ya es 0\n");
				}else{
				vaciar (&capactu);
				printf ("\n\tUsted ha vaciado la capacidad actual de la cafetera.\n");
				}
				
			break;
			
			//Caso para servir un vaso de 150 ml	
			case 'c':
				system ("cls");
				if (capactu >= 150){				
				servir (&capactu);
					if (capactu < 0){
						capactu = 0;
					}
				printf ("\n\tSe ha servido un vaso de 150 ml\n");			
				}else{				
					printf ("\n\tNo fue posible atender la solicitud, capacidad actual insuficiente.\n");
					printf ("\t\t\tSe sugiere llenar o vaciar la cafetera\n");				
				}
			break;	
			
			//Caso predeterminado para variables fuera de rango
			default:
				system ("cls");
				if (op < 0 || op > 0){
					printf ("\n\t[!] ERROR: Ingrese valores alfab%cticos mostrados en el men%c [!]\n",130,163);
				}
			
		}
	}while (op != 'd');
	
	//Despedida y agradecimiento al usuario
	system ("cls");
	printf ("\n\tGracias por usar nuestros servicios.\n\n");
	
	//System "pause"/Cierre del programa 
	system ("pause");
	return 0;
}

//Funciones de tipo void
void llenar (float *x,float *y,float *z){
	
	*z = *y - *x;
	*x = *y;
}

void vaciar (float *x){
	
	*x -= *x;
}

void servir (float *x){
	
	*x -= 150;
}
