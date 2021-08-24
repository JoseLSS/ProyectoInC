
/* Programa: Tabla de multiplicar de un n�mero (Soluci�n 1) */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n, opcion,prueba,variable,A , B,C,D,Q=0;
    
        printf( "\n\t\t\t\t\tUNIVERSIDAD AUTONOMA DE MEXICO" );
        printf( "\n\t\t\t\tFacultad de Es tudios Superiores Ac%tlan\n",160 );
        printf( "\n\t\t\t\tMatematicas Aplicadas y Computacion" );
        printf( "\n\t\t\t\t\tMatamaticas Discretas." );
        printf( "\n\t\t\t\tChristian Carlos Delgado Elizoldo." );
        printf( "\n\t\t\t\tSanchez Sarabia Jose Luis.\n" );
        
        system("pause");
        system("cls");
        
    do
    {
    	do{
    		  do
        {
    	system("cls");
        printf("\n\t\t\t Tipos de compuertas logicas\n");
        printf("\n1.Compuerta AND.");
        printf("\n2.Compuerta OR.");
        printf("\n3.Compuerta NOT.");
        printf("\n4.Compuerta NAND.");
        printf("\n5.Compuerta NOR.");
        printf("\n6.Compuerta XOR.");
        printf("\n7.salir.");
            printf( "\nIntroduzca opci%cn: ", 162 );
            fflush(stdin);
            scanf( "%d", &opcion );

        } while ( opcion < 1 || opcion > 7 );

        
        system("cls");
        switch ( opcion )
        {
        	case 1: 
        		    printf( "\n\t\t\t\tCompuerta AND\n ");
        		    
                    printf( "\nEsta compuerta es representada por una multiplicacion en el Algebra de Boole.");
                    printf( "\nIndica que es necesario que en todas sus entradas se tenga un estado binario 1 ");
                    printf( "\npara que la salida otorgue un 1 binario. En caso contrario de que falte alguna de sus ");
                    printf( "\nentradas con este estado o no tenga si quiera una accionada, la salida no podra");
			        printf( "\ncambiar de estado y permanecera en 0. Esta puede ser simbolizada por dos o m�s");
			        printf("\ninterruptores en serie de los cuales todos deben estar activos para que esta permita");
        	        printf("\nel flujo de la corriente.\n");
        	        
        	        printf("\n                  Q  =  A  *  B");
        	           do
                        {
                        	do{
							
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	                
        	                 if(opcion==1){
        	                 	
        	                 	        do{
        	                 	        printf("\nIngrese entre 2, 3 y 4 variables: ");
        	                 	        scanf( "%d", &variable);
        	                 	        fflush(stdin);
        	                 	        system("cls");
        	                 	        }while(variable<2||variable>4);
        	                 	        
        	                 	            if(variable==2){
									  	        printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        fflush(stdin);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	
									  	          Q=A*B;
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
									  	        do{
									  	        system("cls");
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                 	                }while(opcion<1||opcion>2);
        	                 	                
        	                                }else if(variable==3){
        	                                	 printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	
									  	          Q=A*B*C;
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
								                do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}else if(variable==4){
												printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        printf("\nD:");
									  	        fflush(stdin);
									  	        scanf( "%d", &D);
									  	
									  	          Q=A*B*C*D;
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}
        	                    }
								
                        } while ( opcion == 1);
                    break;

            case 2:  
        		    printf( "\n\t\t\t\tCompuerta OR\n ");
        		    
                    printf( "\nEn el Algebra de Boole esta es una suma. Esta compuerta permite que con");
                    printf( "\ncualquiera de sus entradas que este en estado binario 1, su salida pasara a un ");
                    printf( "\nestado 1 tambi�n. No es necesario que todas sus entradas est�n accionadas para ");
                    printf( "\nconseguir un estado 1 a la salida pero tampoco causa algun inconveniente. Para");
			        printf( "\nlograr un estado 0 a la salida, todas sus entradas deben estar en el mismo valor de");
			        printf("\n0. Se puede interpretar como dos interruptores en paralelo, que sin importar cual se");
        	        printf("\nel accione, sera posible el paso de la corriente.\n");
        	        
        	        printf("\n               Q  =  A  +  B");
        	             do
                        {
                        
                        	do{	
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	                
        	                 if(opcion==1){
        	                 	
        	                 	        do{
        	                 	        printf("\nIngrese entre 2, 3 y 4 variables: ");
        	                 	        fflush(stdin);
        	                 	        scanf( "%d", &variable);
        	                 	        system("cls");
        	                 	        }while(variable<2||variable>4);
        	                 	        
        	                 	            if(variable==2){
									  	        printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	
									  	          Q=A+B;
									  	          if(Q ==2){
									  	          	
									  	          	Q =1;
													}
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
        	                                }else if(variable==3){
        	                                	 printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	
									  	          Q=A+B+C;
									  	          if (Q==2){
									  	        	Q=1;
												  }else if (Q==3){
									  	        	Q=1;
					                                }
									  	
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{										
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}else if(variable==4){
												printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        printf("\nD:");
									  	        fflush(stdin);
									  	        scanf( "%d", &D);
									  	
									  	          Q=A+B+C+D;
									  	          if (Q==2){
									  	        	Q=1;
												  }else if (Q==3){
									  	        	Q=1;
												  }else if (Q==4){
									  	        	Q=1;
									  	          }
									  	
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                         }
        	                    }
								
                        } while ( opcion == 1);
                    break;

            case 3: printf( "\n\t\t\t\tCompuerta NOT\n ");
        		    
                    printf( "\nEn este caso esta compuerta solo tiene una entrada y una salida y esta actua como");
                    printf( "\nun inversor. Para esta situaci�n en la entrada se colocara un 1 y en la salida");
                    printf( "\notorgara un 0 y en el caso contrario esta recibir� un 0 y mostrara un 1. Por lo cual ");
                    printf( "\todo lo que llegue a su entrada, ser� inverso en su salida.\n");
        	        printf("\n           Q  =  A'  ");
        	             do
                        {
                        	
                        	do{	
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	                
        	                 if(opcion==1){
        	                 	
        	                 	        do{ 
        	                 	        printf("\nIngrese entre 2, 3 y 4 variables: ");
        	                 	        fflush(stdin);
        	                 	        scanf( "%d", &variable);
        	                 	        system("cls");
        	                 	        }while(variable<2||variable>4);
        	                 	        
        	                 	            if(variable==2){
									  	        printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        if (A==0){
									  	        	A=1;
												  }else if (A==1){
									  	        	A=0;
												  }
												  
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	         if (B==0){
									  	        	B=1;
												  }else if (B==1){
									  	        	B=0;
												  }
												  
									  	        printf("El resultado es: A:%d    B:%d",A,B);
									  	        
												do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
        	                                }else if(variable==3){
        	                                	 printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        if (A==0){
									  	        	A=1;
												  }else if (A==1){
									  	        	A=0;
												  }
												  
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        if (B==0){
									  	        	B=1;
												  }else if (B==1){
									  	        	B=0;
												  }
												  
									  	        fflush(stdin);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        if (C==0){
									  	        	C=1;
												  }else if (C==1){
									  	        	C=0;
												  }
										
									  	        printf("El resultado es: A:%d    B:%d    C:%d\n",A,B,C);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
												fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}else if(variable==4){
												printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        if (A==0){
									  	        	A=1;
												  }else if (A==1){
									  	        	A=0;
												  }
												  
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        if (B==0){
									  	        	B=1;
												  }else if (B==1){
									  	        	B=0;
												  }
												  
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        if (C==0){
									  	        	C=1;
												  }else if (C==1){
									  	        	C=0;
												  }
												  
									  	        printf("\nD:");
									  	        fflush(stdin);
									  	        scanf( "%d", &D);
									  	        if (D==0){
									  	        	D=1;
												  }else if (D==1){
									  	        	D=0;
												  }
									  	
									  	        printf("El resultado es: A:%d    B:%d    C:%d    D:%d\n",A,B,C,D);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                         }
        	                    }
								
                        } while ( opcion == 1);
                    break;
                    
            case 4: printf( "\n\t\t\t\tCompuerta NAND\n ");
        		    
                    printf( "\nTambien denominada como AND negada, esta compuerta trabaja al contrario de una");
                    printf( "\nAND ya que al no tener entradas en 1 o solamente alguna de ellas, esta concede un ");
                    printf( "\n1 en su salida, pero si esta tiene todas sus entradas en 1 la salida se presenta con ");
                    printf( "\nun 0.\n");
        	        
        	        printf("\nQ  =  A'  *  B'");
        	             do
                        {
                        	
                        	do{	
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	               
        	                 if(opcion==1){
        	                 	
        	                 	        do{
        	                 	        printf("\nIngrese entre 2, 3 y 4 variables: ");
        	                 	        fflush(stdin);
        	                 	        scanf( "%d", &variable);
        	                 	        system("cls");
        	                 	        }while(variable<2||variable>4);
        	                 	        
        	                 	            if(variable==2){
									  	        printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	
									  	          Q=A*B;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if (Q==1){
									  	        	Q=0;
												  }
									  	
									  	        printf("El resultado es:%d\n",Q);

                                                do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
        	                                }else if(variable==3){
        	                                	 printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	
									  	          Q=A*B*C;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if (Q==1){
									  	        	Q=0;
												  }
									  	
									  	
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}else if(variable==4){
												printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        printf("\nD:");
									  	        fflush(stdin);
									  	        scanf( "%d", &D);
									  	
									  	          Q=A*B*C*D;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if (Q==1){
									  	        	Q=0;
												  }
									  	
									  	
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                         }
        	                    }
								
                        } while ( opcion == 1);
                    break;
                    
            case 5: printf( "\n\t\t\t\tCompuerta NOR\n ");
        		    
                    printf( "\nAsi como vimos anteriormente, la compuerta OR tambi�n tiene su version inversa.");
                    printf( "\nEsta compuerta cuando tiene sus entradas en estado 0 su salida estar� en 1, pero si ");
                    printf( "\nalguna de sus entradas pasa a un estado 1 sin importar en qu� posici�n, su salida.");
                    printf( "\nserun estado 0");
			
        	        printf("\n        Q  =  A' +  B'");
        	             do
                        {
                        	
                        	do{	
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	                
        	                 if(opcion==1){
        	                 	
        	                 	        do{
        	                 	        printf("\nIngrese entre 2, 3 y 4 variables:");
        	                 	        fflush(stdin);
        	                 	        scanf( "%d", &variable);
        	                 	        system("cls");
        	                 	        }while(variable<2||variable>4);
        	                 	        
        	                 	            if(variable==2){
									  	        printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	
									  	          Q=A+B;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if (Q==1){
									  	        	Q=0;
												  }else if (Q==2){
												  	Q=0;
												  }
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
        	                                }else if(variable==3){
        	                                	 printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	
									  	          Q=A+B+C;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if(Q==1){
									  	        	Q=0;
												  }else if(Q==2){
									  	        	Q=0;
												  }else if(Q==3){
									  	        	Q=0;
												  }
									  	
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                    
											}else if(variable==4){
												printf("\nIngrese datos de entrada");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
									  	        printf("\nC:");
									  	        fflush(stdin);
									  	        scanf( "%d", &C);
									  	        printf("\nD:");
									  	        fflush(stdin);
									  	        scanf( "%d", &D);
									  	
									  	          Q=A+B+C+D;
									  	          if (Q==0){
									  	        	Q=1;
												  }else if(Q==1){
									  	        	Q=0;
												  }else if(Q==2){
									  	        	Q=0;
												  }else if(Q==3){
									  	        	Q=0;
												  }else if(Q==4){
									  	        	Q=0;
												  }
												  
									  	        printf("El resultado es=%d\n",Q);
									  	        
									  	        do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                         }
        	                    }
								
                        } while ( opcion == 1);
                    break;
                    
            case 6: printf( "\n\t\t\t\tCompuerta XOR\n ");
        		    
                    printf( "\nTambien llamada OR exclusiva, esta actua como una suma binaria de un digito cada");
                    printf( "\nuno y el resultado de la suma seria la salida. Otra manera de verlo es que con ");
                    printf( "\nvalores de entrada igual el estado de salida es 0 y con valores de entrada diferente, ");
                    printf( "\na salida sera 1.");
		
        	        printf("\nQ  =  A  *  B'  +  A'  *  B");
        	             do
                        {
                        	
                            do{
                       	    printf("\n1.Realizar prueba.");
        	                printf("\n2.Regresar a menu.");
        	                fflush(stdin);
        	                scanf( "%d", &opcion );
        	                system("cls");
        	                }while(opcion<1||opcion>2);
        	                                
        	                
        	                 if(opcion==1){
        	                
        	                 	        
        	                 	        printf("\nIngrese ingrese 2 variables\n");
        	                 	        
									  	        printf("\nIngrese datos de entrada.");
									  	        printf("\nA:");
									  	        fflush(stdin);
									  	        scanf( "%d", &A);
									  	        printf("\nB:");
									  	        fflush(stdin);
									  	        scanf( "%d", &B);
												  if ((A==0)&&(B==0)){
									  	        	Q=0;
												  }else if ((A==0)&&(B==1)){
									  	        	Q=1;
												  }else if((A==1)&&(B==0)){
												  	Q=1;
												  }else if((A==1)&&(B==1)){
												  	Q=0;
												  }
									
									  	
									  	        printf("El resultado es:%d\n",Q);
									  	        
												do{
									  	        printf("\n1.Realizar otra prueba.");
        	                                    printf("\n2.Regresar a menu.");
        	                                    fflush(stdin);
        	                                    scanf( "%d", &opcion );
        	                                    system("cls");
        	                                    }while(opcion<1||opcion>2);
        	                                
        	                    }
								
                        } while ( opcion == 1);
			      } 
				  
			}while(opcion==2);
		        
    } while ( opcion != 7);

    return 0;
}
