#include <stdio.h>
int main(){
    
    FILE* file;
    double total = 0;
    
    file = fopen("compra.txt", "r");

    while(1){    
        if(feof(file))
            break;
        int amount = 0;
        double value = 0.0;
        fscanf(file, "%*s %d %lf", &amount, &value); 
        total += amount*value;
    }

    printf("%.2lf\n", total);    
    
    return 0;
}
