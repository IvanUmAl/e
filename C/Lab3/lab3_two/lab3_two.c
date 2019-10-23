#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[50];
    int point;
    int games;
    int money;
} team;
void readTeam(team * t){
        printf("Введите название команды: ");
        scanf("%s", &t->name);
        printf("Введите количество очков: ");
        scanf("%d", &t->point);
        printf("Введите количество игр: ");
        scanf("%d", &t->games);
        printf("Введите призовой фонд: ");
        scanf("%d", &t->money);
}
static int cmp(const void *p1, const void *p2){
    team * t1 = *(team**)p1;
    team * t2 = *(team**)p2;
    return t1->money - t2->money;
};

void printTeams(team **t, int count){
    printf("Отсортированный по призовому фонду список команд: \n");
    printf("Название команды \t");
    printf("Количество очков \t");
    printf("Количество игр \t");
    printf("Призовой фонд \n");
    for (int i = 0; i < count ; i++){
        printf("%d) ", i+1);
        printf("%s \t\t\t",t[i]->name);
        printf("%d \t\t\t",t[i]->point);
        printf("%d \t\t",t[i]->games);
        printf("%d",t[i]->money);
        printf("\n");
    } 
}
void free_teams(team **teams, int count) {
	for (int i = 0; i < count; i++) {
		free(teams[i]);
	}
	free(teams);
}
int main(int argc, char **argv){
    int count = 0;
    printf("Введите кол-во команд:");
    scanf("%d", &count);
    team **teams = (team**)malloc(sizeof(team*)*count);;
    for (int i = 0; i < count ; i++){
        teams[i]=(team*)malloc(sizeof(team));
        readTeam(teams[i]);  
    } 
    qsort(teams, count, sizeof(team*), cmp);
    printTeams(teams, count);
    free_teams(teams, count);
    return 0;
}
