/*
Nombre: Hosmand Rafael Belli Cespedes.
Carnet: 2019-0152U.
Asignatura: Conceptos de Lenguaje.
Grupo: 1M3-CO.
Proyecto de Cinemas en Lenguaje C.
Profesor: Grevin Silva.
*/

#include       <stdio.h>
#include       <conio.h>
#include       <dos.h>


void			presentacion(void);
void			marco (void);
void			menu (void);
void 			cuadrop (void);

void           main (void)
{
  presentacion();
  marco();
  menu();
  cuadrop();

}

/* Declaracion de los Arreglos como globales */
/*ARREGLO PELICULA 1 HORARIO 1 */
char asientos[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos,numdecrecivo=0,fila,columna,numasientosValidos=1;
int asientosvacios,asientoslibres=4*4,asientoescogido=0;
/*ARREGLO PELICULA 1 HORARIO 2 */
char asientos2[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos2,numdecrecivo2=0,fila2,columna2,numasientosValidos2=1;
int asientosvacios2,asientoslibres2=4*4,asientoescogido2=0;
/*ARREGLO PELICULA 2 HORARIO 1*/
char asientos3[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos3,numdecrecivo3=0,fila3,columna3,numasientosValidos3=1;;
int asientosvacios3,asientoslibres3=4*4,asientoescogido3=0;
/*ARREGLO PELICULA 2 HORARIO 2*/
char asientos4[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos4,numdecrecivo4=0,fila4,columna4,numasientosValidos4=1;;
int asientosvacios4,asientoslibres4=4*4,asientoescogido4=0;
/*ARREGLO PELICULA 3 HORARIO 1*/
char asientos5[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos5,numdecrecivo5=0,fila5,columna5,numasientosValidos5=1;;
int asientosvacios5,asientoslibres5=4*4,asientoescogido5=0;
/*ARREGLO PELICULA 3 HORARIO 2*/
char asientos6[4][4]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
int numasientos6,numdecrecivo6=0,fila6,columna6,numasientosValidos6=1;;
int asientosvacios6,asientoslibres6=4*4,asientoescogido6=0;




/*Presentacion Uni */

void presentacion()
{
	int i;
	textcolor(1);
	clrscr();

	/* Pilares Rectos */

	for(i=3;i<=11;i++)
	{
	gotoxy(26,i); delay(30); printf("лллл");
	gotoxy(44,i); delay(30); printf("лллл");
	}
  /* Bloque Horizontal Inferior */

   for(i=30;i<=37;i++)
   {
	gotoxy(i,10);  delay(30); printf("лл");
	gotoxy(i,11);  delay(30); printf("лл");
   }
    /* Pilar Vertical Superior */

   for(i=3;i<=8;i++)
   {
	gotoxy(32,i);  delay(30); printf("лллл");
   }
    /* Bloque Horizontal Superior */

   for(i=36;i<=42;i++)
   {
	gotoxy(i,3);  delay(30); printf("лл");
	gotoxy(i,4);  delay(30); printf("лл");
   }

 /* Pilares PequeЄos */

  for(i=6;i<=11;i++)
  {
   gotoxy(38,i);  delay (30); printf("лллл");
   gotoxy(50,i);  delay(30); printf("лллл");
  }
  
  for(i=47;i<=48;i++)
   {
   gotoxy(i,10);  delay(20); printf("лл");
   gotoxy(i,11);  delay(20); printf("лл");

   }
   /* Tilde i */
   for(i=3;i<=4;i++)
   {
   gotoxy(50,i);  delay(30); printf("лллл");
   }

   
   delay(40);
   gotoxy(23,13); textcolor(15);cprintf("UNIVERSIDAD NACIONAL DE INGENIERIA");
   gotoxy(26,15);textcolor(15);cprintf("Hosmand Rafael Belli C%cspedes",130);
   gotoxy(35,17);textcolor(15);cprintf("2019-0152U");
   gotoxy(31,19);textcolor(15);cprintf("Proyecto de Cinemas");
   gotoxy(36,21);textcolor(15);cprintf("22/11/19");
   gotoxy(33,23);textcolor(15);cprintf("Presione ENTER");
getch();

}
/*             Marco Principal Del Programa */



void           marco()
{

	int i;
	textbackground(0);
	clrscr();
	textcolor(11);
	/* lineas verticales */
	for(i=2;i<=24;i++)
	{
		gotoxy(2,i);
		printf("К");
		gotoxy(78,i);
		printf("К");
		gotoxy(20,i);
		printf("К");
	}

	/*lineas horizontales */
	for(i=21;i<=77;i++)
	{
		gotoxy(i,1);
		printf("Э");
		gotoxy(i,21);
		printf("Э");
		gotoxy(i,25);
		printf("Э");
	}

	/* lineas horizontales en menu de peliculas */

	for (i=3;i<=19;i++)
	{
		gotoxy(i,1);
		printf("Э");
		gotoxy(i,21);
		printf("Э");
		gotoxy(i,25);
		printf("Э");

	}

	/* esquinas y conexiones */
	gotoxy(2,1);
	printf("Щ");
	gotoxy(2,25);
	printf("Ш");
	gotoxy(78,1);
	printf("Л");
	gotoxy(78,21);
	printf("Й");
	gotoxy(78,25);
	printf("М");
	gotoxy(20,1);
	printf("Ы");
	gotoxy(20,25);
	printf("Ъ");
	gotoxy(20,21);
	printf("Ю");
	gotoxy(2,21);
	printf("Ь");

}







/*             Menu Principal de Seleccion de Peliculas */


void menu()
{

char opc, opcion1, opcion2, opcion3;

	do/*CICLO PARA SALIR DEL PROGRAMA*/
	{
	   do/*VALIDACION DE OPCIONES DEL MENU*/
	    {
			fflush(stdin);
			clrscr();
			marco();
			textcolor(11);
			gotoxy(34,2); printf(" BIENVENIDOS A CINES LANUZA ");
			gotoxy(44,4); printf(" CARTELERA ");
			gotoxy(3,4); printf("    PELICULAS ");
			gotoxy(3,8); printf(" 1) El Prisas");
			gotoxy(3,12); printf(" 2) El Bromas");
			gotoxy(3,16); printf(" 3)  Deadpool ");
			gotoxy(3,22); printf("   4)  SALIR");
			gotoxy(3,23); printf("      DE LA");
			gotoxy(3,24); printf("    CARTELERA");
			gotoxy(41,23); printf(" INICIAR FUNCI%cN ",224);
			gotoxy(22,7); printf("PROXIMAMENTE:");
			gotoxy(22,9); printf(" The Li%cn King ",162);
			gotoxy(38,9); printf(" Pacific Rim ");
			gotoxy(52,9); printf(" The Ring ");
			gotoxy(63,9); printf(" Start Wars ");
			gotoxy(24,16); printf("INGRESE EL N%cMERO DE LA PELICULA QUE DESEA VER",233);
			gotoxy(44,18); printf("Џ"); opc=getch();
		} while ((opc!='1')&&(opc!='2')&&(opc!='3')&&(opc!='4'));

		switch(opc)
		{
			case '1':
			/*Menu de 1era Pelicula seleccionada y seleccion de horario */

			do/*CICLO PARA VOLVER AL MENU ANTERIOR*/
			{
				do/*VALIDACION DE HORARIO A ELEJIR*/
				{
					fflush(stdin);
					clrscr();
					textcolor(9);
					marco();
					gotoxy(3,6); printf("      USTED");
					gotoxy(3,7); printf("       HA ");
					gotoxy(3,8); printf("    ESCGOGIDO");
					gotoxy(3,9); printf("   LA PELICULA");
					gotoxy(3,12); printf("   El Prisas");
					gotoxy(3,22); printf("   3) VOLVER");
					gotoxy(3,23); printf("      A LA");
					gotoxy(3,24); printf("    CARTELERA");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
					gotoxy(22,2); printf("Sinopsis");
					gotoxy(22,4); printf("Tom Wachowski, el sheriff de la ciudad de Green Hills,");
					gotoxy(22,5); printf("viajara a San Francisco para ayudar a Sonic,");
					gotoxy(22,6); printf("un erizo azul antropomorfico que corre a ");
					gotoxy(22,7); printf("velocidades supersonicas,en su batalla contra ");
					gotoxy(22,8); printf("el maligno Dr. Robotnik y sus aliados.");
					gotoxy(22,10); printf("Genero: Accion y aventuras, Ciencia ficci%cn",162);
					gotoxy(22,12); printf("Clasificaci%cn: PG-13.",162);
					gotoxy(50,12); printf("Duraci%cn: 116 Min.",162);
					gotoxy(22,14); printf("HORARIOS");
					gotoxy(22,16); printf(" 1) 4:00 PM        2) 5:00 PM   ");
					gotoxy(22,18); printf("ELIJA LA HORA QUE DESEA:"); opcion1=getch();

				}while((opcion1!='1')&&(opcion1!='2')&&(opcion1!='3'));
				switch(opcion1)
				{
					case '1':
					fflush(stdin);
					textcolor(9);
					marco();
					cuadrop();
					
					gotoxy(3,6); printf("      USTED");
					gotoxy(3,7); printf("       HA ");
					gotoxy(3,8); printf("    ESCGOGIDO");
					gotoxy(3,9); printf("   LA PELICULA");
					gotoxy(3,12); printf("    El Prisas");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);							/*ARREGLO #1 MOSTRADO AL USUARIO*/
					gotoxy(28,7);textcolor(15);  cprintf("%c",asientos[0][0]); gotoxy(33,7);textcolor(15); cprintf("%c",asientos[0][1]); gotoxy(38,7);textcolor(15); cprintf("%c",asientos[0][2]); gotoxy(43,7);textcolor(15); cprintf("%c",asientos[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15); cprintf("%c",asientos[1][0]); gotoxy(33,13);textcolor(15); cprintf("%c",asientos[1][1]); gotoxy(38,13);textcolor(15); cprintf("%c",asientos[1][2]); gotoxy(43,13);textcolor(15); cprintf("%c",asientos[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);  cprintf("%c",asientos[2][0]); gotoxy(61,7);textcolor(15);  cprintf("%c",asientos[2][1]); gotoxy(66,7);textcolor(15);  cprintf("%c",asientos[2][2]); gotoxy(71,7);textcolor(15);  cprintf("%c",asientos[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15); cprintf("%c",asientos[3][0]); gotoxy(61,13);textcolor(15); cprintf("%c",asientos[3][1]); gotoxy(66,13);textcolor(15); cprintf("%c",asientos[3][2]); gotoxy(71,13);textcolor(15); cprintf("%c",asientos[3][3]); /*fila 4*/
					
					if (asientoslibres==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/	
					{
						
						gotoxy(42,18); printf("Funci%cn Agotada",162);	/*MENSAJE*/		
						gotoxy(40,20); printf("Presione Una Tecla ");
						getch();
						break;
						
					}					
					
					
					do /*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/	
						gotoxy(22,16); printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR:"); scanf("%d",&numasientos);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos = 1;
						numdecrecivo=numasientos;
						
						if(numasientos<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");	/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos = 0;
						}
						if (numasientos>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE"); /*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos = 0;
						}
						if (numasientos>asientoslibres)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
							gotoxy(31,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE"); /*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos = 0;
						}		
						
					} while(numasientosValidos==0);
						
					if (asientoslibres!=0 && numasientos<=asientoslibres)/*CONDICION A CUMPLIR*/
					{
						if((numasientos>0)&&(numasientos<17))/*RANGO PERMITIDO DE ASIENTOS */
						{
							
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     "); /*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     "); /*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("Ingrese la fila que deseea: "); scanf("%d",&fila);/*LEER FILA*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna);/*LEER COLUMNA*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/

									
								if(fila<=0)/*VALIDACION FILA MENOR O IGUAL A 0*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(fila>=5)/*VALIDACION FILA MAYOR O IGUAL A 5*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(columna<=0)/*VALIDACION COLUMNA MENOR O IGUAL A 0*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/	
								if(columna>=5)/*VALIDACION COLUMNA MAYOR O IGUAL A 5*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos[fila-1][columna-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos[fila-1][columna-1]=='0' && fila>=1 && columna<=4 && columna>=1 && fila<=4)/*CONDCION A CUMPLIR*/
								{
							
									asientos[fila-1][columna-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres--;
									asientoescogido++; 
									numdecrecivo--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
									
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay(30);
									clrscr();
									fflush(stdin);
									textcolor(9);
									marco();
									cuadrop();
									gotoxy(3,6); printf("      USTED");
									gotoxy(3,7); printf("       HA ");
									gotoxy(3,8); printf("    ESCGOGIDO");
									gotoxy(3,9); printf("   LA PELICULA");
									gotoxy(3,12); printf("    El Prisas");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
									gotoxy(28,7);textcolor(15);  cprintf("%c",asientos[0][0]); gotoxy(33,7);textcolor(15); cprintf("%c",asientos[0][1]); gotoxy(38,7);textcolor(15); cprintf("%c",asientos[0][2]); gotoxy(43,7);textcolor(15); cprintf("%c",asientos[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15); cprintf("%c",asientos[1][0]); gotoxy(33,13);textcolor(15); cprintf("%c",asientos[1][1]); gotoxy(38,13);textcolor(15); cprintf("%c",asientos[1][2]); gotoxy(43,13);textcolor(15); cprintf("%c",asientos[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);  cprintf("%c",asientos[2][0]); gotoxy(61,7);textcolor(15);  cprintf("%c",asientos[2][1]); gotoxy(66,7);textcolor(15);  cprintf("%c",asientos[2][2]); gotoxy(71,7);textcolor(15);  cprintf("%c",asientos[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15); cprintf("%c",asientos[3][0]); gotoxy(61,13);textcolor(15); cprintf("%c",asientos[3][1]); gotoxy(66,13);textcolor(15); cprintf("%c",asientos[3][2]); gotoxy(71,13);textcolor(15); cprintf("%c",asientos[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}
							}while(numdecrecivo>0);
							gotoxy(32,19); printf("Gracias Por Reservar sus asientos");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla");
						}
					}

					getch();
					
					break;

					case '2':
					fflush(stdin);
					textcolor(9);
					marco();
					cuadrop();
					gotoxy(3,6); printf("      USTED");
					gotoxy(3,7); printf("       HA ");
					gotoxy(3,8); printf("    ESCGOGIDO");
					gotoxy(3,9); printf("   LA PELICULA");
					gotoxy(3,12); printf("    El Prisas");
					gotoxy(41,23); printf(" FUNCION INICIADA ");		/*ARREGLO #2 MOSTRADO AL USUARIO*/
					gotoxy(28,7);textcolor(15);cprintf("%c",asientos2[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos2[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos2[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos2[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15);cprintf("%c",asientos2[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos2[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos2[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos2[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);cprintf("%c",asientos2[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos2[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos2[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos2[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15);cprintf("%c",asientos2[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos2[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos2[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos2[3][3]); /*fila 4*/
					
					if (asientoslibres2==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/
					{
						gotoxy(42,18); printf("Funci%cn Agotada",162);/*MENSAJE*/		
						gotoxy(40,20); printf("Presione Una Tecla");
						getch();
						break;
					}
					
					do/*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/
						gotoxy(22,16);printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR: "); scanf("%d",&numasientos2);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos2 = 1;
						numdecrecivo2=numasientos2;
						
						if(numasientos2<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
						gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
						gotoxy(40,20); printf("INTENTE NUEVAMENTE");
						numasientosValidos2 = 0;
						}
						if (numasientos2>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
						gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
						gotoxy(40,20); printf("INTENTE NUEVAMENTE");
						numasientosValidos2 = 0;
						}
						if (numasientos2>asientoslibres2)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
						gotoxy(31,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE");/*MENSAJE DE ERROR*/
						gotoxy(40,20); printf("INTENTE NUEVAMENTE");
						numasientosValidos2 = 0;
						}
					}while(numasientosValidos2==0);
					if (asientoslibres2!=0 && numasientos2<=asientoslibres2)/*CONDICION A CUMPLIR*/
					{
						if((numasientos2>0)&&(numasientos2<17))/*RANGO PERMITIDO DE ASIENTOS*/
						{
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo2);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("ingrese la fila que deseea: "); scanf("%d",&fila2);/*LEER FILA*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna2);/*LEER COLUMNA*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/

								if(fila2<=0)/*VALIDACION FILA MENOR O IGUAL A 0*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(fila2>=5)/*VALIDACION FILA MAYOR O IGUAL A 5*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(columna2<=0)/*VALIDACION COLUMNA MENOR O IGUAL A 0*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(columna2>=5)/*VALIDACION COLUMNA MAYOR O IGUAL A 5*/
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos2[fila2-1][columna2-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos2[fila2-1][columna2-1]=='0' && fila2>=1 && columna2<=4 && columna2>=1 && fila2<=4)/*CONDCION A CUMPLIR*/
								{
									asientos2[fila2-1][columna2-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres2--;
									asientoescogido2++;
									numdecrecivo2--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
								
								
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay(30);
									clrscr();
									fflush(stdin);
									textcolor(9);
									marco();
									cuadrop();
									gotoxy(3,6); printf("      USTED");
									gotoxy(3,7); printf("       HA ");
									gotoxy(3,8); printf("    ESCGOGIDO");
									gotoxy(3,9); printf("   LA PELICULA");
									gotoxy(3,12); printf("    El Prisas");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
									gotoxy(28,7);textcolor(15);cprintf("%c",asientos2[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos2[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos2[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos2[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15);cprintf("%c",asientos2[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos2[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos2[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos2[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);cprintf("%c",asientos2[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos2[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos2[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos2[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15);cprintf("%c",asientos2[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos2[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos2[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos2[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}
							}while(numdecrecivo2>0);
							
							gotoxy(32,19); printf("Gracias Por Reservar sus asientos");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla");
						}
						
					}

					getch();


					break;

					case '3':


					break;

				}

			} while(opcion1!='3');

            break;

            case '2':
			/*             Menu de 2da Pelicula y Seleccion de horarios */


			do/*CICLO PARA VOLVER AL MENU ANTERIOR*/
			{
				do/*VALIDACION DE HORARIO A ELEJIR*/
				{
					fflush(stdin);
					clrscr();
					textcolor(10);
					marco();
					gotoxy(9,6); printf("USTED");
					gotoxy(10,7); printf("HA ");
					gotoxy(7,8); printf("ESCOGIDO");
					gotoxy(6,9); printf("LA PELICULA");
					gotoxy(3,12); printf("    EL Bromas");
					gotoxy(5,22); printf(" 3) VOLVER");
					gotoxy(9,23); printf("A LA");
					gotoxy(7,24); printf("CARTELERA");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
					gotoxy(22,2); printf("Sinopsis");
					gotoxy(22,4); printf("La pasion de Arthur Fleck, un hombre ignnorado   ");
					gotoxy(22,5); printf("por la sociedad, es hacer reir a la gente. Sin    ");
					gotoxy(22,6); printf("embargo, una serie de tragicos sucesos haran que ");
					gotoxy(22,7); printf("que su vision del mundo se distorsione, volviendose");
					gotoxy(22,8); printf("una mente criminal maestra.");
					gotoxy(22,10); printf("Genero: Drama, Suspenso, Cine policiaco.");
					gotoxy(22,12); printf("Clasificacion: PG 13");
					gotoxy(50,12); printf("Duracion: 123 Min");
					gotoxy(22,14); printf("HORARIOS");
					gotoxy(22,16); printf(" 1) 7:00 PM        2) 8:00 PM ");
					gotoxy(22,18); printf("ELIJA LA HORA QUE DESEA:"); opcion2=getch();

				}while((opcion2!='1')&&(opcion2!='2')&&(opcion2!='3'));

				switch(opcion2)
				{
					case '1':
					fflush(stdin);
					textcolor(10);
					marco();
					cuadrop();
					gotoxy(9,6); printf("USTED");
					gotoxy(10,7); printf("HA ");
					gotoxy(7,8); printf("ESCOGIDO");
					gotoxy(6,9); printf("LA PELICULA");
					gotoxy(3,12); printf("    EL Bromas");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);				/*ARREGLO #3 MOSTRADO AL USUARIO*/
					gotoxy(28,7);textcolor(15);cprintf("%c",asientos3[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos3[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos3[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos3[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15);cprintf("%c",asientos3[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos3[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos3[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos3[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);cprintf("%c",asientos3[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos3[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos3[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos3[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15);cprintf("%c",asientos3[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos3[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos3[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos3[3][3]); /*fila 4*/
					
					if (asientoslibres3==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/
					{
						gotoxy(42,18); printf("Funci%cn Agotada",162);/*MENSAJE*/	
						gotoxy(40,20); printf("Presione Una Tecla ");
						getch();
						break;

					}
					
					do/*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/
						gotoxy(22,16);printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR: "); scanf("%d",&numasientos3);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos3=1;
						numdecrecivo3=numasientos3;
						
						
						if(numasientos3<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos3=0;
						}
						if (numasientos3>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos3=0;
						}
						if (numasientos3>asientoslibres3)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
							gotoxy(31,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos3=0;
						}
					}while(numasientosValidos3==0);
					if (asientoslibres3!=0 && numasientos3<=asientoslibres3)/*CONDICION A CUMPLIR*/
					{
						if((numasientos3>0)&&(numasientos3<17))/*RANGO PERMITIDO DE ASIENTOS*/
						{
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo3);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("ingrese la fila que deseea: "); scanf("%d",&fila3);/*LEER FILAS*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna3);/*LEER COLUMNAS*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/

								if (fila3<=0) 
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (fila3>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna3<=0)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna3>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos3[fila3-1][columna3-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos3[fila3-1][columna3-1]=='0' && fila3>=1 && columna3<=4 && columna3>=1 && fila3<=4)/*CONDICION A CUMPLIR*/
								{
									asientos3[fila3-1][columna3-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres3--;
									asientoescogido3++;
									numdecrecivo3--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
									
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay (30);
									clrscr();
									fflush(stdin);
									textcolor(10);
									marco();
									cuadrop();
									gotoxy(9,6); printf("USTED");
									gotoxy(10,7); printf("HA ");
									gotoxy(7,8); printf("ESCOGIDO");
									gotoxy(6,9); printf("LA PELICULA");
									gotoxy(3,12); printf("    EL Bromas");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
									gotoxy(28,7);textcolor(15);cprintf("%c",asientos3[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos3[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos3[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos3[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15);cprintf("%c",asientos3[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos3[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos3[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos3[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);cprintf("%c",asientos3[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos3[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos3[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos3[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15);cprintf("%c",asientos3[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos3[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos3[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos3[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}
							}while(numdecrecivo3>0);
							
							gotoxy(32,19); printf("Gracias Por Reservar sus asientos ");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla ");
						}
					}

					getch();
					break;

					case '2':
					fflush(stdin);
					textcolor(10);
					marco();
					cuadrop();
					gotoxy(9,6); printf("USTED");
					gotoxy(10,7); printf("HA ");
					gotoxy(7,8); printf("ESCOGIDO");
					gotoxy(6,9); printf("LA PELICULA");
					gotoxy(3,12); printf("    EL Bromas");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);				/*ARREGLO #4 MOSTRADO AL USUARIO*/
					gotoxy(28,7);textcolor(15);cprintf("%c",asientos4[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos4[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos4[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos4[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15);cprintf("%c",asientos4[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos4[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos4[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos4[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);cprintf("%c",asientos4[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos4[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos4[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos4[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15);cprintf("%c",asientos4[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos4[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos4[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos4[3][3]); /*fila 4*/
					
					if (asientoslibres4==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/
					{
						gotoxy(42,18); printf("Funci%cn Agotada",162);/*MENSAJE*/
						gotoxy(40,20); printf("Presione Una Tecla ");
						getch();
						break;
						
					}
					do /*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/
						gotoxy(22,16);printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR:"); scanf("%d",&numasientos4);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos4=1;
						numdecrecivo4=numasientos4;
						
						if(numasientos4<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos4=0;
						}
						if (numasientos4>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos4=0;
						}
						if (numasientos4>asientoslibres4)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
							gotoxy(31,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos4=0;
						}
					}while(numasientosValidos4==0);
					if (asientoslibres4!=0 && numasientos4<=asientoslibres4)/*CONDICION A CUMPLIR*/
					{
						if((numasientos4>0)&&(numasientos4<17))/*RANGO PERMITIDO DE ASIENTOS*/
						{
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo4);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("ingrese la fila que deseea: "); scanf("%d",&fila4);/*LEER FILAS*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna4);/*LEER COLUMNAS*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/

								if (fila4<=0)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (fila4>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna4<=0)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna4>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos4[fila4-1][columna4-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos4[fila4-1][columna4-1]=='0' && fila4>=1 && columna4<=4 && columna4>=1 && fila4<=4)/*CONDICION A CUMPLIR*/
								{
									asientos4[fila4-1][columna4-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres4--;
									asientoescogido4++;
									numdecrecivo4--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
								
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay(30);
									clrscr();
									fflush(stdin);
									textcolor(10);
									marco();
									cuadrop();
									gotoxy(9,6); printf("USTED");
									gotoxy(10,7); printf("HA ");
									gotoxy(7,8); printf("ESCOGIDO");
									gotoxy(6,9); printf("LA PELICULA");
									gotoxy(3,12); printf("    EL Bromas");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
									gotoxy(28,7);textcolor(15);cprintf("%c",asientos4[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos4[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos4[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos4[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15);cprintf("%c",asientos4[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos4[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos4[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos4[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);cprintf("%c",asientos4[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos4[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos4[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos4[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15);cprintf("%c",asientos4[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos4[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos4[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos4[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}
								
							}while(numdecrecivo4>0);
							
							gotoxy(32,19); printf("Gracias Por Reservar sus asientos");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla");
						}
					}
					getch();
					
					break;

					case '3':

					break;

				}


			} while(opcion2!='3');


            break;

            case '3':
            /* Menu de 3era Pelicula y seleccion de horarios */

			do/*CICLO PARA VOLVER AL MENU ANTERIOR*/
			{
				do/*VALIDACION DE HORARIO A ELEJIR*/
				{
					fflush(stdin);
					clrscr();
					textcolor(12);
					marco();
					gotoxy(9,6);   printf("USTED");
					gotoxy(10,7);  printf("HA");
					gotoxy(7,8);   printf("ESCGOGIDO");
					gotoxy(6,9);   printf("LA PELICULA");
					gotoxy(3,12);  printf("     Deadpool ");
					gotoxy(5,22);  printf(" 3) VOLVER");
					gotoxy(9,23);  printf("A LA");
					gotoxy(7,24);  printf("CARTELERA");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);
					gotoxy(22,2);  printf("Sinopsis");
					gotoxy(22,4);  printf("Un exmercenario quien, tras haber sido sometido a");
					gotoxy(22,5);  printf("un cruel experimento, adquiere el superpoder de  ");
					gotoxy(22,6);  printf("sanar rapidamente y pretende vengarse del hombre ");
					gotoxy(22,7);  printf("que destrozo su vida.");
					gotoxy(22,9);  printf("Genero: Accion, Superheroes, Ciencia ficcion.");
					gotoxy(22,11); printf("Clasificacion R");
					gotoxy(50,11); printf("Duracion: 109 Min.");
					gotoxy(22,13); printf("HORARIOS");
					gotoxy(22,15); printf(" 1) 9:00 PM        2) 10:00 PM ");
					gotoxy(22,17); printf("ELIJA LA HORA QUE DESEE:"); opcion3=getch();

				}while((opcion3!='1')&&(opcion3!='2')&&(opcion3!='3'));

				switch(opcion3)
				{
					case '1':
					fflush(stdin);
					textcolor(12);
					marco();
					cuadrop();
					gotoxy(9,6);   printf("USTED");
					gotoxy(10,7);  printf("HA");
					gotoxy(7,8);   printf("ESCGOGIDO");
					gotoxy(6,9);   printf("LA PELICULA");
					gotoxy(3,12);  printf("     Deadpool ");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);					/*ARREGLO #5 MOSTRADO AL USUARIO*/		
					gotoxy(28,7);textcolor(15);cprintf("%c",asientos5[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos5[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos5[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos5[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15);cprintf("%c",asientos5[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos5[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos5[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos5[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);cprintf("%c",asientos5[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos5[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos5[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos5[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15);cprintf("%c",asientos5[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos5[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos5[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos5[3][3]); /*fila 4*/
					
					if (asientoslibres5==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/
					{
						gotoxy(42,18); printf("Funci%cn Agotada",162);/*MENSAJE*/
						gotoxy(40,20); printf("Presione Una Tecla");
						getch();
						break;
					}
					do/*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/
						gotoxy(22,16);printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR: "); scanf("%d",&numasientos5);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos5=1;
						numdecrecivo5=numasientos5;
					
						if(numasientos5<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos5=0;
						}
						if (numasientos5>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos5=0;
						}
						if (numasientos5>asientoslibres5)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
							gotoxy(32,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos5=0;
						}
					}while(numasientosValidos5==0);
					if (asientoslibres5!=0 && numasientos5<=asientoslibres5)/*CONDICION A CUMPLIR*/
					{
						if((numasientos5>0)&&(numasientos5<17))/*RANGO PERMITIDO DE ASIENTOS*/
						{
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo5);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("ingrese la fila que deseea: "); scanf("%d",&fila5);/*LEER FILAS*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna5);/*LEER COLUMNAS*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/

								if (fila5<=0) 
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(fila5>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna5<=0)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna5>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos5[fila5-1][columna5-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos5[fila5-1][columna5-1]=='0' && fila5>=1 && columna5<=4 && columna5>=1 && fila5<=4)/*CONDICION A CUMPLIR*/
								{
									asientos5[fila5-1][columna5-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres5--;
									asientoescogido5++;
									numdecrecivo5--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
								
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay(30);
									clrscr();
									fflush(stdin);
									textcolor(12);
									marco();
									cuadrop();
									gotoxy(9,6);   printf("USTED");
									gotoxy(10,7);  printf("HA");
									gotoxy(7,8);   printf("ESCGOGIDO");
									gotoxy(6,9);   printf("LA PELICULA");
									gotoxy(3,12);  printf("     Deadpool ");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);					
									gotoxy(28,7);textcolor(15);cprintf("%c",asientos5[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos5[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos5[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos5[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15);cprintf("%c",asientos5[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos5[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos5[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos5[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);cprintf("%c",asientos5[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos5[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos5[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos5[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15);cprintf("%c",asientos5[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos5[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos5[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos5[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}			
							}while(numdecrecivo5>0);
							
							gotoxy(32,19); printf("Gracias Por Reservar sus asientos");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla");
						}
					}

					getch();
					
					break;

					case '2':
					fflush(stdin);
					textcolor(12);
					marco();
					cuadrop();
					gotoxy(9,6);   printf("USTED");
					gotoxy(10,7);  printf("HA");
					gotoxy(7,8);   printf("ESCGOGIDO");
					gotoxy(6,9);   printf("LA PELICULA");
					gotoxy(3,12);  printf("     Deadpool ");
					gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);					/*ARREGLO #6 MOSTRADO AL USUARIO*/
					gotoxy(28,7);textcolor(15);cprintf("%c",asientos6[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos6[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos6[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos6[0][3]); /*fila 1*/
					gotoxy(28,13);textcolor(15);cprintf("%c",asientos6[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos6[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos6[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos6[1][3]); /*fila 2*/
					gotoxy(56,7);textcolor(15);cprintf("%c",asientos6[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos6[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos6[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos6[2][3]); /*fila 3*/
					gotoxy(56,13);textcolor(15);cprintf("%c",asientos6[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos6[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos6[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos6[3][3]); /*fila 4*/
					
					if (asientoslibres6==0)/*VALIDACION CUANDO EL ARREGLO ESTE LLENO*/
					{
						gotoxy(42,18); printf("Funci%cn Agotada",162);/*MENSAJE*/
						gotoxy(40,20); printf("Presione Una Tecla ");
						getch();
						break;
					}	
					do/*CICLO PARA QUE EL USUARIO DIGITE CORRECTAMENTE LA CANTIDAD DE ASIENTOS*/
					{
						fflush(stdin);
						gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS A RESERVAR*/
						gotoxy(22,16);printf("INGRESE LA CANTIDAD DE ASIENTOS A RESERVAR: "); scanf("%d",&numasientos6);/*LEER CANTIDAD DE ASIENTOS*/
						gotoxy(22,19); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						gotoxy(22,20); printf("                                               ");/*LIMPIAR MENSAJES DE ERROR*/
						numasientosValidos6=1;
						numdecrecivo6=numasientos6;
						
						if(numasientos6<=0)/*VALIDACION CUANDO INGRESA UN ASIENTO MENOR O IGUAL A 0*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							
							numasientosValidos6=0;
						}
						if(numasientos6>17)/*VALIDACION CUANDO INGRESA UN ASIENTO MAYOR A 17*/
						{
							gotoxy(33,19); printf("CANTIDAD DE ASIENTOS INEXISTENTE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos6=0;
						}
						if (numasientos6>asientoslibres6)/*VALIDACION CUANDO INGRESAN UNA CANTIDAD DE ASIENTOS MAYOR A LOS ASIENTOS LIBRES DE LA SALA*/
						{
							gotoxy(31,19); printf("CANTIDAD DE ASIENTOS NO DISPONIBLE");/*MENSAJE DE ERROR*/
							gotoxy(40,20); printf("INTENTE NUEVAMENTE");
							numasientosValidos6=0;
						}
					}while(numasientosValidos6==0);
					if (asientoslibres6!=0 && numasientos6<=asientoslibres6)/*CONDICION A CUMPLIR*/
					{
						if((numasientos6>0)&&(numasientos6<17))/*RANGO PERMITIDO DE ASIENTOS*/
						{
							do/*CICLO PARA QUE SE REPITA HASTA QUE LA CANTIDAD DE ASIENTOS QUE PIDIO EL USUARIO SEA 0*/
							{
								fflush(stdin);
								gotoxy(50,16); printf("                            ");/*LIMPIAR RESIDUOS DE ASIENTOS RESTANTES*/
								gotoxy(22,17); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR FILAS*/
								gotoxy(22,18); printf("                                  			     ");/*LIMPIAR RESIDUOS AL DIGITAR COLUMNAS*/
								gotoxy(22,16); printf("Asientos restantes por reservar: %d",numdecrecivo6);/*MOSTRAR CANTIDAD DE ASIENTOS RESTANTES A RESERVAR*/
								gotoxy(22,17); printf("ingrese la fila que deseea: "); scanf("%d",&fila6);/*LEER FILAS*/
								gotoxy(22,18); printf("Ingrese el n%cmero de asiento: ",163); scanf("%d",&columna6);/*LEER COLUMNAS*/
								gotoxy(22,20); printf("                                                        ");/*LIMPIAR MENSAJE DE ERROR*/
								
								if (fila6<=0) 
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if(fila6>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna6<=0)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (columna6>=5)
								{gotoxy(22,20); printf("Digite correctamente la fila y # del asiento que deseea");}/*MENSAJE DE ERROR*/
								if (asientos6[fila6-1][columna6-1]=='X')/*VALIDACION CUANDO EL ASIENTO ESTA OCUPADO*/
								{
									gotoxy(22,20); printf("El asiento esta ocupado, Intente otra vez");/*MENSAJE DE ERROR*/
								}
								if(asientos6[fila6-1][columna6-1]=='0' && fila6>=1 && columna6<=4 && columna6>=1 && fila6<=4)/*CONDICION A CUMPLIR*/
								{
									asientos6[fila6-1][columna6-1]='X';/*LETRA MARCADORA DE ASIENTOS*/
									asientoslibres6--;
									asientoescogido6++;
									numdecrecivo6--;
									gotoxy(42,20); printf("Asiento Guardado");/*MENSAJE NOTIFICANDO AL USUARIO QUE SU ASIENTO HA SIDO GUARDADO*/
								
									/*MOSTRAR ASIENTO GUARDADO EN TIEMPO REAL*/
									delay(30);
									clrscr();
									fflush(stdin);
									textcolor(12);
									marco();
									cuadrop();
									gotoxy(9,6);   printf("USTED");
									gotoxy(10,7);  printf("HA");
									gotoxy(7,8);   printf("ESCGOGIDO");
									gotoxy(6,9);   printf("LA PELICULA");
									gotoxy(3,12);  printf("     Deadpool ");
									gotoxy(41,23); printf(" FUNCI%cN INICIADA ",224);	
									gotoxy(28,7);textcolor(15);cprintf("%c",asientos6[0][0]); gotoxy(33,7);textcolor(15);cprintf("%c",asientos6[0][1]); gotoxy(38,7);textcolor(15);cprintf("%c",asientos6[0][2]);gotoxy(43,7);textcolor(15);cprintf("%c",asientos6[0][3]); /*fila 1*/
									gotoxy(28,13);textcolor(15);cprintf("%c",asientos6[1][0]); gotoxy(33,13);textcolor(15);cprintf("%c",asientos6[1][1]); gotoxy(38,13);textcolor(15);cprintf("%c",asientos6[1][2]);gotoxy(43,13);textcolor(15);cprintf("%c",asientos6[1][3]); /*fila 2*/
									gotoxy(56,7);textcolor(15);cprintf("%c",asientos6[2][0]); gotoxy(61,7);textcolor(15);cprintf("%c",asientos6[2][1]); gotoxy(66,7);textcolor(15);cprintf("%c",asientos6[2][2]);gotoxy(71,7);textcolor(15);cprintf("%c",asientos6[2][3]); /*fila 3*/
									gotoxy(56,13);textcolor(15);cprintf("%c",asientos6[3][0]); gotoxy(61,13);textcolor(15);cprintf("%c",asientos6[3][1]); gotoxy(66,13);textcolor(15);cprintf("%c",asientos6[3][2]);gotoxy(71,13);textcolor(15);cprintf("%c",asientos6[3][3]); /*fila 4*/
									gotoxy(42,20); printf("Asiento Guardado");
								}	
							}while(numdecrecivo6>0);

							gotoxy(32,19); printf("Gracias Por Reservar sus asientos ");/*MENSAJE DE AGRADECIMIENTO*/
							gotoxy(40,20); printf("Presione Una Tecla ");
						}
					}
					getch();
					break;

					case '3':

					break;

				}

			} while(opcion3!='3');


            break;

            case '4':

            break;
		}


	}while (opc!='4');


}

void cuadrop ()

{
	int i;

	/* Cuadro de peliculas */

	/*Marcadores de filas y columnas */

	gotoxy(24,7); textcolor(7);cprintf("1"); gotoxy(24,13);textcolor(7); cprintf("2");  gotoxy(52,7);textcolor(7); cprintf("3");  gotoxy(52,13);textcolor(7); cprintf("4");
	gotoxy(28,4);textcolor(14);  cprintf("1"); gotoxy(33,4);textcolor(14);  cprintf("2"); gotoxy(38,4);textcolor(14);  cprintf("3"); gotoxy(43,4);textcolor(14);  cprintf("4");
	gotoxy(56,4);textcolor(14);  cprintf("1"); gotoxy(61,4);textcolor(14);  cprintf("2"); gotoxy(66,4);textcolor(14);  cprintf("3"); gotoxy(71,4);textcolor(14);  cprintf("4");
	gotoxy(28,10);textcolor(14);  cprintf("1"); gotoxy(33,10);textcolor(14);  cprintf("2"); gotoxy(38,10);textcolor(14);  cprintf("3"); gotoxy(43,10);  textcolor(14);cprintf("4");
	gotoxy(56,10);textcolor(14);  cprintf("1"); gotoxy(61,10);textcolor(14);  cprintf("2"); gotoxy(66,10);textcolor(14);  cprintf("3"); gotoxy(71,10);  textcolor(14);cprintf("4");


	/*lineas Horizontales */
	for(i=23;i<=75;i++)

	{
		gotoxy(i,2); printf("Э");
		gotoxy(i,15); printf("Э");

	}

	/* lineas verticales */

	for(i=3;i<=14;i++)

	{
		gotoxy(22,i);
		printf("К");
		gotoxy(49,i);
		printf("К");
		gotoxy(76,i);
		printf("К");

	}

	/* esquinas y conexiones */

	  gotoxy(76,2); printf("Л");
	  gotoxy(76,15); printf("М");
	  gotoxy(22,15); printf("Ш");
	  gotoxy(22,2); printf("Щ");
	  gotoxy(49,2); printf("Ы");
	  gotoxy(49,15); printf("Ъ");


  /* asientos internos */


  /* asientos lado A */

  for(i=26;i<=45;i++)

  {
	 gotoxy(i,5);  printf("Ф");
	 gotoxy(i,8);  printf("Ф");
	 gotoxy(i,11); printf("Ф");
	 gotoxy(i,14); printf("Ф");

  }

  /* divisores de  asientos */

  for(i=5;i<=7;i++)
  {
	gotoxy(26,i); printf("Г");
	gotoxy(31,i); printf("Г");
	gotoxy(36,i); printf("Г");
	gotoxy(41,i); printf("Г");
	gotoxy(46,i); printf("Г");
	gotoxy(54,i); printf("Г");
	gotoxy(59,i); printf("Г");
	gotoxy(64,i); printf("Г");
	gotoxy(69,i); printf("Г");
	gotoxy(74,i); printf("Г");
  }

  for (i=11;i<=13;i++)

  {
	gotoxy(26,i); printf("Г");
	gotoxy(31,i); printf("Г");
	gotoxy(36,i); printf("Г");
	gotoxy(41,i); printf("Г");
	gotoxy(46,i); printf("Г");
	gotoxy(54,i); printf("Г");
	gotoxy(59,i); printf("Г");
	gotoxy(64,i); printf("Г");
	gotoxy(69,i); printf("Г");
	gotoxy(74,i); printf("Г");
  }

  /* asientos lado B */

  for(i=54;i<=73;i++)
  {
   gotoxy(i,5);  printf("Ф");
   gotoxy(i,8);  printf("Ф");
   gotoxy(i,11); printf("Ф");
   gotoxy(i,14); printf("Ф");

  }
	/* esquinas y conexiones internas */

	gotoxy(26,5);  printf("к");
	gotoxy(26,11); printf("к");
	gotoxy(54,5);  printf("к");
	gotoxy(54,11); printf("к");
	gotoxy(26,8);  printf("Р");
	gotoxy(26,14); printf("Р");
	gotoxy(54,8);  printf("Р");
	gotoxy(54,14); printf("Р");
	gotoxy(46,5);  printf("П");
	gotoxy(46,11); printf("П");
	gotoxy(74,5);  printf("П");
	gotoxy(74,11); printf("П");
	gotoxy(46,8);  printf("й");
	gotoxy(46,14); printf("й");
	gotoxy(74,8);  printf("й");
	gotoxy(74,14); printf("й");
	gotoxy(31,5);  printf("Т");
	gotoxy(36,5);  printf("Т");
	gotoxy(41,5);  printf("Т");
	gotoxy(59,5);  printf("Т");
	gotoxy(64,5);  printf("Т");
	gotoxy(69,5);  printf("Т");
	gotoxy(31,11); printf("Т");
	gotoxy(36,11); printf("Т");
	gotoxy(41,11); printf("Т");
	gotoxy(59,11); printf("Т");
	gotoxy(64,11); printf("Т");
	gotoxy(69,11); printf("Т");
	gotoxy(31,8);  printf("С");
	gotoxy(36,8);  printf("С");
	gotoxy(41,8);  printf("С");
	gotoxy(59,8);  printf("С");
	gotoxy(64,8);  printf("С");
	gotoxy(69,8);  printf("С");
	gotoxy(31,14); printf("С");
	gotoxy(36,14); printf("С");
	gotoxy(41,14); printf("С");
	gotoxy(59,14); printf("С");
	gotoxy(64,14); printf("С");
	gotoxy(69,14); printf("С");
}
