#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int baralho(int cartas[])
{
	
	int t;
	int i;
	int mesa[52];	
	for (i=0;i<52;i++)
		mesa[i] = (i/13+3)*100 + i%13 + 1;

	srand(time(NULL));
	for (i = 0; i < 52; i++)
	{
		do
		{
			t = rand() % 52;
		} while (mesa[t] == 0);
		cartas[i] = mesa[t];
		mesa[t] = 0;
	}
	
	return 0;
}

int converter(int a)
{
	if ((a%100==11) ||(a%100==12) ||(a%100==13)) return (a/100)*100+10;
	else return a;
}

void figura(int num)
{
	char fl;
	int po_num;
	
	fl = num / 100;
	po_num = num % 100;
	switch (po_num)
	{
		case 1: 
		{
			printf("*******\n");
			printf("*     *\n");
			printf("* %c   *\n", fl);
			printf("*   A *\n");
			printf("*     *\n");
			printf("*******\n");
			break;
		}
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		{
			printf("*******\n");
			printf("*     *\n");
			printf("* %c   *\n", fl);
			printf("*  %2d *\n", po_num);
			printf("*     *\n");
			printf("*******\n");
			break;
		}
		case 11:
		{
			printf("*******\n");
			printf("*     *\n");
			printf("* %c   *\n", fl);
			printf("*   J *\n");
			printf("*     *\n");
			printf("*******\n");
			break;
		}
		case 12:
		{
			printf("*******\n");
			printf("*     *\n");
			printf("* %c   *\n", fl);
			printf("*   Q *\n");
			printf("*     *\n");
			printf("*******\n");
			break;
		}
		case 13:
		{
			printf("*******\n");
			printf("*     *\n");
			printf("* %c   *\n", fl);
			printf("*   K *\n");
			printf("*     *\n");
			printf("*******\n");
			break;
		}

	}
}

