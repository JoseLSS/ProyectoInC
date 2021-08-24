#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct datos{
	
	char nombre [10];
	int peso;
	int estura;
	int edad;
	int numerojuga;
	
} datos;


void CapturaEquipos(datos [],int, int*);
int leerCantidad(); 
void buscarEquipo(datos [],int, int*);
void calendario();
void ResultdoPartidos();


void salir(){
	printf("Asta luego\n");
}


void Portada(){
	char c;
	FILE *portada = fopen("portada.txt","r");
	
		
		while(1){
			
			c=fgetc(portada);
			if(feof(portada))
			break;
			
			printf("%c",c);
}

	printf("\n");
	fclose(portada);
	
}




int main(){
	
datos cl;
	int cantidad; 
	int *numeros;
     
	
	int opcion;
	
	Portada();
	system("pause");
	do{
	system("cls");
	printf("\n\n*********Menu de opciones*********\n\n");
	printf("1.Captura de equipo.\n");
	printf("2.Calendario de partidos.\n");
	printf("3.Resultados de partidos.\n");
	printf("4.Buscar por equipo.\n");
	printf("5.Salir.\n");
	
	printf("Seleciona una opcion:");
	scanf("%d",&opcion);
	
	switch (opcion){
		
		case 1: 
		system("cls");
		cantidad= leerCantidad();
		numeros = (int *) malloc(cantidad * sizeof(int));
		CapturaEquipos(&cl,cantidad, numeros);
		system("pause");
		break;
		case 2:
		system("cls");
		calendario();
		
		system("pause");	
		break;
		case 3:
		system("cls");
		ResultdoPartidos();
			
		system("pause");
		break;
		case 4:	
		system("cls");
	
		buscarEquipo(&cl,cantidad, numeros);
		break;
		
		case 5:
			system("cls");
			salir();
		break;
	}
	
	}while(opcion!=5);
	
}

void CapturaEquipos(datos *Cap, int cantidad, int *numeros){
	
	int indice;
	printf("**********Captura de equipo.**********\n");
      
	for (indice=0;indice<cantidad;indice++){
		fflush(stdin);
		system("cls");
		printf("------------------------------\n\n");
		printf("Ingresa el nombre#%d:",(indice+1));
		scanf("%s",&Cap[indice].nombre);
		fflush(stdin);
		
		printf("Ingresa el edad #%d:",(indice+1));
		scanf("%d",&Cap[indice].edad);
		
		
		printf("Ingresa el peso#%d:",(indice+1));
		scanf("%d",&Cap[indice].peso);
		
		printf("Ingresa el estatura#%d:",(indice+1));
		scanf("%d",&Cap[indice].estura);
		
		printf("Ingresa el No.jugador#%d:",(indice+1));
		scanf("%d",&Cap[indice].numerojuga);
		
		printf("------------------------------\n\n");
	}
	
	

}

int leerCantidad()
{
int cantidad;
printf("Ingrese el numero de jugadores (Maximo 5): ");
scanf("%d", &cantidad);
return cantidad;
}



void calendario(){
	char c;
   	FILE *calendario = fopen("calendario.txt","r");
	
		
		while(1){
			
			c=fgetc(calendario);
			if(feof(calendario))
			break;
			
			printf("%c",c);
}
printf("\n");
	fclose(calendario);

}

void ResultdoPartidos(){
	int r=0;
	printf("**********Resultados de los partidos.***********\n");
	int numero,numero2,numero3,numero4,numero5,numero6;

numero = rand() % 8;
numero2= rand()%8;
if(numero==numero2){
	numero2= rand()%11;

}
numero3= rand()%8;
numero4= rand()%8;
if(numero3==numero4){
	numero4= rand()%11;

}
numero5= rand()%8;
numero6= rand()%10;
fflush(stdin);
if(numero5==numero6){
	numero5= rand()%11;

}
printf("      |Eqipo #1  vs  Equipo #2  | \n");
printf("Gloes |  %d               %d      | \n'",numero,numero2);
printf("----------------------------------\n");
  
printf("      |Eqipo #3  vs  Equipo #4  | \n");
printf("Gloes |  %d               %d      | \n'",numero3,numero4);
printf("----------------------------------\n");
  
  printf("      |Eqipo #5  vs  Equipo #6 | \n");
printf("Gloes |  %d               %d     | \n'",numero5,numero6);
printf("------------------------------------\n");

printf("************************************\n");

if(numero<numero2 &&numero3<numero4&& numero5<numero6){
fflush(stdin);
numero2= rand()%10;
numero4= rand()%10;
if(numero2==numero4){
	numero4= rand()%11;

}

printf("      |Eqipo #2  vs  Equipo #4   | \n");
printf("Gloes |  %d               %d     | \n'",numero2,numero4);
printf("----------------------------------\n");

if(numero2<numero4){
	fflush(stdin);
numero4= rand()%10;
numero6= rand()%10;
if(numero4==numero6){
	numero6= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #4   vs  Equipo #6   | \n");
printf("Gloes |  %d               %d      | \n'",numero4,numero6);
printf("-----------------------------------\n");

	printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero4<numero6)?"6":"4");
}

if(numero2>numero4){
	fflush(stdin);
numero2= rand()%10;
numero6= rand()%10;
if(numero2==numero6){
	numero6= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #2   vs  Equipo #6   | \n");
printf("Gloes |  %d               %d      | \n'",numero2,numero6);
printf("-----------------------------------\n");



printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero2<numero6)?"6":"2");	
}
}


