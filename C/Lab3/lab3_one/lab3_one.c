#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[50];
    int point;
    int games;
    int money;
} team;

void readTeams(team * t, int count){
        for (int i = 0; i < count ; i++){
        printf("Введите название команды: ");
        scanf("%s", &t[i].name);
        printf("Введите количество очков: ");
        scanf("%d", &t[i].point);
        printf("Введите количество игр: ");
        scanf("%d", &t[i].games);
        printf("Введите призовой фонд: ");
        scanf("%d", &t[i].money);
}
}

void printTeams(team *st, int count){
    printf("Список команд: \n");
    printf("Название команды \t");
    printf("Количество очков \t");
    printf("Количество игр \t");
    printf("Призовой фонд \n");
    for (int i = 0; i < count ; i++){
        printf("%d) ", i+1);
        printf("%s \t\t\t",st[i].name);
        printf("%d \t\t\t",st[i].point);
        printf("%d \t\t",st[i].games);
        printf("%d",st[i].money);
        printf("\n");
    } 
}
 
int main(int argc, char **argv){
    int count = 0;
    printf("Введите кол-во ...:");
    scanf("%d", &count);
    team teams[10];
    readTeams(teams, count);
    printTeams(teams, count);
    return 0;
}
