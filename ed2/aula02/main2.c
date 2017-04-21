#include <stdio.h>

int recRec(int n){
    if(n == 0) return 1;
    int s = 0, i = 0;
    for(i = 0; i < n; i++){
        s += recRec(i);        
    }
    return 2/n * s + n;
}

int main(){
    int i = 0;
    while(i < 10){
        printf("%d\n",recRec(i));
        i++;
    }
    return 0;
}
