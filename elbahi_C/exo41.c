#include<stdio.h>
int main(){
int nbr,inverse=0,i;
printf("Entrer un nombre : ");
scanf("%d",&nbr);
i=nbr;
while(i%10!=0){
inverse = (inverse * 10 )+ (i % 10);
printf("i = %d, inverse = %d\n", i, inverse);
i = i / 10;
}
printf("L'inverse de %d est : %d", nbr, inverse);
printf("\n");
if (inverse == nbr) {
    printf("Le nombre %d est  palindrome.\n", nbr);
} else {
    printf("Le nombre %d n'est pas un palindrome.\n", nbr);
}
return 0;
}
