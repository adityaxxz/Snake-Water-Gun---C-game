#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
int snakewatergun(char you , char comp){
    //* returns 1 if you wins , returns -1 if comp wins , returns 0 if draw.
    //* draw condition 
    if (you == comp){
        return 0;
    }
    //* non draw conditions 
    if (you == 's' && comp =='w'){
        return 1;
    }
    if (you == 'w' && comp =='s'){
        return -1;
    }
    if (you == 'w' && comp =='g'){
        return 1; 
    }
    if (you == 'g' && comp =='w'){
        return -1;
    }
    if (you == 'g' && comp =='s'){
        return 1;
    }
    if (you == 's' && comp =='g'){
        return -1;
    }
}
//! s>w , w>g , g>s
int main(){ 
    char you,comp;
    srand(time(0));
    int num = rand() % 3;    //* generates random no. 0,1,2 .
    printf("num = %d\n",num);
    if (num==0){
        comp = 's';
    }
    else if (num==1){
        comp = 'w';
    }
    else if (num==2){
        comp = 'g';
    }
    printf("Enter 's' for snake , 'w' for water , 'g' for gun : ");
    scanf("%c",&you);
    int result = snakewatergun(you,comp);
    printf("\nYou chose %c and computer chose %c\n",you,comp);
    if (result == 0){
        printf("*Game Draw*\n");
    }
    else if (result == 1){  
        printf("You won the game. Hurray!!\n");
    }
    else {
        printf("Computer won the game , ggwp\n");
    }
    return 0;
}