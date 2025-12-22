#include <stdio.h>
int main (void){
	int score;
	while(1){
		scanf("%d",&score);
		if (score == -1){
			break;
		}
		if (score > 100){
			printf("Error\n");
		}
		else if (score >= 80 ){
			printf("%d(A)\n",score);
		}
		else if (score >= 70){
			printf("%d(B)\n",score);
		}
		else if (score >= 60){
			printf("%d(C)\n",score);
		}
		else if (score >= 50){
			printf("%d(D)\n",score);
		}
		else if (score >= 0){
			printf("%d(F)\n",score);
		}
		else{
			printf("Error\n");
		}
	}
	return 0;
} 
