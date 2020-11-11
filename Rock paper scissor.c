#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
int main(){
	printf("Whelcome in Rock paper scissor\n");
	printf("0=Rock, 1=paper, 2=scissor \n");	//instructions
	int pc=0;	//variables
	int user=0;
	int notError=0;
	srand(time(NULL)); //set seed
	pc=(rand()%3);	//decide the pc move
	do{	//user friendli request of user move
		printf("Enter your move\n");
		fflush(stdin);
		notError=scanf("%d", &user);
		if((user<0)||(user>2)){
			notError=0;
		}
		if(notError==0){
			printf("Unrecognized value, try again\n");
		}
	}while(notError!=1);
	printf("My move: ");	//tell the pc move
	if(pc==0){
		printf("rock\n");
	}else if(pc==1){
		printf("paper\n");
	}else{
		printf("scissor\n");
	}
	if((pc==2&&user==0)||(pc==0&&user==1)||(pc==1&&user==2)){ //check the winner
		printf("I won!");
	}else if(pc==user){
		printf("Draw");
	}else{
		printf("You won!");
	}
	return 0;
}
