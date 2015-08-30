#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
	int l, c, cont, a = 10, pense;
	char matriz[3][3], O='O', X='X';
	
	// limpando a matriz
	for(l=0;l<3;l++)
		for(c=0;c<3;c++)
			matriz[l][c] = ' ';
	
     cont=0;	pense=0;
    while (cont < 9) {
    	
/* funcao limpar tela */		system("cls");

// montando o tabuleiro

 						printf ("\n\n\t\t\t   1   2   3 \n");
  						printf ("\t\t\t     |   |    \n");
					  		 for (l=0;l<2;l++)
    						 {
	   						printf ("\t\t\t%d",l+1);
      						printf("  %c | %c | %c  \n",matriz[l][0],matriz[l][1],matriz[l][2]);
        					printf ("\t\t\t ----+---+----\n");
    						 } 
    						 printf ("\t\t\t%d",l+1);
    						 printf("  %c | %c | %c  \n",matriz[l][0],matriz[l][1],matriz[l][2]);
    						 printf ("\t\t\t     |   |    \n");	
							 
// jogadas do O e X
     		if(cont%2==0) { 
     		printf("\nDiga as coordenadas para o jogador ' O '.\n\n");
     		printf("Linha ");
     		scanf("%d",&l);
     		printf("Coluna ");
     		scanf("%d",&c);
     		l--; c--;
     			if(matriz[l][c] == ' ' && l>=0 && l<3 && c>=0 && c<3) {
     			matriz[l][c] = O;
     			cont++; }
				 	else {
					 	printf("Jogada invalida"); 
     					cont-2;}	
							 } 
     				else{
     				    					
     				printf("\nComputador dando coordenadas para o jogador ' X '.\n\n");
     				srand(time(NULL));{
   					l=rand()%3;
				    c=rand()%3;}
			//sleep(1);
     					if(matriz[l][c] == ' ' && l>=0 && l<3 && c>=0 && c<3) {
     					matriz[l][c] = X;
     					cont++; }
     						else {
					 		printf("Computador pensando %i vezes",pense);
							pense++;
				//sleep(1);
							cont-2;}
								}

/* funcao limpar tela */	//	system("cls");	

// testando o vencedor
								if(cont > 4) {
									
// montando o tabuleiro
 						printf ("\n\n\t\t\t   1   2   3 \n");
  						printf ("\t\t\t     |   |    \n");
					  		 for (l=0;l<2;l++)
    						 {
	   						printf ("\t\t\t%d",l+1);
      						printf("  %c | %c | %c  \n",matriz[l][0],matriz[l][1],matriz[l][2]);
        					printf ("\t\t\t ----+---+----\n");
    						 } 
    						 printf ("\t\t\t%d",l+1);
    						 printf("  %c | %c | %c  \n",matriz[l][0],matriz[l][1],matriz[l][2]);
    						 printf ("\t\t\t     |   |    \n");	

									
// testando se vencedor ' O '								
								for(l=0; l<3; l++) {
									if(matriz[l][0] == O && matriz[l][1] == O && matriz[l][2] == O) {
										printf("\n\t\tO jogador ' O ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; } }

								for(c=0; c<3; c++) {
									if(matriz[0][c] == O && matriz[1][c] == O && matriz[2][c] == O) {
										printf("\n\t\tO jogador ' O ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; } }

									if(matriz[0][0] == O && matriz[1][1] == O && matriz[2][2] == O || 
									matriz[2][0] == O && matriz[1][1] == O && matriz[0][2] == O) {
										printf("\n\t\tO jogador ' O ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; }

//testando se vencedor ' X '
								for(l=0; l<3; l++) {
									if(matriz[l][0] == X && matriz[l][1] == X && matriz[l][2] == X) {
										printf("\n\t\tO jogador ' X ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; } }

								for(c=0; c<3; c++) {
									if(matriz[0][c] == X && matriz[1][c] == X && matriz[2][c] == X) {
										printf("\n\t\tO jogador ' X ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; } }

									if(matriz[0][0] == X && matriz[1][1] == X && matriz[2][2] == X || 
									matriz[2][0] == X && matriz[1][1] == X && matriz[0][2] == X) {
										printf("\n\t\tO jogador ' X ' eh o vencedor !\n\n\n");
										sleep(20);
										return 0; } }
						if(cont > 9) {
							printf("\n\t\tJogo empatado !\n\n\n");
							sleep(20);
							return 0; }
						}
					
    				/* funcao limpar tela */	//	system("cls");
     					
   getch();
   return 1;
}

