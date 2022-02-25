#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int menu();
void execute_action(int action);
int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("welcome kelvin mutungwa!\n");
    execute_action(menu());
    return 0;
}


int menu ()
{
    int action;
    do {
        printf("select an action\n");
        printf("1. Add new patron\n");
        printf("2. View Patrons\n");
        printf("3.View Books\n");
        printf("4.Add New Book\n");
        printf("Your Action (1-4): \n");
        scanf("%d",&action);
        if (action < 1 || action > 4) {
                system("cls");
            printf("Invalid Action.Try again.\n");
        }
    }while(action < 1 || action >4);
}
void execute_action(int action) {
    printf("The action is %d",action);
}
