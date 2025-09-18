#include<stdio.h>
int main(){
char voyelles[6];
int i;
voyelles[0]='A';
voyelles[1]='E';
voyelles[2]='I';
voyelles[3]='O';
voyelles[4]='U';
voyelles[5]='y';
puts("Voici les voyelles de l'alphabet francais");
for(i=0;i<6;i++){
printf("%c ",voyelles[i]);
}
puts("");
return 0;
}
