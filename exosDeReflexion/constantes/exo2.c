#include<stdio.h>
#define MAJEUR(age) (age >= 18 ? "Majeur" : "Mineur")
#define MAJEUR2(age) if (age >= 18) { \
    printf("Majeur\n"); \
} else { \
    printf("Mineur\n"); \
}
int main() {
    int age;
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Vous êtes : %s\n", MAJEUR(age));
    return 0;
}