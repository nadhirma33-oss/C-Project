#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
void score(int *choice,bool *check);

int main()
{
    bool has_played=false;
    int choice;
    do{

    printf("\n************MENU********\n");
    printf("1- Description reles de jeu\n");
    printf("2-Calcul de score\n");
    printf("3-Jouez(Lets Go\n");
    printf("4-Historique de jeu\n");
    printf("5-Quitter le jeu\n");


    printf("\n please type a number to select a certain choice:");
    scanf("%d",&choice);


    switch (choice){
    case 1:printf("=====================================================\n               REGLES DU JEU                         \n=====================================================\n\n LE CONCEPT:\n    Devinez le mot cache en 10 essais maximum.\n\n COMMENT JOUER:\n    1. Choisissez une lettre (A-Z).\n    2. Tapez un mot de la bonne taille.\n    3. Observez les symboles d'indices:\n       - Lettre exacte  : Lettre visible\n       - Bonne lettre   : '-'\n       - Mauvaise lettre: '*'\n\n CALCUL DU SCORE:\n    - 1er essai : 100%%\n    - 2eme essai : 90%%\n    - 3eme essai : 80%% ...\n\n=====================================================\n");;break;
    case 2:score(&choice,&has_played); if(choice==3){goto case_3;}          break;
    case_3:case 3:printf("this option is not available right now so");break;
    case 4:printf("the rules are obvious obviously");break;
    case 5:printf("the rules are obvious obviously");break;
    default:printf("invalid number\n please choose an existing choice\n");break;
    }
    }while (choice!=5);


    return 0;
}

void score(int *choice,bool *check){
    char validation;
    if( *check==false){
            printf("you havent played your first game( y/n):");
            scanf(" %c",&validation);
            if (toupper(validation)=='Y'){
                *check=true;
                *choice=3;}
            else if (toupper(validation)=='N'){
                *choice=5;}
                }
    else{
        printf("your score is xx");
    }
            }




