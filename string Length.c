//length of string in C
//
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main (){
    int count = 0;
    char str[333];
    printf("Enter a string in the commandline ");
    gets(str);
    printf("%s", str);
    for (int i = 0; str[i]!= '\0'; i++){
        count++;
    }
    printf("%d", count);
    
    
    printf("\n\n");
    return 0;
    
}