int jogar(void)
{
	int i;
	int jsoma=0;
	int csoma=0;
	int jcartas[5]={0};
	int ccartas[5]={0};
	int cartas[52];
	char continuar;
	char d;
	
	printf("Bem-vindo ao BlackJack!\n"
	"Pode carregar Ctrl+c a qualquer momento para sair. \n"
	"Aproveita! Carrega ENTER para continuar......\n");
	do{
		continuar = getchar();
	} while (continuar != '\n');
	printf("\n");
	
	//baralhar cartas
	baralho(cartas);

	//distribuir cartas
	jcartas[0]=cartas[0];
	jcartas[1]=cartas[1];
	ccartas[0]=cartas[2];
	ccartas[1]=cartas[3];
	
	//as duas cartas para o jogacor
	printf("Uma das cartas do computador:\n");
	figura(ccartas[0]);
	printf("\n");
	printf("Cartas do jogador:\n");
	figura(jcartas[0]);
	figura(jcartas[1]);
	
	i=0;
	for (i=0; i<2; i++)
	{
		if (jcartas[i]%100 == 1)
		{
			printf("escolhe um valor para A carta %d, escreva 's' para 11 ou 'n' para 1 :\n", i+1);
			do{
				d = getchar();
			} while (d!='s' && d!='n');
			
			if (d == 's')
			{
				printf("Escolheu 11 para a carta A .\n");
				jsoma = jsoma + 11;
			}
			else if(d == 'n')
			{
				printf("Escolheu 1 para a carta A.\n");
				jsoma = jsoma +1;
			}
		}
		else if (converter(jcartas[i]) %100 ==10) jsoma = jsoma + 10;
		else jsoma = jsoma + jcartas[i]%100;
		
		if (jsoma > 21)
		{
			printf("Soma das cartas do jogador:%d\n\n",jsoma);
			printf("O Computador ganhou!\n");
			return 1;
		}
		else if (jsoma == 21)
		{
			printf("Soma das cartas do jogador:%d\n\n",jsoma);
			printf("Jogador ganhou!\n");
			return 0;
		}
	}
	printf("Soma das cartas do jogador :%d\n\n",jsoma);
	
	//o jogador recebe outras cartas
	i=0;
	for (i=0; i<3; i++)
	{
		char j = 'n';
		
		printf("Quer mais cartas? Carregue s ou n:\n");
		do{
			j = getchar();
		} while (j!='s' && j!='n');
		
		if (j=='s')
		{
			printf("Tem outra carta agora.\n");
			jcartas[i+2]=cartas[i+4];
			printf("a sua carta %d e:\n", i+3);
			figura(jcartas[i+2]);
			
			if (jcartas[i+2]%100 == 1)
			{
				printf("escolhe um valor para A carta %d, carregue 's' para 11 ou 'n' para 1:\n", i+3);
				do{
					d = getchar();
				} while (d!='s' && d!='n');	
				if (d == 's')
				{
					printf("Escolheu 11 para a carta A.\n");
					jsoma = jsoma + 11;
				}
				else if(d == 'n')
				{
					printf("Escolheu 1 para a carta A.\n");
					jsoma = jsoma +1;
				}
			}
			else if (converter(jcartas[i+2]) %100 ==10) jsoma = jsoma + 10;
			else jsoma = jsoma + jcartas[i+2]%100;
			
			if (jsoma > 21)
			{
				printf("Soma das cartas atualmente e:%d\n\n",jsoma);
				printf("Computador vence!\n");
				return 1;
			}
			else if (jsoma == 21)
			{
				printf("Soma das cartas do jogador e:%d\n\n",jsoma);
				printf("Jogador vence!\n");
				return 0;
			}		
			else printf("Soma das cartas atualmente :%d\n\n",jsoma);
		}
		else 
		{
			printf("Soma das cartas do jogador atualmente:%d\n\n",jsoma);
			break;
		}
	}
	if (i == 3)
	{
		printf("O jogador venceu! Porque as 5 cartas sao menores do que 21! Muito bem!\n");
		return 0;
	}
	
	//as duas cartas do computador
	//i=0;
	printf("Cartas do computador :\n");
	figura(ccartas[0]);
	figura(ccartas[1]);

	if (ccartas[0]%100 + ccartas[1]%100 == 2)
	{
		csoma=12; //2 ases ( tipos )
		printf("Soma das cartas do computador :%d\n\n", csoma);
	}
	else if ((converter(ccartas[0]))%100 + (converter(ccartas[1]))%100 ==1)
	{
		csoma=21;
		printf("Soma das cartas do computador:%d\n\n", csoma);
		printf("Computador vence!\n");
		return 1;
	}
	else if (ccartas[0]%100==1 || ccartas[1]%100==1)
	{
		csoma=(ccartas[0]+ccartas[1])%100+(rand()%2)*10;
		printf("Soma das cartas do computador:%d\n\n", csoma);
	}
	else
	{
		csoma = (converter(ccartas[0]))%100 + (converter(ccartas[1]))%100;
		printf("Soma das cartas do computador:%d\n\n", csoma);
	}
	
	//o computador tem outras cartas até csoma>16
	//i=0;
	for (i=0; i<3 && csoma<17; i++)
	{
		ccartas[i+2]=cartas[i+7];
		printf("Cartas do computador %d sao:\n", i+3);
		figura(ccartas[i+2]);
		
		if (ccartas[i+2]%100 == 1)
		{
			if (csoma+11 <= 21)
			{
				printf("Computador escolheu A como 11\n");
				csoma = csoma+11;
				printf("Soma das cartas do computador:%d\n\n", csoma);
			}
			else
			{
				printf("Computador escolheu A como 1\n");
				csoma = csoma+1;
				printf("Soma das cartas do computador:%d\n\n", csoma);
			}
		}
		else
		{
			csoma = csoma + converter(ccartas[i+2])%100;
			printf("Soma das cartas do computador:%d\n\n", csoma);
		}
	}
	if (i == 3)
	{
		printf("Computador vence! O jogador venceu! Porque as 5 cartas sao menores do que 21! Muito bem! \n");
		return 1;
	}
	
	//último passo
	if (csoma>21 || jsoma>csoma)
	{
		printf("Jogador vence!\n");
		return 0;
	}
	else if (jsoma == csoma || jsoma < csoma)
	{
		printf("Computador vence!\n");
		return 1;
	}

}

int main(void)
{
	char novamente;
  
	jogar();
  
	printf("\nQuer jogar de novo? Carregue 's' ou 'n':\n");
	do{
		novamente = getchar();
	} while (novamente!='s' && novamente!='n');
   
	if (novamente == 's')
	{
		printf("\nOK, Novo Jogo!\n\n");
		main();
	}
  
	return 0;
}



// Projeto realizado por Luís Marques
