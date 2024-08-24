/*
	Name:
	Copyright: Todos os direitos reservados
	Author: lUÍS mARQUES
	Date:
	Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <mem.h>

sair()
{
	printf("\7");
	void clrscr();																				//limpar o ecran
	{
    	system("@cls||clear");
	}
}

creditos()
{
	printf("\7");
	printf("Jogo criado pelos alunos do 1 ano de Engenharia Informatica 2017/2018 da Universidade de Tras-os-Montes e Alto Douro\n");
	printf("No ambito da disciplina Laboratorio integrado 1\n");
	puts("Autores: Luís Marques");          // puts = printf("\n");

	
}

inserir_jogadores()
{

	int num_real, num_virtual, nbaralhos, aposta, contador;
	int d1, d2, d3, d4, d5;
	int  lol, num, carta, total, money;
	char  ouros, paus, copas, espadas;
	int cartas[8][4][13];                      // x, naipe, x
	
	printf ("Quantos jogadores participam no jogo?");
	scanf ("%d", &num_real);
	
	while (num_real > 5)
	{
		printf ("Quantos jogadores participam no jogo?");
		scanf ("%d", &num_real);
	}
	
	num_virtual= 5 - num_real;
	
	printf ("Neste jogo participam: %d jogadores virtuais, %d jogadores reais e o dealer\n", num_virtual, num_real );	
	printf ("Cada jogador comeca com %d euros\n\n", money );
			 
	srand (time(NULL));
	nbaralhos = (rand ()% 4) +1;
	printf ("Baralhos para este jogo: %d\n\n", nbaralhos);

	copas= 	 13*nbaralhos;
	paus= 	 13*nbaralhos;
	espadas= 13*nbaralhos;
	ouros=   13*nbaralhos;
	printf ("Copas: %d\nPaus: %d\nEspadas: %d\nOuros: %d\n\n", copas, paus, espadas, ouros);
	
	printf ("Vamos comecar a fazer as apostas!\n");	
	num = 1;
	total = 0;
	
	for( contador = 1; contador < num_real + 1; contador++)												//os jogadores vão fazer a sua aposta
	{										
    	printf ("jogador %d faca a sua aposta\n", contador );
		scanf ("%d", &aposta);
		total= total + aposta;
		num = num + 1;
    }
	
		void clrscr();																				//limpar o ecran
	{
    	system("@cls||clear");
	}
	
	
	num= 1;
	for(contador = 1; contador <= 5; contador++)									//o dealer vai distribuir as cartas
  	{
      	printf ("jogador %d\n", contador);
      	printf ("dinheiro : %d\n", (money-aposta));
		printf ("carta: %d\n\n\n", 	(rand() % 402 ) );
  	}

	
	printf ("Pote de apostas: %d\n", total );
        
}

cartas()
{
	
	
	printf("*************\n");
	printf("* %c       **\n");
	printf("*   *   *   *\n");
	printf("*     *     *\n");
	printf("*           *\n");
	printf("*     *     *\n");
	printf("*   *   *   *\n");
	printf("* *       %c*\n");
	printf("*************\n");
	
	printf("*************\n");
	printf("* %c       **\n");
	printf("*   *   *   *\n");
	printf("*     *     *\n");
	printf("*     %c    *\n");
	printf("*     *     *\n");
	printf("*   *   *   *\n");
	printf("* *       %c*\n");
	printf("*************\n");
	
	printf("*************\n");
	printf("* %c       **\n");
	printf("*   *   *   *\n");
	printf("*     *     *\n");
	printf("*     %c    *\n");
	printf("*     *     *\n");
	printf("*   *   *   *\n");
	printf("* *       %c*\n");
	printf("*************\n");
	
	printf("*************\n");
	printf("* %c       **\n");
	printf("*   *   *   *\n");
	printf("*     *     *\n");
	printf("*     %c    *\n");
	printf("*     *     *\n");
	printf("*   *   *   *\n");
	printf("* *       %c*\n");
	printf("*************\n");
	
}

main()
{
 printf("\t\t\t\t\t\t*******************\n");
 printf("\t\t\t\t\t\t*    Bem vindo    *\n");
 printf("\t\t\t\t\t\t*       ao        *\n");
 printf("\t\t\t\t\t\t*    Black jack   *\n");
 printf("\t\t\t\t\t\t*******************\n");	              

 char opcao;   // menu	
	
	do
	{
		printf("\tM E N U   P R I N C I P A L\n");
		printf("\n\n\t\tJogar [J]");
		printf("\n\n\t\tCreditos [C]");
		printf("\n\n\t\tSair [S]");
		printf("\n\n\n\t\t\tOpcao: ");
		fflush(stdin);
		scanf("%c", &opcao);
		fflush(stdin);
		
		switch(opcao)
		{
			case'j':
			case'J': puts("Opcao jogar"); inserir_jogadores(); break;
			case'c':
			case'C': puts("Opcao Creditos"); creditos(); break;
			case's':
			case'S': puts("Opcao Sair"); sair(); break;
			
			default: puts("Opcao invalida");	
		}
		getchar();
		
	}while(opcao != 's' || opcao != 'S');

}
	


