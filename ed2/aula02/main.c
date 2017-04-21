#include <stdio.h>
#include <time.h>

int recFib(int n){
    if(n == 1 || n == 0) 
        return n;
    return recFib(n -1) + recFib(n - 2);
}

int itFib(int n){
    if(n == 0 || n == 1) return n;
    int i, a = 0, b = 1, v = 0;
    for(i = 2; i <= n; i++){
        v = a + b;
        a = b;
        b = v;
    }
    return v;
}

int main(){
    int i = 0;
    while(i < 10){
        printf("%d\n", itFib(i));
        i++;
    }
    return 0;
}
