//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Siguiente fecha"
#include <conio.h>
#include <stdio.h>
//PROTOTIPO
void ingreso(int *d,int *m,int *y);
void duro(int x,int *sin,int *palabras,int *weon);
void verif(int dia,int mes,int year,int *sansu,int *x);
//PRINCIPAL
int main(){
    //DECLARAR VARIABLES
    int dia,mes,year,sansu,x;
    //error = 0;
    sansu=0;
    //INGRESO DE DATOS
    ingreso(&dia,&mes,&year);
    //SALIDAS
    printf("    ENTRADA\t      SALIDA\n");
    printf("(%d - %d - %d) -> ",dia,mes,year);
    //VERIFICADOR DE FECHA
    verif(dia,mes,year,&sansu,&x);
    if(sansu == 1){
        //FECHA SIGUIENTE
        duro(x,&dia,&mes,&year);
        printf("(%d - %d - %d)",dia,mes,year);
        printf("\n\n\t- FECHA CORRECTA -");
    }
    //system("pause");
    getch();
    return 0;
}
//FECHA SIGUIENTE
void duro(int x,int *sin,int *palabras,int *weon){
    //DIAS
    if(*sin < x){
        *sin = *sin + 1;
    }
    else{
        *sin = 1;
        //MES
        if (*palabras < 12){
            *palabras = *palabras + 1;
        }
        else{
            *palabras = 1;
            *weon = *weon + 1;
        }
    }
}
//INGRESO DE DATOS
void ingreso(int *d,int *m,int *y){
    int error;
    printf("Digite el dia: ");
    scanf("%d",d);
    printf("Digite el mes: ");
    scanf("%d",m);
    printf("Digite el a%co: ",164);
    scanf("%d",y); 
    printf("\n");
}
//VERIFICADOR DE FECHA
void verif(int dia,int mes,int year,int *sansu,int *x){
    int bis=0;
    if(year > 0){
        //Año bisiesto
        if(year % 4 == 0){
            bis = 1;}
        if(mes > 0 && mes <= 12){  
            //Verificador de meses 
            if(mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes==8 || mes==10 || mes==12){
                if(dia <= 31 && dia > 0){
                    *sansu = 1;
                    *x = 31;
                }
                else{
                    printf("ERROR: El mes %d tiene 31 dias",mes);}
            }
            else{
                if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                    if(dia <= 30 && dia > 0){
                        *sansu = 1;
                        *x = 30;
                    }
                    else{
                    printf("ERROR: El mes %d tiene 30 dias",mes);
                    }
                }
            }
            if(mes == 2){
                if(bis == 1){
                    if(dia <= 29 && dia > 0){
                        *sansu = 1;
                        *x = 29;
                    }
                    else{
                    printf("ERROR: El a%co es bisiesto, por lo tanto febrero tiene 29 dias",164);
                    }
                }
                else{
                    if(dia <= 28 && dia > 0){
                        *sansu = 1;
                        *x = 28;
                    }
                    else{
                    printf("ERROR: Febrero tiene 28 dias (a%co no biciesto)",164);
                    }
                }
            }  
        }
        else{
            printf("[!] Mes erroneo/Informaci%cn incorrecta [!]",162);
        }  
    }
    else{
        printf("[!] A%co erroneo/Informaci%cn incorrecta [!]",164,162);
    }
}