#include <stdio.h>
#include <stdlib.h>
/*8.  	De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero
*/
int main()
{
    int n1[10];
    int i;
    int cont=0;
    int con=0;
    for(i=0;i<10;i++){
        printf("Ingrese un numero \n");
        scanf("%d",&n1[i]);


    }
     for(i=0;i<10;i++){
            if(n1[i]<0){
                    cont ++;
                }else{
                 con++;
                }
         }
    printf("los numeros menores a cero son :%d y los mayores a cero son : %d",cont,con);


    return 0;
}
