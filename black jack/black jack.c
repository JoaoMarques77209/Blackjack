#include<stdio.h>
#include<stdlib.h>
#include "lab.h"
#include<time.h>
#include <dos.h>

int carta(int r,int n){
	int j=0,x=1,m=0,i=0,l=0,t=0,k=0,p=0;
	for(t=0;t<n;t++){
		if(t%2==0){
			l++;
		}else{
			k++;
		}
	}
	if(n%2==0){
	i=l*9;
	p=0;
	}else{i=k*9;
	p=18;
	}
	

		//para fazer os azes
		switch(r){
		case 0:
		case 13:
		case 26:
		case 39:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("A");
		setxy(7+i,7+p);
		printf("A");
		
		if(i/9==0||i/9==1){
			m=11;
		}
		else
		{
			m=1;
		}
		break;

		case 1:
		case 14:
		case 27:
		case 40:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		//para fazer os duques
		DrawRect(i,p,8,8);
		setxy(4+i,3+p);
		printf("%c",3+j);
		setxy(4+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("2");
		setxy(7+i,7+p);
		printf("2");
		j++;
		m=2;
		break;
		
		case 2:
		case 15:
		case 28:
		case 41:
		j=0;
		
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		//fazer os trios
		DrawRect(i,p,8,8);
		setxy(4+i,2+p);
		printf("%c",3+j);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(4+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("3");
		setxy(7+i,7+p);
		printf("3");
		j++;
		m=3;
		break;
		
		case 3:
		case 16:
		case 29:
		case 42:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		//para fazer quadras
		DrawRect(i,p,8,8);
		setxy(3+i,3+p);
		printf("%c",3+j);
		setxy(3+i,6+p);
		printf("%c",3+j);
		setxy(5+i,3+p);
		printf("%c",3+j);
		setxy(5+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("4");
		setxy(7+i,7);
		printf("4");
		j++;
		m=4;
		break;
		case 4:
		case 17:
		case 30:
		case 43:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		// para fazer as quinas
		DrawRect(i,p,8,8);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,6+p);
		printf("%c",3+j);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("5");
		setxy(7+i,7+p);
		printf("5");
		j++;
		m=5;
		break;
		
		case 5:
		case 18:
		case 31:
		case 44:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		DrawRect(i,p,8,8);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,6+p);
		printf("%c",3+j);
		setxy(3+i,4+p);
		printf("%c",3+j);
		setxy(5+i,4+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("6");
		setxy(7+i,7+p);
		printf("6");
		j++;
		m=6;
		break;
		
		case 6:
		case 19:
		case 32:
		case 45:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		DrawRect(i,p,8,8);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,6+p);
		printf("%c",3+j);
		setxy(4+i,3+p);
		printf("%c",3+j);
		setxy(3+i,4+p);
		printf("%c",3+j);
		setxy(5+i,4+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("7");
		setxy(7+i,7+p);
		printf("7");
		j++;
		m=7;
		break;
		
		case 7:
		case 20:
		case 33:
		case 46:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		DrawRect(i,p,8,8);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,6+p);
		printf("%c",3+j);
		setxy(4+i,3+p);
		printf("%c",3+j);
		setxy(4+i,5+p);
		printf("%c",3+j);
		setxy(3+i,4+p);
		printf("%c",3+j);
		setxy(5+i,4+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,6+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("8");
		setxy(7+i,7+p);
		printf("8");
		j++;
		m=8;
		break;
		
		case 8:
		case 21:
		case 34:
		case 47:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,7+p);
		printf("%c",3+j);
		setxy(3+i,5+p);
		printf("%c",3+j);
		setxy(3+i,4+p);
		printf("%c",3+j);
		setxy(5+i,4+p);
		printf("%c",3+j);
		setxy(5+i,5+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,7+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("9");
		setxy(7+i,7+p);
		printf("9");
		j++;
		m=9;
		break;
	
		case 9:
		case 22:
		case 35:
		case 48:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(4+i,6+p);
		printf("%c",3+j);
		setxy(3+i,2+p);
		printf("%c",3+j);
		setxy(3+i,7+p);
		printf("%c",3+j);
		setxy(3+i,5+p);
		printf("%c",3+j);
		setxy(3+i,4+p);
		printf("%c",3+j);
		setxy(5+i,4+p);
		printf("%c",3+j);
		setxy(5+i,5+p);
		printf("%c",3+j);
		setxy(5+i,2+p);
		printf("%c",3+j);
		setxy(5+i,7+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("10");
		setxy(6+i,7+p);
		printf("10");
		j++;
		m=10;
		break;
	
		case 10:
		case 23:
		case 36:
		case 49:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("J");
		setxy(7+i,7+p);
		printf("J");
		m=10;
		break;
		
		case 11:
		case 24:
		case 37:
		case 50:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("Q");
		setxy(7+i,7+p);
		printf("Q");
		m=10;
		break;
		
		case 12:
		case 25:
		case 38:
		case 51:
		j=0;
		do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
		DrawRect(i,p,8,8);
		setxy(4+i,4+p);
		printf("%c",3+j);
		setxy(1+i,1+p);
		printf("R");
		setxy(7+i,7+p);
		printf("R");
		m=10;
		break;		
		
}
return m;
}

int cartacasa(int r,int i){
	int j=0,x=1,m=0;
	j=1;
	i=i*9;
	DrawRect(i,18,8,8);
	do{
			x+=13;
			if(r>x){
				j++;
			}
		}while(r>x);
	m=r/j;	
	return m;
}

void main(void){
	int r[10]={0},sair=0,i=0,aux=0,j=0,jogador=0,casa=0,menu=0,regras=1,continuar=9,cartas_jogador[10]={0},t=0,cartas_casa[10]={0},banca=2000,aposta=0;
	srand(time(NULL));	
	do{
	printf("\n+______________________________BLACKJACK______________________________+\n\n");
	printf("\n             1-Começar o jogo                                           Sua Banca:%d\n             2-Regras\n             3-Sair do jogo",banca);
	do{	
	scanf("%d",&sair);
	}while(sair<1||sair>3);
	system("cls");
	switch(sair){
	case 1:	
		printf("Quanto quer apostar?(Aposta minima=50)");
		do{
			scanf(" %d",&aposta);
			if(aposta>banca || aposta<50){
				printf("Aposta invalida(Ou nao tem fundos suficientes ou nao tem uma aposta superior a 50)");
			}
		}while(aposta>banca || aposta<50);
		banca=banca-aposta;
	system("cls");
	casa=0;
	jogador=0;
	for(i=0;i<4;i++){
		r[i] = rand()%(52);
		if(i%2==0){
			
			if(i> 0){
				for(j=0;j<2;j++){
					if(r[j]==r[i] && j != i){
						r[i] = rand()%(52);
					}		
				}
			}
		jogador=carta(r[i],i)+jogador;
		}
		else{	
			if(i> 0){
				for(j=0;j<4;j++){
					if(r[j]==r[i] && j != i){
						r[i] = rand()%(52);
					}		
				}
			casa=carta(r[i],i)+casa;
			}	
		}
	}
	
	
	for(t=0;t<i;t++){
		if(t%2==0){
			cartas_jogador[t]=r[t];			
		}else{
			cartas_casa[t]=r[t];
		}
	}
		
		if(casa>21){
			sleep(6); 
			system("cls");
			if(jogador==21){
				banca=banca+aposta*3;
			}else{
				banca=banca+aposta*2;
			}
			printf("\n\n\n\n\n\n\n 			Voce ganhou!! agora a sua banca e de:%d",banca);
			sleep(4);
			printf("\nCarregue em qualquer tecla para continuar");
			scanf("%d",&menu);
			continuar=0;
		}
		if(jogador>21||casa==21){
			sleep(3); 
			system("cls");
			printf("\n\n\n\n\n\n                                  Voce perdeu!!");
			sleep(3); 
			printf("\n\n        Carregue em qualquer tecla para continuar");
			scanf("%d",&menu);
			continuar=0;
		}
	
	setxy(1,10);
	printf("O seu conjunto tem atualmente cartas com o valor de %d pontos e a sua aposta e de:",jogador,aposta);

	if(continuar!=0){
		setxy(1,12);
		printf("Pretende continuar a jogar?\n1-Sim\n2-Nao\n3-Desisto");
		scanf("%d",&continuar);
	}
	
	
	switch (continuar){
		case 1:			
		i=4;
		do{
			do{
				system("cls");			
				printf("Quanto quer apostar?");	
				scanf(" %d",&aux);
				if(banca>aux){
					aposta=aposta+aux;
					banca=banca-aux;
				}
			}while(aux>banca);					
			
			system("cls");			
			for(j=0;j<i;j++){
			carta(r[j],j);
			}
			if(i%2==0){
				r[i] = rand()%(52);
				if(i> 0){
				for(j=0;j<10;j++){
					if(r[j]==r[i] && j != i){
						r[i] = rand()%(52);
					}		
				}
			}
			jogador=carta(r[i],i)+jogador;
			
			if(casa<17){
				r[i+1] = rand()%(52);
				if(i> 0){
					for(j=0;j<10;j++){
						if(r[j]==r[i+1] && j != i+1){
							r[i+1] = rand()%(52);
						}		
					}
			}
			casa=carta(r[i+1],i+1)+casa;
				}				
			}	
			if(casa>21||jogador>21){
			if(casa>21){
				sleep(3); 
				system("cls");
				if(jogador==21){
					banca=banca+aposta*3;
				}else{
					banca=banca+aposta*2;
				}
				printf("\n\n\n\n\n\n\n\n     Voce ganhou!! A sua banca agora e de:%d",banca);
				sleep(3);
				printf("\n\n\n\n\n  Carregue em qualquer tecla para continuar");
				scanf("%d",&menu);
			}
			if(jogador>21){
				sleep(3); 
				system("cls");
				
				printf("\n\n\n\n\n\n            Voce perdeu!! Agora a sua banca e de:%d",banca);
				sleep(3); 
				printf("\n\n        Carregue em qualquer tecla para continuar");
				scanf("%d",&menu);}
			}else{
			setxy(1,10);
			printf("O seu conjunto tem atualmente cartas com o valor de %d pontos e a sua aposta e de %d",jogador,aposta);
			setxy(1,12);
			printf("Pretende continuar?(carregue 0 se quiser acabar a aposta)\n1-Sim \n0-Parar de apostar");
			scanf("%d",&continuar);}	
		i=i+2;
		}while(continuar!=0 && casa<21 && jogador<21);
		
				if((casa<22 )&& (jogador<22)){
					if(casa<jogador){
						sleep(3); 
						system("cls");
						if(jogador==21){
							banca=banca+aposta*3;
						}else{
							banca=banca+aposta*2;
						}
						printf("Voce ganhou!! A sua banca e de:%d",banca);
						sleep(3);
						printf("Carregue em qualquer tecla para continuar");
						scanf("%d",&menu); 				
					}else{
						sleep(3); 
						system("cls");
						printf("\n\n\n\n\n\n                      Voce perdeu!! A sua banca e de:%d",banca);
						sleep(3); 
						printf("\n\n        Carregue em qualquer tecla para continuar");
						scanf("%d",&menu);
						}
				}	
					
		break;
		case 2: 
		
			for(i=4;i<10;i++){
				if(i%2==1){
					r[i]=rand()%(52);
					if(casa<=17){	
						if(i> 0){
						for(j=0;j<i;j++){
							if(r[j]==r[i] && j != i){
								r[i] = rand()%(52);
							}		
						}
					}
					casa=carta(r[i],i)+casa;
					}		
				}				
				}
				if((casa<22 )&& (jogador<22)){
					if(casa<jogador){
						sleep(3); 
						system("cls");
						if(jogador==21){
							banca=banca+aposta*3;
						}else{
							banca=banca+aposta*2;
						}
						printf("\n\n\n\n\n\n\n      Voce ganhou!! A sua banca e de:%d",banca);
						sleep(3);
						printf("	\nCarregue em qualquer tecla para continuar");
						scanf("%d",&menu); 				
					}else{
						sleep(3); 
						system("cls");
						printf("\n\n\n\n\n\n                        Voce perdeu!! A sua banca e de:%d",banca);
						sleep(3); 
						printf("\n\n        Carregue em qualquer tecla para continuar");
						scanf("%d",&menu);
						}
				}	
					if(casa>21){
						sleep(3); 
						system("cls");
						if(jogador==21){
							banca=banca+aposta*3;
						}else{
							banca=banca+aposta*2;
						}
						printf("\n\n\n\n\n\n\n        Voce ganhou!! A sua banca e de:%d",banca);
						sleep(3);
						printf("Carregue em qualquer tecla para continuar");
						scanf("%d",&menu);
					}
					if(jogador>21){
						sleep(3); 
						system("cls");
						printf("\n\n\n\n\n\n                    Voce perdeu!! A sua banca:%d ",banca);
						sleep(3); 
						printf("\n\n        Carregue em qualquer tecla para continuar");
						scanf("%d",&menu);
					}		
		break;
		case 3:
			sleep(3); 
			system("cls");
			banca=aposta/2+banca;
			printf("Voce desistiu por isso perdeu metade da sua aposta tendo em banca %d",banca);
			sleep(3); 
			printf("\n\n        Carregue em qualquer tecla para continuar");
			scanf("%d",&menu);
			break;
	}
	system("cls");
	break;

	case 2:
			printf("+---------------------------------Regras---------------------------------+");
			printf("\n1- O BlackJack e um jogo a dinheiro por isso deve ter em mente os riscos\n2-Ganha quem tiver o maior numero de pontos, e arrebenta se ultrapassar os 21 pontos\n\n3-Cada carta de numero vale o seu numero expeto o as na presenca de uma figura\n\n4-Cada figura vale 10 pontos\n\n5-Voce aposta no inicio da primeira ronda tem a oportunidade de sair e so perder metade da aposta porem sempre que apostar outra vez na sua ronda tem de ser o dobro da aposta anterior\n\n6-Se possir mais pontos que a casa recebe o dobro da aposta porem se tiver 21 pontos recebe num ratio 3:2 \n\n7-A casa ganha sempre que tem 21 pontos");
			printf("\n\nPara sair carregue 0: ");
		do{
			scanf("%d",&regras);
		}while(regras!=0);
		system("cls");	
	break;
	}
	
	}while(sair!=3);	
}
