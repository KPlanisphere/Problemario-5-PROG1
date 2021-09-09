//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Piedra, papel o tijera 'TBBT'.
#include <stdio.h>
#include <time.h>

void insertcoin();
void gameover();
void Juego(int *eleccion, int *eleccion2, int *cont1, int *cont2);
void relacion();
void bienvenida();

int main(){
    
    int eleccion, eleccion2, cont1=0, cont2=0;
    char op, op2;
    
    insertcoin();

    bienvenida();

    do
    {
        printf("\n"); 
        printf("\n -------------------------------------------"); 
        printf("\n |               Menu                      |");
        printf("\n | Escoger la opcion que desea (1-3):      |");
        printf("\n | [1] Jugar.                              |");
        printf("\n | [2] Mas informacion.                    |");
        printf("\n | [3] Salir.                              |");
        printf("\n -------------------------------------------");
        printf("\n");  
        fflush(stdin);
        scanf("%c", &op);
        system("cls");
    
    switch (op)
    {
    case '1':
            do
            {
            printf("\n");  
            printf("\n --------------------------------------"); 
            printf("\n |               Menu                 |");
            printf("\n | Escoger la opcion que desea (1-5): |");
            printf("\n | [1] Piedra                         |");
            printf("\n | [2] Papel                          |");
            printf("\n | [3] Tijera                         |");
            printf("\n | [4] Lagarto                        |");
            printf("\n | [5] Spock                          |");
            printf("\n --------------------------------------"); 
            printf("\n"); 
            fflush(stdin);
            scanf("%d", &eleccion);
            system("cls");
            if (eleccion < 1 || eleccion > 5)
            {
                printf("\n Operador no definido, intente de nuevo.");
                printf("\n"); 
                system("pause");
                system("cls"); 
            }
            
            srand(time(NULL));
            eleccion2 = 1+rand()%5; 

            Juego(&eleccion,&eleccion2,&cont1,&cont2);
            printf("\n"); 
            printf("\n  ------------------------------"); 
            printf("\n  |         MARCADOR           |");
            printf("\n  |   Usuario      Ordenador   |");
            printf("\n  |     %d     --      %d      |",cont1,cont2);
            printf("\n  ------------------------------");
            printf("\n");  
            system("pause");
            system("cls");
            } while (cont1 != 3 && cont2 != 3);
            if (cont1 == 3)
            {
                printf("\n-----------------------------------"); 
                printf("\n      Felicidades, Usted Gano      ");
                printf("\n-----------------------------------");
                printf("\n"); 
                system("pause");
            	system("cls");
				
				gameover();
				
                cont1 = 0;
                cont2 = 0;
            }else
            {
                if (cont2 == 3)
                {
                    printf("\n-----------------------------------"); 
                    printf("\n  Suerte para la proxima, IA Gano  ");
                    printf("\n-----------------------------------");
                    printf("\n");
					system("pause");
            		system("cls");
            		
					gameover();
					
                    cont1 = 0;
                    cont2 = 0;
                }
            }
            system("pause");
            system("cls");
    break;

    case '2':
           
           relacion();

    break;

    case '3':
            printf("\n ¿Desea salir del programa (s/n)? ");
            printf("\n");  
            fflush(stdin);
            scanf("%c", &op2);
            system("cls");
    break;

    default:printf("\n Operador no definido, intente de nuevo."); 
            printf("\n");
			system("pause");     
            system("cls");
    }
    }while (op2 != 's' && op2 != 'S');


    return 0;
}