if(numero>numero2 &&numero3>numero4 &&numero5>numero6){
numero=0 ;
numero3=0;
numero= rand()%10;
numero3= rand()%10;
if(numero==numero3){
	numero= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1  vs  Equipo #3   | \n");
printf("Gloes |  %d               %d     | \n'",numero,numero3);
printf("----------------------------------\n");

if(numero<numero3){
	fflush(stdin);
numero= rand()%10;
numero5= rand()%10;
if(numero==numero5){
	numero5= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #3   vs  Equipo #5   | \n");
printf("Gloes |  %d               %d      | \n'",numero3,numero5);
printf("-----------------------------------\n");

printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero3<numero5)?"5":"3");
}

if(numero>numero3){
	fflush(stdin);
numero= rand()%10;
numero5= rand()%10;
if(numero==numero5){
	numero5= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1   vs  Equipo #5   | \n");
printf("Gloes |  %d               %d      | \n'",numero,numero5);
printf("-----------------------------------\n");


printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero<numero5)?"5":"1");	
}

}
 if(numero<numero2 &&numero3>numero4 && numero5<numero6){
numero2=0 ;
numero3=0;
numero2= rand()%10;
numero3= rand()%10;
if(numero2==numero3){
	numero3= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #2  vs  Equipo #3 | \n");
printf("Gloes |  %d               %d     | \n'",numero2,numero3);
printf("----------------------------------\n");


if(numero2>numero3){
	fflush(stdin);
numero2= rand()%10;
numero6= rand()%10;
if(numero2==numero6){
	numero6= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #2   vs  Equipo #6 | \n");
printf("Gloes |  %d               %d      | \n'",numero2,numero6);
printf("-----------------------------------\n");

printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero2<numero6)?"6":"2");
}

if(numero2<numero3){
	fflush(stdin);
numero3= rand()%10;
numero6= rand()%10;
if(numero3==numero6){
	numero3= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #3   vs  Equipo #6   | \n");
printf("Gloes |  %d               %d      | \n'",numero3,numero6);
printf("-----------------------------------\n");


printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero3<numero6)?"6":"3");	
}

}
if(numero>numero2 &&numero3<numero4&&numero5>numero6){
numero=0 ;
numero4=0;
numero= rand()%10;
numero4= rand()%10;
if(numero==numero4){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1 vs  Equipo #4   | \n");
printf("Gloes |  %d               %d    | \n'",numero,numero4);
printf("---------------------------------\n");

if(numero<numero4){
	fflush(stdin);
numero4= rand()%10;
numero5= rand()%10;
if(numero5==numero4){
	numero5= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #4   vs  Equipo #5   | \n");
printf("Gloes |  %d               %d      | \n'",numero4,numero5);
printf("-----------------------------------\n");


printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero4<numero5)?"5":"4");	
}


if(numero>numero4){
	fflush(stdin);
numero= rand()%10;
numero5= rand()%10;
if(numero==numero5){
	numero5= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1   vs  Equipo #5   | \n");
printf("Gloes |  %d               %d      | \n'",numero,numero5);
printf("-----------------------------------\n");



printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero<numero5)?"5":"1");		
}

}

if(numero>numero2 &&numero3>numero4&&numero5<numero6){
numero=0 ;
numero4=0;
numero= rand()%5;
numero4= rand()%5;
if(numero==numero4){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1 vs  Equipo #3  | \n");
printf("Gloes |  %d               %d   | \n'",numero,numero3);
printf("--------------------------------\n");

if(numero<numero3){
	fflush(stdin);
numero3= rand()%10;
numero6= rand()%10;
if(numero3==numero6){
	numero6= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #3  vs  Equipo #6   | \n");
printf("Gloes |  %d               %d     | \n'",numero3,numero6);
printf("----------------------------------\n");


printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero3<numero6)?"6":"3");			
}

if(numero>numero3){
	fflush(stdin);
numero= rand()%10;
numero6= rand()%10;
if(numero==numero6){
	numero= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1   vs  Equipo #6   | \n");
printf("Gloes |  %d               %d      | \n'",numero,numero6);
printf("-----------------------------------\n");



printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero<numero6)?"6":"1");
}

}


