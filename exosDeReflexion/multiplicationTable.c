#include<stdio.h>
int main(){
    int nombre,i;
    do
    {
        printf("Entrer un nombre : ");
        scanf("%d",&nombre);
        if(nombre>9){
            printf("Plus petit\n");
        }else if(nombre<2){
            printf("Plus grand\n");
        }
        else{
            printf("Table %d\n",nombre);
            for ( i = 1; i <= 10; i++)
            {
                printf("%d * %d = %d\n",nombre,i,nombre*i);
            }
            
        }
        // if(nombre>=2 && nombre<=9){
        //     printf("Table %d\n",nombre);
        //     for ( i = 1; i <= 10; i++)
        //      {
        //         printf("%d * %d = %d\n",nombre,i,nombre*i);
        //     }
        // }
        // else if(nombre>9){
        //     printf("Plus petit\n");
        // }
        // else if(nombre<2){
        //     printf("Plus grand\n");
        // }
    } while (nombre<2 || nombre>9);
    
    return 0;
}