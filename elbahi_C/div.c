#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k;
    for ( i = 0; i <=2; i++)
    {
        for ( j = 0; j<=1; j++)
        {
            for ( k = 0; k <=1; k++)
            {
                printf("%f\n",pow(2,i)*pow(3,j)*pow(7,k));
            }
            
        }
        
    }
   return 0; 
}