void Juego(int *eleccion, int *eleccion2, int *cont1, int *cont2){
   
    if (*eleccion == 1)
    {
        printf("\n      Escogiste piedra.");
        printf("\n");
        if (*eleccion2 == 3)
        {
            printf("\n      Maquina escogi%c tijera.", 162);
            printf("\n");
            printf("\n      >>>Piedra aplasta tijeras.");
            printf("\n");
            printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
            *cont1 = *cont1 + 1;
        }else
        {
            if (*eleccion2 == 4)
            {
                printf("\n      Maquina escogi%c lagarto.", 162);
                printf("\n");
                printf("\n      >>>Piedra aplasta lagarto.");
                printf("\n");
                printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                *cont1 = *cont1 + 1;
            }else
            {
                if (*eleccion2 == 1) 
                {
                    printf("\n      Maquina escogi%c piedra.", 162);
                    printf("\n");
                    printf("\n      ¡¡¡¡Empate!!!!");
                }else
                {
                    if (*eleccion2 == 5)
                    {
                        printf("\n      Maquina escogi%c spock.", 162);
                        printf("\n");
                        printf("\n      >>>Spock vaporiza piedra.");
                        printf("\n");
                        printf("\n      ¡¡¡¡Punto para ordenador!!!!");  
                        *cont2 = *cont2 + 1; 
                    }else
                    {
                        if (*eleccion2 == 2)
                        {
                            printf("\n      Maquina escogi%c papel.", 162);
                            printf("\n");
                            printf("\n      >>>Papel cubre piedra.");
                            printf("\n");
                            printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                            *cont2 = *cont2 + 1; 
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (*eleccion == 2)
        {
            printf("\n      Escogiste papel.");
            printf("\n");
            if (*eleccion2 ==  1)
            {
                printf("\n      Maquina escogi%c piedra.", 162);
                printf("\n");
                printf("\n      >>>Papel cubre piedra");
                printf("\n");
                printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                *cont1 = *cont1 + 1;
            }else
            {
                if (*eleccion2 == 5)
                {
                    printf("\n      Maquina escogi%c spock.", 162);
                    printf("\n");
                    printf("\n      >>>Papel refuta spock.");
                    printf("\n");
                    printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                    *cont1 = *cont1 + 1;
                }else
                {
                    if (*eleccion2 == 2)
                    {
                        printf("\n      Maquina escogi%c papel.", 162);
                        printf("\n");
                        printf("\n      ¡¡¡¡Empate!!!!");
                    }else
                    {
                        if (*eleccion2 == 4)
                        {
                            printf("\n      Maquina escogi%c lagarto.", 162);
                            printf("\n");
                            printf("\n      >>>Lagarto come papel.");
                            printf("\n");
                            printf("\n      ¡¡¡¡Punto para ordenador!!!!");  
                            *cont2 = *cont2 + 1;
                        }else
                        {
                            if (*eleccion2 == 3)
                            {
                                printf("\n Maquina escogi%c tijera.", 162);
                                printf("\n");
                                printf("\n Tijeras cortan papel.");
                                printf("\n");
                                printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                printf("\n");
                                *cont2 = *cont2 + 1;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (*eleccion == 3)
            {
                printf("\n      Escogiste tijeras.");
                printf("\n");
                if (*eleccion2 ==  2)
                {
                    printf("\n      Maquina escogi%c papel.", 162);
                    printf("\n");
                    printf("\n      >>>Tijeras cortan papel");
                    printf("\n");
                    printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                    *cont1 = *cont1 + 1;
                }else
                {
                    if (*eleccion2 == 4)
                    {
                        printf("\n      Maquina escogi%c Lagarto.", 162);
                        printf("\n");
                        printf("\n      >>>Tijeras decapitan lagarto.");
                        printf("\n");
                        printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                        *cont1 = *cont1 + 1;
                    }else
                    {
                        if (*eleccion2 == 3)
                        {
                            printf("\n      Maquina escogi%c tijeras.", 162);
                            printf("\n");
                            printf("\n      ¡¡¡¡Empate!!!!");
                        }else
                        {
                            if (*eleccion2 == 5)
                            {
                                printf("\n      Maquina escogi%c spock.", 162);
                                printf("\n");
                                printf("\n      spock rompe tijeras.");
                                printf("\n");
                                printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                *cont2 = *cont2 + 1;
                            }else
                            {
                                if (*eleccion2 == 1)
                                {
                                    printf("\n      Maquina escogi%c piedra.", 162);
                                    printf("\n");
                                    printf("\n      >>>piedra aplasta tijeras.");
                                    printf("\n");
                                    printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                    *cont2 = *cont2 + 1;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if (*eleccion == 4)
                {
                    printf("\n      Escogiste Lagarto.");
                    printf("\n");
                    if (*eleccion2 ==  2)
                    {
                        printf("\n      Maquina escogi%c papel.", 162);
                        printf("\n");
                        printf("\n      >>>Lagarto come papel");
                        printf("\n");
                        printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                        *cont1 = *cont1 + 1;
                    }else
                    {
                        if (*eleccion2 == 5)
                        {
                            printf("\n      Maquina escogi%c spock.", 162);
                            printf("\n");
                            printf("\n      >>>Lagarto envenena spock.");
                            printf("\n");
                            printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                            *cont1 = *cont1 + 1;
                        }else
                        {
                            if (*eleccion2 == 4)
                            {
                                printf("\n      Maquina escogi%c lagarto.", 162);
                                printf("\n");
                                printf("\n      ¡¡¡¡Empate!!!!");
                            }else
                            {
                                if (*eleccion2 == 3)
                                {
                                    printf("\n      Maquina escogi%c tijeras.", 162);
                                    printf("\n");
                                    printf("\n      >>>Tijeras decapitan lagarto.");
                                    printf("\n");
                                    printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                    *cont2 = *cont2 + 1;
                                }else
                                {
                                    if (*eleccion2 == 1)
                                    {
                                        printf("\n      Maquina escogi%c piedra.", 162);
                                        printf("\n");
                                        printf("\n      >>>Piedra aplasta lagarto.");
                                        printf("\n");
                                        printf("\n      ¡¡¡¡Punto para ordenador!!!!");  
                                        *cont2 = *cont2 + 1;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (*eleccion == 5)
                    {
                        printf("\n      Escogiste Spock.");
                        printf("\n");
                        if (*eleccion2 ==  3)
                        {
                            printf("\n      Maquina escogi%c tijeras.", 162);
                            printf("\n");
                            printf("\n      >>>Spock rompe tijeras");
                            printf("\n");
                            printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                            *cont1 = *cont1 + 1;
                        }else
                        {
                            if (*eleccion2 == 1)
                            {
                                printf("\n      Maquina escogi%c piedra.", 162);
                                printf("\n");
                                printf("\n      Spock vaporiza piedra.");
                                printf("\n");
                                printf("\n      ¡¡¡¡Punto para usuario!!!!"); 
                                *cont1 = *cont1 + 1;
                            }else
                            {
                                if (*eleccion2 == 5)
                                {
                                    printf("\n      Maquina escogi%c spock.", 162);
                                    printf("\n");
                                    printf("\n      ¡¡¡¡Empate!!!!");
                                }else
                                {
                                    if (*eleccion2 == 4)
                                    {
                                        printf("\n      Maquina escogi%c lagarto.", 162);
                                        printf("\n");
                                        printf("\n      >>>Lagarto envenena spock.");
                                        printf("\n");
                                        printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                        *cont2 = *cont2 + 1;
                                    }else
                                    {
                                        if (*eleccion2 == 2)
                                        {
                                            printf("\n      Maquina escogi%c papel.", 162);
                                            printf("\n");
                                            printf("\n      >>>papel refuta spock.");
                                            printf("\n");
                                            printf("\n      ¡¡¡¡Punto para ordenador!!!!"); 
                                            *cont2 = *cont2 + 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void gameover(){
    printf("\n ||||||||     ||     |||      ||| ||||||| ");
    printf("\n ||          ||||    || ||  || || ||      ");
    printf("\n ||  ||||   ||  ||   ||   ||   || |||||   ");
    printf("\n ||    ||  || || ||  ||        || ||      ");
    printf("\n |||||||| |||    ||| ||        || ||||||| ");
    printf("\n");
    printf("\n                 |||||||| ||        || ||||||| ||||||| ");
    printf("\n                 ||    ||  ||      ||  ||      ||   || ");
    printf("\n                 ||    ||   ||    ||   |||||   ||||||| ");
    printf("\n                 ||    ||    ||  ||    ||      ||  ||  ");
    printf("\n                 ||||||||      ||      ||||||| ||   || ");
    printf("\n");
}

void insertcoin(){
    printf("\n  |||||||| |||     || |||||||| ||||||| ||||||| |||||||| ");
    printf("\n     ||    || ||   || ||       ||      ||   ||    ||    ");
    printf("\n     ||    ||  ||  ||   ||||   |||||   |||||||    ||    ");
    printf("\n     ||    ||    ||||       || ||      ||  ||     ||    ");
    printf("\n  |||||||| ||      || |||||||| ||||||| ||   ||    ||    ");
    printf("\n");
    printf("\n                 |||||||| |||||||| |||||||| |||    ||   ");
    printf("\n                 ||    || ||    ||    ||    || ||  ||   ");
    printf("\n                 ||       ||    ||    ||    ||  || ||   ");
    printf("\n                 ||    || ||    ||    ||    ||   ||||   ");
    printf("\n                 |||||||| |||||||| |||||||| ||     ||   ");
    system("pause");
    system("cls");
}

void relacion(){
    printf("\n");  
    printf("\n");  
    printf("\n -----------------------------------");
    printf("\n |    Relacion entre elementos.    |");
    printf("\n -----------------------------------");
    printf("\n |      Tijeras cortan papel.      |");
    printf("\n |       Papel cubre piedra.       |");
    printf("\n |     Piedra aplasta lagarto.     |");
    printf("\n |     Lagarto envenena spock.     |");
    printf("\n |      Spock  rompe tijeras.      |");
    printf("\n |   Tijeras decapitan  lagarto.   |");
    printf("\n |       Lagarto come papel.       |");
    printf("\n |       Papel refuta spock.       |");
    printf("\n |     Spock vaporiza piedra.      |");
    printf("\n |     Piedra aplasta tijeras.     |");    
    printf("\n -----------------------------------");
    printf("\n");  
    printf("\n");
	system("pause");  
    system("cls");  
}

void bienvenida(){
    printf("\n");
    printf("\n");
    printf("\n -----------------------------------------------------------------------------");
    printf("\n       Hola, bienvenio al juego de piedra, papel, tijera, lagarto y spock.    ");
    printf("\n       Este juego es una version extendida presentada en The big bang theory  ");
    printf("\n       A continuacion tendras distintas opciones:                             ");
    printf("\n          1 es para empezar a jugar.                                          ");
    printf("\n          2 es para saber la dinamica del juego extendido.                    ");
    printf("\n          3 podras salir del programa.                                        ");
    printf("\n   Este programa consiste en tu habilidad para el juego en contra de una IA   ");
    printf("\n       Asi que veamos que tan bien se te da                                   ");
    printf("\n -----------------------------------------------------------------------------");
    printf("\n");
    printf("\n");
    system("pause");
    system("cls");
}
