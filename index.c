
#include <stdio.h>

#define rooms 10
#define beds 2
#define patients 20
#define vacant 0
#define occupied 1

void Add();
void Remove();
void Ward_status();
void Bed_status();
void Find();
//main function has the switch cases and the user interface.
int main(){
    int choice;
    printf("Hospital patient management system:-\n\n");
    for(int i=0;i<1;i++){
    printf("Enter operation number:-\n");
    printf("1_Add patient.\n");
    printf("2_Remove patient.\n");
    printf("3_View ward status.\n");
    printf("4_View bed status.\n");
    printf("5_find a patient.\n");
    printf("6_Exit.\n\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\tAdd patient operation selected:-\n\n");
        Add();
        break;
        case 2:printf("\toRemove patient operation system:-\n\n");
        Remove();
        break;
        case 3:printf("\tView ward status operation selected:-\n\n");
        Ward_status();
        break;
        case 4:printf("\tView bed operation selected:-\n\n");
        Bed_status();
        break;
        case 5:printf("\toFind a patient operation selected:-\n\n");
        Find();
        break;
        case 6:printf("\tThank you.\n\n");
        break;
        default:printf("You entered a wrong value please enter a number between 1-6\n");
        i=-1;
        continue;
    }
    if(choice!=6){
        printf("\nEnter 6 to exit and any other number to continue:");
        scanf("%d",&choice);
        if(choice==6)
        printf("Thank you operation completed.");
        else
        i=-1;
    }
    }
}
