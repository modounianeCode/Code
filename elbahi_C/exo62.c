#include<stdio.h>
int main(){
    int taille_tot=100;
    int z,i;
printf("Entrer la taille du tableau : ");
scanf("%d",&z);
    int T[z],position,element;
puts("Remplissage du tableau");
for(i=0;i<z;i++){
printf("T[%d]:",i);
scanf("%d",&T[i]);
}
    printf("Entrer la position d'insertion (0 a %d): ",z-1);
    scanf("%d",&position);
    if(position<0 || position>z){
        printf("Position invalide!\n");
        return 1;
    }
    printf("Entrer l'element a inserer: ");
    scanf("%d",&element);
    puts("Avant insertion:");
    for( i=0;i<z;i++){
        printf("%d ",T[i]);
    }
    for( i=z;i>position;i--){
        T[i]=T[i-1];
    }
    T[position]=element;
    z++;
    puts("\nApres insertion:");
    for( i=0;i<z;i++){
        printf("%d ",T[i]);
    }
    puts("");
    return 0;
}
    /*
    //autre methode
    #include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
  
    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert val at the specified position
    arr[pos] = val;

    // Increase the current size
    (*n)++;
}

int main() {
    int arr[7] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int val = 25;

    // Insert the value at the specified position
    insert(arr, &n, pos, val);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
*/


