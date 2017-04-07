#include <stdio.h>
#include <string.h>
int main(){
    
    FILE* file;
    double total = 0;
    double count = 0;
    double maxGrade;
    char maxName[50];
    
    file = fopen("notas.txt", "r");

    while(1){    
        
        double grade;
        char name[50];
        
        fscanf(file, "%*s %s %*s %lf", name, &grade); 
        
        if(feof(file))
            break;
        
        total += grade;

        if(grade > maxGrade){
            maxGrade = grade;
            strcpy(maxName, name);
        }
        count++;
    }

    
    printf("Media: %.2lf\n", total/count);    
    printf("Maior Nota: %s %.2lf\n", maxName, maxGrade);    
    
    return 0;
}
