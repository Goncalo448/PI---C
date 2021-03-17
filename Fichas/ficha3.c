#include <stdio.h>
#include <stdlib.h>

void swapM(int *x, int *y){

    int tmp = *x;
    *x = *y;
    *y = tmp;

    printf("%d %d\n", *x, *y);
}


void swap(int v[], int i, int j){

    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;

    printf("%d %d\n", v[i], v[j]);
}


int soma(int v[], int n){

    int i, resultado = 0;

    for(i = 0; i < n; i++){
        resultado = resultado + v[i];
    }

    return resultado;
}


void inverteArray(int v[], int n){

    int i;

    for(i = 0; i < n/2; i++){
        swapM(v[i], v[n-i-1]);
    }
}


void inverteArray2(int v[], int n){

    int i;

    for(i = 0; i < n/2; i++){
        swap(v, i, n-i-1);
    }
}


int maximum(int v[], int n, int *m){

    int i, j, max = 0;

    for(i = 0; i < n; i++){
        if(max > v[i]){
            max = v[i];
        }
    }
    *m = max;
}


void quadrados(int q[], int n){

    int i;

    for(i = 1; i <= n; i++){
        q[i] = i*i;
    }
}


void pascal(int v[], int n){
    
    int i, prevLine[n-1];

    if(n == 1){
        v[0] = 1;
    }else{
        pascal(prevLine, n-1);
        v[0] = 1;
        v[n-1] = 1;
        for(i = 0; i < n; i++){
            v[i] = prevLine[i-1] + prevLine[i];
        }
    }
}


int main(){

    

    return 0;
}