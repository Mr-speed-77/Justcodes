#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// initialize functions
void game();
void choose();

int main(){
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf(" => Hey %s ! \n", name);
    printf("\n\t\t----------------- Welcome to Rock Paper Scissors Game -----------------\n\n\n");
    choose(name);
}

// Choose function

void choose(char *name){
    
    char choice[10];
    printf("\n\nDo you want to play [y/n]: ");
    scanf("%s", choice);
    
    if(strcmp(choice,"y") == 0 || strcmp(choice,"Y") == 0){
        game(name);
    }
    else if(strcmp(choice,"n") == 0 || strcmp(choice,"N") ==0){
        printf("Thanks for Entering ...");
        exit(0);
    }else{
        printf("Invalid option !");
        choose(name);
    }
}

// Game function

void game(char *name){
    
    while(1){
        
    char user_choice[2], computer_choice[2];
    printf("\n\t\t\tStone[z] Paper[p] Scissors[s]\n\n");
    printf("Enter a choice: ");
    scanf("%s", user_choice);
    int randam_num = rand()%10;
    
    if(randam_num < 3){
        computer_choice[0] = 'z';
    }
    else if(randam_num > 3 && randam_num < 7 ){
        computer_choice[0] = 'p';
    }
    else{
        computer_choice[0] = 's';
    }
    
    // Check that choices
    
    if (user_choice[0] == 'z' && computer_choice[0] == 's') {
            printf("%s wins the Match", name);
            choose(name);
        } else if (user_choice[0] == 'z' && computer_choice[0] == 'p') {
            printf("Computer wins the Match");
            choose(name);
        } else if (user_choice[0] == 'p' && computer_choice[0] == 's') {
            printf("Computer wins the Match");
            choose(name);
        } else if (user_choice[0] == 'p' && computer_choice[0] == 'z') {
            printf("%s wins the Match", name);
            choose(name);
        } else if (user_choice[0] == 's' && computer_choice[0] == 'z') {
            printf("Computer wins the Match");
            choose(name);
        } else if (user_choice[0] == 's' && computer_choice[0] == 'p') {
            printf("%s wins the Match", name);
            choose(name);
        }else if (user_choice[0] == computer_choice[0]){
            printf("Draw the Match");
            choose(name);
        }else{
            printf("Invalid choice !");
            choose(name);
        }
    
    }
    
}