#include<stdio.h>


int main (){
	int i,j;
	char T[5][5]= {{'1','2','3','4','5'},
				{'7','a','c','8','d'},
				{'c','9','4','z','8'},
				{'5','6','p','n','3'},
				{'2','9','t','m','k'}};

	
	
	
	printf("le matrisse avant modification \n");

for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf(" %c ", T[i][j]);
        }
        printf("\n");
    }
    
    
    printf("les ligne paire de le matrisse \n");
    
     for (i= 0;i<5;i++) {
        if (i%2 == 0) {  
            for (j=0;j<5;j++) {
                printf(" %c ", T[i][j]);
            }
            printf("\n");
        }
    }
    printf("le ligne impaire de le matrisse\n ");
    
    for (i = 0;i<5;i++) {
        if (i%2!= 0) {  
            for (j= 0;j<5;j++) {
                printf(" %c ", T[i][j]);
            }
            printf("\n ");
        }
    }
    
     printf("la diagonale gauche de le matrisse :\n");
    for (i=0;i<5; i++) {
        printf(" %c ",T[i][i]);  
    }

    printf("\n");
    
     printf("la diagonale droit de le matrisse:\n");
    for (i= 0;i<5;i++) {
        printf("%c ", T[i][4-i]);  
    }

    printf("\n");



	return 0;
}
