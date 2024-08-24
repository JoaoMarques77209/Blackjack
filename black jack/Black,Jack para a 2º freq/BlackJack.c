#include <stdio.h>
#include <stdlib.h>
#include "lab.h"
#include <time.h>


/*int repetido(int a,int b);

	for(i=0;i<=13){
		if(V[i])
	}
	*/
	//	char *V[13] = {"2","3","4","5","6","7","8","9","10","A","R","V","D"};
	
	
int repetido(int a, int b){
		int i,j;
	char *V[13] = {"2","3","4","5","6","7","8","9","10","A","R","V","D"};
	char N[4] = {'\3','\4','\5','\6'};
	char VR[13];
	char NR[4];
	
		
		for(i=0;i<13;i++){
			for(j=0;j<4;j++){
			
				if(VR[i]==V[a] && NR[j]==N[b]){
				a=rand()%13;
				b=rand()%4;		
			}
			else{
				VR[i+1]==V[a];
				NR[j+1]==N[a];
			}
		}

		}
		
}
int pontuacao(int a1,int total){
	switch(a1){
		case 0: total=total+2;
	break;
		case 1: total=total+3;
	break;	
		case 2: total=total+4;
	break;
		case 3: total=total+5;
	break;
		case 4: total=total+6;
	break;
		case 5: total=total+7;
	break;
		case 6: total=total+8;
	break;
		case 7: total=total+9;
	break;
		case 8: total=total+10;
	break;	
		case 9: if(total+11>21){
				total=total+11;
			}
				else{
				total=total+1;
				}
	break;
		case 10: total=total+10;
	break;
		case 11: total=total+10;
	break;
		case 12: total=total+10;
	break;
}
}

int pontuacaocasa(int a1,int total){
	switch(a1){
		case 0: total=total+2;
	break;
		case 1: total=total+3;
	break;	
		case 2: total=total+4;
	break;
		case 3: total=total+5;
	break;
		case 4: total=total+6;
	break;
		case 5: total=total+7;
	break;
		case 6: total=total+8;
	break;
		case 7: total=total+9;
	break;
		case 8: total=total+10;
	break;	
		case 9: if(total+11<21){
				total=total+11;
			}
				else{
				total=total+1;
				}
	break;
		case 10: total=total+10;
	break;
		case 11: total=total+10;
	break;
		case 12: total=total+10;
	break;
}
	return total;
}	


int sorteiov(int respostav){
	respostav = rand()%13;
	
	return respostav;
}

int sorteion(int respostan){
	respostan = rand()%4;
	
	return respostan;
}


void desenhacarta(int x, int y,char* valor, char naipe){
	
	DrawRect(x,y,6,6);
	
setxy(x,y);
	
setxy(x+1,y+1);
printf("%s",valor);

setxy(x+4,y+5);
printf("%s",valor);

setxy(x+3,y+3);
printf("%c",naipe);
}

void desenhacartacasa(int x, int y,char* valor, char naipe){
	
	DrawRect(x,y,6,6);
	

}


void resultado1(int total,int totalcasa){
		if(total > 21){
									
									
									printf("Perdeu o jogo!");
								}
								if(total > totalcasa && total <=21 ){
								
									printf("Ganhou o jogo!");
								}
								if(total == totalcasa && total <=21 && totalcasa <=21){
									
									printf("Perdeu o jogo!");
								}
								if(total < totalcasa && total <=21 && totalcasa <=21){
									
									printf("Perdeu o jogo!");
								}
	
}





void main(void){
	int inicial=0, njogadores,aposta,a,b,vontade1,primeirajogada,segundajogada,totaljogada,i=2,total,vontade2,tj,tc,gv,gn,t;
	int a1,a2,a3,a4,aa1,aa2,aa3,aa4,b1,b2,b3,b4,bb1,bb2,bb3,bb4;
	int totall,totalcasa;
	char *V[13] = {"2","3","4","5","6","7","8","9","10","A","R","V","D"};
	char N[4] = {'\3','\4','\5','\6'};
	
		srand(time(NULL));
	
	
		do{

		printf("Pressione 1 para comecar o jogo ou 0 para sair!\n");
		scanf(" %d",&inicial);

		}while(inicial != 0 && inicial!= 1);

		
		
		if(inicial == 0){
			printf("Saiu do jogo!");
			exit(0);
	}
		if(inicial == 1){
		}
			printf("Quantos jogadores tera a partida? (Selecione entre 1-4)\n");
			scanf(" %d",&njogadores);
			switch(njogadores){
				case 1:
					printf("Ira jogar contra a casa!\n");
				
					printf("Qual sera o valor da sua aposta inicial?\n");
					scanf(" %d",&aposta);
					while(aposta <1){
					printf("Qual sera o valor da sua aposta inicial?\n");
					scanf(" %d",&aposta);
				}
					
					system("cls");
					
					
					desenhacarta(0,0,V[	sorteiov(a1)],N[sorteion(a1)]); //jogador
						
						pontuacao(a1,totall);
					
			
					desenhacarta(0,9,V[sorteiov(a1)],N[sorteion(a1)]); //casa
						pontuacao(a1,totalcasa);
					

					desenhacarta(7,0,V[sorteiov(a1)],N[sorteion(a1)]); //jogador 2
						pontuacao(a1,totall);
					
					desenhacarta(7,9,V[sorteiov(a1)],N[sorteion(a1)]);//casa2
						pontuacaocasa(a1,totalcasa);
					
					
						t=1;	
			do{
					t=t+1;
					setxy(0,20);
					printf("\n\n\n\n\n\n\n\n\n\n\n Deseja pedir outra carta(1) ou parar por aqui?(0)");
					scanf(" %d",&vontade2);	
					
		
							pontuacao(a1,totall);
					
						
				
		
					
				}while(vontade2 ==1 && totall<21);
				
			do{
					
					desenhacarta(t*7,9,V[sorteiov(a1)],N[sorteion(a1)]); //carta da casa
					pontuacao(a1,totalcasa);
					t=t+1;
				}while(totalcasa<17);
				
				
				//contar os pontos, para verificar se ganhou ou se perdeu
				setxy(0,22);
				resultado1(total,totalcasa);
			
			
			
				
		}}

