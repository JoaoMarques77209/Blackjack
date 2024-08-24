#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <Windows.h>
#include<time.h>

//Desenha o cabecalho
void cabecalho()
{
 printf("\t\t\t\t*******************************************\n");
 printf("\t\t\t\t*                                         *\n");
 printf("\t\t\t\t*               Black Jack                *\n");  
 printf("\t\t\t\t*                                         *\n");
 printf("\t\t\t\t*******************************************\n\n");
}

//coloca o Cursor na posicao X,Y
BOOL setxy(int x, int y)
{
	COORD c = { x,y };
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Fazer Carta
void DesenhoDaCarta(int naipe,int valor){
	
	int DesenhoNaipe=0;
	int Valor1=0;
	int Valor2=0;
	
	//DECIDIR QUAL E O SIMBOLO Q VAI SER DESENHADO
	
	switch(naipe){
		
		case 1 :
			DesenhoNaipe=03;
			break;
		case 2:
			DesenhoNaipe=04;
			break;
		case 3 :
			DesenhoNaipe=05;
			break;
		case 4:
			DesenhoNaipe=06;
			break;
	}
	
	// DECIDIR QUAL E O NUMERO OU LETRA Q VAI SER DESENHADO
		switch(valor){
		
		case 1 :
			Valor1=65;
			Valor2=00;
			break;		//e o as
		case 2:
			Valor1=50;
			Valor2=00;
			break;
		case 3 :
			Valor1=51;
			Valor2=00;
			break;
		case 4:
			Valor1=52;
			Valor2=00;
			break;
		case 5 :
			Valor1=53;
			Valor2=00;
			break;
		case 6:
			Valor1=54;
			Valor2=00;
			break;
		case 7 :
			Valor1=55;
			Valor2=00;
			break;
		case 8:
			Valor1=56;
			Valor2=00;
			break;
		case 9 :
			Valor1=57;
			Valor2=00;
			break;
		case 10:
			Valor1=49;
			Valor2=48;
			break;			
		case 11:
			Valor1=74;
			Valor2=00;
			break;			//e o valete
		case 12:
			Valor1=81;
			Valor2=00;
			break;		//e a dama
		case 13:
			Valor1=75;
			Valor2=00;				//e o rei
			break;
	}
	
	
	//DESENHO DA CARTA 
			
			printf("\n\n");
			printf("  %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
			printf("  %c%c%c       %c\n",186,Valor1,Valor2,186);
			printf("  %c         %c\n",186,186);
			printf("  %c         %c\n",186,186);
			printf("  %c    %c    %c\n",186,DesenhoNaipe,186);
			printf("  %c         %c\n",186,186);
			printf("  %c         %c\n",186,186);
			printf("  %c       %c%c%c\n",186,Valor1,Valor2,186);
			printf("  %c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,188);	
}


int main() 
{	
 setlocale(LC_ALL, "Portuguese");   //acentuaçao portuguesa
 int num_players, num, num_CPUS;	 
 int MaisCartas, resultado, soma;
 int  CPU1, CPU2, CPU3, CPU4, SomaCPU1, SomaCPU2, SomaCPU3, SomaCPU4;
 soma=0;
 SomaCPU1=0;
 SomaCPU2=0;
 SomaCPU3=0;
 SomaCPU4=0;
 
 srand(time(NULL));	 
 num_CPUS = rand() % (4-0+1) + 0;	//Aleatoriedade de numeros
 
 //CPU1
 do{
 	 srand(time(NULL));	 
 	 CPU1 = rand() % (11-1+1) + 1;	//Aleatoriedade de numeros
	 SomaCPU1 += CPU1;
 	
 	}while(SomaCPU1<15);
 
 //CPU2
 do{
 	 srand(time(NULL));	 
 	 CPU2 = rand() % (11-1+1) + 1;	//Aleatoriedade de numeros
	 SomaCPU2 += CPU2;
 	
 	}while(SomaCPU2<15);
 
 //CPU3
  do{
 	 srand(time(NULL));	 
 	 CPU3 = rand() % (11-1+1) + 1;	//Aleatoriedade de numeros
	 SomaCPU3 += CPU3;
 	
 	}while(SomaCPU3<15);
 
 //CPU4
  do{
 	 srand(time(NULL));	 
 	 CPU4 = rand() % (11-1+1) + 1;	//Aleatoriedade de numeros
	 SomaCPU4 += CPU4;
 	
 	}while(SomaCPU4<15);
  
	do
 	{
 	cabecalho();
 		
 	printf("\n\n\n Bem Vindo ao Black Jack!!!\n\n");
	printf("\t1- Jogar\n\n");
	printf("\t2- Regras\n\n");
	printf("\t3- Sair\n\n");
	
	printf(" Selecione o que pretede fazer: ");
	scanf("%d", &num);
	
	system("@cls||clear");	//Apagar ecra
	
	}while(num !=1 && num !=2 && num !=3);           
	
	cabecalho();
	
	if(num==1)
	{	
		printf("\n Numero de jogadores(Máx. 5 Jogadores): ");
		scanf("%d", &num_players);
		
		system("@cls||clear");
		
		cabecalho();
		printf("\n - Prepare-se para o jogo! \n\n");
		printf("---------------------------------------\n\n");
		
		system("pause");
 		system("@cls||clear");	//Apagar ecra
		
		cabecalho();
		
		if(num_CPUS=0)
		{
			printf("\n Este jogo vai ser disputado por você e o dealer");
		}
		
		else
		{
			printf("\n - Este jogo vai ser disputado contra %d jogadores e o dealer...\n\n", num_CPUS);
		}
		
		printf("---------------------------------------\n\n");
		system("pause");
 		system("@cls||clear");	//Apagar ecra
 		
		if(num_players==1)
		{	
 			if(num_CPUS=1)
 			{
	 			cabecalho();
	 			
	 			//Inicio Carta Dealer
	 			
	 			srand(time(NULL));
				int c=rand() % (4-1+1) + 1;	//Aleatoriedade de numeros
				int d=rand() % (13-1+1) + 1;	//Aleatoriedade de numeros;	
				
				DesenhoDaCarta(c,d);
			
				//Atribuir Valores ás cartas
				
				switch(d)
				{	
					case 1:
					if(d==1)
					{
						if(soma > 13)
						{
							resultado=1;		
						}	
				
						else
						{
							resultado=11;
						}	
					}
				
					case 2:
					if(d==2)
					{
	 					resultado=2;
					}
				
					case 3:
					if(d==3)
					{
	 					resultado=3;
					}
			
					case 4:
					if(d==4)
					{
	 					resultado=4;
					}
			
					case 5:
					if(d==5)
					{
	 					resultado=5;
					}
			
					case 6:
					if(d==6)
					{
	 					resultado=6;
					}
			
					case 7:
					if(d==7)
					{
	 					resultado=7;
					}
			
					case 8:
					if(d==8)
					{
	 					resultado=8;
					}
			
					case 9:
					if(d==9)
					{
	 					resultado=9;
					}
			
					case 10:
					if(d==10)
					{
	 					resultado=10;
					}	
			
					case 11:
					if(d==11)
					{
	 					resultado=10;
					}
			
					case 12:
					if(d==12)
					{
	 					resultado=10;
					}
			
					case 13:
					if(d==13)
					{
	 				resultado=10;
					}
	
				}
	 		
			 //FimCartaDealer
			 
				srand(time(NULL));
				int a=rand() % (4-1+1) + 1;	//Aleatoriedade de numeros
				int b=rand() % (13-1+1) + 1;	//Aleatoriedade de numeros;	
				
				DesenhoDaCarta(a,b);
			
				//Atribuir Valores ás cartas
				
				switch(b)
				{	
					case 1:
					if(b==1)
					{
						if(soma > 13)
						{
							resultado=1;		
						}	
				
						else
						{
							resultado=11;
						}	
					}
				
					case 2:
					if(b==2)
					{
	 					resultado=2;
					}
				
					case 3:
					if(b==3)
					{
	 					resultado=3;
					}
			
					case 4:
					if(b==4)
					{
	 					resultado=4;
					}
			
					case 5:
					if(b==5)
					{
	 					resultado=5;
					}
			
					case 6:
					if(b==6)
					{
	 					resultado=6;
					}
			
					case 7:
					if(b==7)
					{
	 					resultado=7;
					}
			
					case 8:
					if(b==8)
					{
	 					resultado=8;
					}
			
					case 9:
					if(b==9)
					{
	 					resultado=9;
					}
			
					case 10:
					if(b==10)
					{
	 					resultado=10;
					}	
			
					case 11:
					if(b==11)
					{
	 					resultado=10;
					}
			
					case 12:
					if(b==12)
					{
	 					resultado=10;
					}
			
					case 13:
					if(b==13)
					{
	 				resultado=10;
					}
	
				}
		
			soma = soma + resultado;
			
			printf("\nVocê tem %d pontos. Deseja mais cartas? SIM [1] / NÃO [2]: ", soma);
			scanf("%d",&MaisCartas);
						
			system("pause");
 			system("@cls||clear");	//Apagar ecra
			
			if(MaisCartas==1)
			{
				do{
				cabecalho();
				srand(time(NULL));
				int a=rand() % (4-1+1) + 1;	//Aleatoriedade de numeros
				int b=rand() % (13-1+1) + 1;	//Aleatoriedade de numeros;	
				
				DesenhoDaCarta(a,b);
			
			//Atribuir Valores ás cartas
				
				switch(b)
				{	
					case 1:
					if(b==1)
					{
						if(soma > 13)
						{
							resultado=1;		
						}
				
						else
						{
							resultado=11;
						}	
					}
				
					case 2:
					if(b==2)
					{
	 					resultado=2;
					}
				
					case 3:
					if(b==3)
					{
	 					resultado=3;
					}
			
					case 4:
					if(b==4)
					{
	 					resultado=4;
					}
			
					case 5:
					if(b==5)
					{
	 					resultado=5;
					}
			
					case 6:
					if(b==6)
					{
	 					resultado=6;
					}
			
					case 7:
					if(b==7)
					{
	 					resultado=7;
					}
			
					case 8:
					if(b==8)
					{
	 					resultado=8;
					}
			
					case 9:
					if(b==9)
					{
	 					resultado=9;
					}
			
					case 10:
					if(b==10)
					{
	 					resultado=10;
					}
			
					case 11:
					if(b==11)
					{
	 					resultado=10;
					}
			
					case 12:
					if(b==12)
					{
	 					resultado=10;
					}
			
					case 13:
					if(b==13)
					{
	 					resultado=10;
					}
	
				}
		
					soma = soma + resultado;
					printf("\nVocê tem %d pontos. Deseja mais cartas? SIM [1] / NÃO [2]: ", soma);
					scanf("%d", &MaisCartas);		
			 		
			 		system("pause");
 					system("@cls||clear");	//Apagar ecra
 					
 					if(soma > 21)
 					{
 						printf(" \nVoçe arrebentou! ");
						
						if(SomaCPU1<22)
						{
							printf("\nO CPU1 ficou com %d e ganhou!", SomaCPU1);
						}
				
						else
						{
							printf("\nO CPU1 também arrebentou com %d. Empataram! ", SomaCPU1);
						}
						
						MaisCartas=2; 	
					}
				
				}while(MaisCartas==1);
				
				if(soma>SomaCPU1 && SomaCPU1<22 && soma<22)
				{
					printf("\nVocê ficou com %d pontos e o CPU1 ficou com %d. GANHASTE!!!", soma, SomaCPU1);
				}
				
				else if(soma<SomaCPU1 && SomaCPU1<22 && soma<22)
				{
					printf("\nVocê ficou com %d pontos e o CPU1 ficou com %d. PERDESTE!!!", soma, SomaCPU1);
				}
				
				else if(soma<22)
				{
					printf("O CPU1 arrebentou com %d pontos, ganhaste com %d pontos!!!", SomaCPU1, soma);
				}
			}	
			
			else
			{
				if(soma>SomaCPU1 && soma<22)
				{
					printf("\nVocê ficou com %d pontos e o CPU1 ficou com %d. GANHASTE!!!", soma, SomaCPU1);
				}
				
				else
				{
					printf("\nVocê ficou com %d pontos e o CPU1 ficou com %d. PERDESTE!!!", soma, SomaCPU1);
				}
			}
			
			getchar();
		    }
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				
 			else if(num_CPUS=2)
 			{
 				
	        }
	
	    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	    
 	else if(num==2)
 	{	
 		printf("\n\n\tInstruções:");
 		printf("\n\n\t\tBlackjack ou Vinte-e-um é um jogo com cartas jogado em casino\n\n");
 		printf("\t\te que pode ser jogado com 1 a 8 baralhos de 52 cartas,\n\n");
		printf("\t\tem que o objetivo é ter mais pontos do que o adversário,\n\n");
 		printf("\t\tmas sem ultrapassar os 21 (caso em que se perde).\n\n");
 		printf("\t\tO dealer só pode pedir até um máximo de 5 cartas\n\n");
 		printf("\t\tou até chegar aos 17 pontos.\n\n\n");
 		
 		system("pause");
 		system("@cls||clear");	//Apagar ecra
 		getchar();
		 
		do
		{	
			do
 			{
 				cabecalho();

 				printf("\n\n\n Bem Vindo ao Black Jack!!!\n\n");
				printf("\t1- Jogar\n\n");
				printf("\t2- Regras\n\n");
				printf("\t3- Sair\n\n");
	
				printf(" Selecione o que pretede fazer: ");
				scanf("%d", &num);
	
				system("@cls||clear");	//Apagar ecra
	
			}while(num !=1 && num !=2 && num !=3);           
	
			if(num==1)
			{	
				cabecalho();
				printf("\n Numero de jogadores(Máx. 5 Jogadores): ");
				scanf("%d", &num_players);
				
				if(num=1)
				{
					srand(time(NULL));
					int a=rand() % (4-1+1) + 1;	//Aleatoriedade de numeros
					int b=rand() % (13-1+1) + 1;	//Aleatoriedade de numeros;	
		
					DesenhoDaCarta(a,b);
	
				}	
			}
 	
 			else if(num==2)
 			{	
 				cabecalho();
 				printf("\n\n\tInstruções:");
 				printf("\n\n\t\tBlackjack ou Vinte-e-um é um jogo com cartas jogado em casino\n\n");
 				printf("\t\te que pode ser jogado com 1 a 8 baralhos de 52 cartas,\n\n");
				printf("\t\tem que o objetivo é ter mais pontos do que o adversário,\n\n");
 				printf("\t\tmas sem ultrapassar os 21 (caso em que se perde).\n\n");
 				printf("\t\tO dealer só pode pedir até um máximo de 5 cartas\n\n");
 				printf("\t\tou até chegar aos 17 pontos.\n\n\n");
 		
 				system("pause");
 				system("@cls||clear");	//Apagar ecra
 				cabecalho();
 				getchar();
			}
	
			else if(num==3)
			{	
			
				cabecalho();
				printf("Obrigado por ter jogado!");	
			}
 	
 			else
 			{
			}
	
			getchar();
				
		}while(num==2); 		
 		
	}
	
	else if(num==3)
	{
		cabecalho();
		printf("Obrigado por ter jogado!");	
	}
 	
 	else
 	{
	}
	
	getchar();
}
}
}