if(numero<numero2 &&numero3<numero4&&numero5>numero6){
numero2=0 ;
numero4=0;
numero2= rand()%5;
numero4= rand()%5;
if(numero2==numero4){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #2 vs  Equipo #4  | \n");
printf("Gloes |  %d               %d       | \n'",numero2,numero4);
printf("--------------------------------------\n");

if(numero2<numero4){
	fflush(stdin);
numero4= rand()%10;
numero5= rand()%10;
if(numero4==numero5){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #4  vs  Equipo #5   | \n");
printf("Gloes |  %d               %d     | \n'",numero4,numero5);
printf("----------------------------------\n");

printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero4<numero5)?"5":"4");

}
if(numero2>numero4){
	fflush(stdin);
numero2= rand()%10;
numero5= rand()%10;
if(numero2==numero5){
	numero2= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #2   vs  Equipo #5   | \n");
printf("Gloes |  %d               %d      | \n'",numero2,numero5);
printf("-----------------------------------\n");

	
printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero2<numero5)?"5":"2");
}

}


if(numero>numero2 &&numero3<numero4&&numero5<numero6){
numero=0 ;
numero4=0;
numero= rand()%5;
numero4= rand()%5;
if(numero==numero4){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1 vs  Equipo #4  | \n");
printf("Gloes |  %d               %d   | \n'",numero,numero4);
printf("--------------------------------\n");

if(numero<numero4){
	fflush(stdin);
numero4= rand()%10;
numero6= rand()%10;
if(numero4==numero6){
	numero4= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #4  vs  Equipo #6   | \n");
printf("Gloes |  %d               %d     | \n'",numero4,numero6);
printf("----------------------------------\n");

printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero4<numero6)?"6":"4");
}

if(numero>numero4){
	fflush(stdin);
numero4= rand()%10;
numero6= rand()%10;
if(numero4==numero6){
	numero6= rand()%11;

}
printf("************************************\n");
printf("      |Eqipo #1   vs  Equipo #6   | \n");
printf("Gloes |  %d               %d      | \n'",numero,numero6);
printf("-----------------------------------\n");


printf("\nEL GANADOR DEL TORNEO ES EL EQUIPO %s\n\n",(numero<numero6)?"6":"1");	
}
}

	
}

    



void buscarEquipo(datos *tod, int cantidad, int *numero){
	
	int ed;
	char c;
	
	FILE *equipo1 = fopen("equipo1.txt","r");
	FILE *equipo2 = fopen("eqipo2.txt","r");
	FILE *equipo3 = fopen("equipo3.txt","r");
	FILE *equipo4 = fopen("equipo4.txt","r");
	FILE *equipo5 = fopen("equipo5.txt","r");
	FILE *equipo6 = fopen("equipo6.txt","r");
	system("cls");
	
	printf("Ingresa la el equipo a  buscar:");
		fflush(stdin);
	scanf("%d",&ed);
	
	if(ed==1){
		fflush(stdin);
		printf("***********Equipo 1************\n");
		for (int indice=0;indice<cantidad;indice++){
		
		printf("------------------------------\n\n");
		printf("Jugador #%d\n",(indice+1));
		printf("Nombre:%s\n",tod[indice].nombre);
		printf("Edad :%d\n",tod[indice].edad);
		printf("Peso:%d\n",tod[indice].peso);
		printf("Estatura:%d\n",tod[indice].estura);
		printf("No.jugador:%d\n",tod[indice].numerojuga);
	
		
	}
	}
	
	
	if(ed==2){
			while(1){
		
			c=fgetc(equipo2);
			if(feof(equipo2))
			break;
			
			printf("%c",c);
			
            }
            system("pause");
            fclose(equipo2);
		
	}
	
	if(ed==3){
			while(1){
			
			c=fgetc(equipo3);
			if(feof(equipo3))
			break;
			
			printf("%c",c);
			
            }
            system("pause");
            fclose(equipo3);
		
	}
	
	if(ed==4){
			while(1){
			
			c=fgetc(equipo5);
			if(feof(equipo5))
			break;
			
			printf("%c",c);
			
            }
            system("pause");
            fclose(equipo4);
		
	}
	
	if(ed==5){
			while(1){
			
			c=fgetc(equipo5);
			if(feof(equipo5))
			break;
			
			printf("%c",c);
			
            }
	     system("pause");
            fclose(equipo5);	
	}
	
	if(ed==6){
			while(1){
			
			c=fgetc(equipo6);
			if(feof(equipo6))
			break;
			
			printf("%c",c);
			
            }
		system("pause");
            fclose(equipo6);
	}
		system("pause");
}

