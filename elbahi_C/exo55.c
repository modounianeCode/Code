#include<stdio.h>
int main(){
  int T[5],n,i;
  //int length=sizeof(T)/sizeof(T[0]);
  puts("Remplissage du tableau");
  for(i=0;i<5;i++){
  printf("Entrer T[%d]:",i+1);
  scanf("%d",&T[i]);
  }
  printf("Entrer un entier: ");
  scanf("%d",&n);
  for(i=0;i<5;i++){
  if(n!=T[i]){
    continue;
  printf("%d ne se trouve pas dans le tableau\n",n);
  }
  else{
    printf("%d se trouve dans le tableau\n",n);
    break;
    }
  }
  puts("Fin du programme");
    return 0;
}
