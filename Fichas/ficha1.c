#include <stdio.h>
#include <stdlib.h>

//Exercicio 1

//1.
/* x = 3 
y = 3 + 1 = 4
x = 3 * 4 = 12
y = 12 + 4 = 16
x = 12 e y = 16

2.
x = 0 e y = 0

3.
A 65
B 66 2 50
b 98

4.
x = 200 + 100 = 300
y = 300 - 100 = 200
x = 300 - 200 = 100
100 200 */


/*Exercicio 2

a)
3 5

b)
x = 11 e y = 66

c)
#_#_#_#_#_#_#_#_#_#_

d)
*/


//Exercicio 3

void quadrado(int n){

    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            putchar('#');
        }
        printf("\n");
    }

}

void xadrez(int n){
    
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if((i+j)%2 == 0){
                putchar('#');
            }else{
                putchar('_');
            }
        }
        printf("\n");
    }
}

void vertical(int n){

    int i, j;
    for(i = 1; i < 2*n; i++){
        for(j = 1; j <= 2*n-i; j++){
            if(j <= i){
                putchar('#');
            }
        }
        printf("\n");
    }
}

void horizontal(int n){

    int i, j, k;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--){
            putchar(' ');
        }
        for(k = 1; k < 2*(i+1); k++){
            putchar('#');
        }
        putchar('\n');
    }
}

int main(){

    int a;

    printf("Dimensão das figuras:\n");
    scanf("%d", &a);

    system("clear");

    quadrado(a);
    printf("\n");
    xadrez(a);
    printf("\n");
    vertical(a);
    printf("\n");
    horizontal(a);
    printf("\n");

}


