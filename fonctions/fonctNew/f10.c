#include<stdio.h>
#include<stdlib.h>
void menue(int n);
int main(){
    int menu;
    puts("====== MENU ======");
    puts(" 1 - Ceebu jen ");
    puts(" 2 - Maafe ");
    puts(" 3 - Maxalu yappu ");
    puts(" 4 - Domadaa ");
    puts(" 5 - Yaasa ");
    puts(" 6 - Suluxu ");
    menue(menu);
    return 0;
}
void menue(int n){
    printf("Entrer le numero du menu : ");
scanf("%d",&n);
   switch (n)
   {
case 1:
    puts("Vous avez choisi : Ceebu jen ");
    break;
case 2:
    puts("Vous avez choisi : Maafe ");
    break;
case 3:
    puts("Vous avez choisi : Maxalu yappu");
    break;
case 4:
    puts("Vous avez choisi : Domadaa ");
    break;
case 5:
    puts("Vous avez choisi : Yaasa ");
    break;
case 6:
    puts("Vous avez choisi : Suluxu ");
    break;
   default:
   puts("Le menu choisi n'existe pas dans notre Store, Desolee");
    break;
   }
}