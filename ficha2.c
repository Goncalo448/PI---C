#include <stdio.h>
#include <stdlib.h>

float multInt(int  n, float m){

    int r = 0, i;
    for(i = 0; i < n; i++){
        r += m;
    }
    return r;
}


float multInt2(int n, float m){

    int soma;

    while(n >= 1){
        if(n%2 != 0){
            soma += m;
        }
        m *= 2;
        n = n/2;
    }
    return soma;
}


int mdc(int a, int b){

    int upper, result, i;

    if(a < b){
        upper = a;
    }else{
        upper = b;
    }

    for(i = 1; i <= upper; i++){
        if(a%i == 0 && b%i == 0){
            result = i;
        }
    }
    return result;
}


int mdc2(int a, int b){

    while(a != 0 || b != 0){
        if(a > b){
            a = a - b;
        }else if(a < b){
            b = b - a;
        }else{
            return a;
        }
    }
    if(a == 0){
        return b;
    }else{
        return a;
    }
}


int mdc3(int a, int b){

    while(a != 0 || a != 0){
        if(a > b){
            a = a % b;
        }else if(a < b){
            b = b % a;
        }else{
            return a;
        }
    }
    if(a == 0){
        return b;
    }else{
        return a;
    }
}


int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}


int fib2(int n){

    int a, b, result, i;

    a = 1;
    b = 1;

    if(n == 1 || n == 2){
        return 1;
    }

    for(i = 0; i < n-2; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}


int main(){
    
    multInt(3, 5);
    multInt(3, 6);
    mdc(5,10);
}
