//Notes here
#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[30];
    int age;
    char phon[33];
    printf("Enter you name: ");
    fgets(name, 30, stdin );
    printf("Enter you age: ");
    scanf("%d", &age);
    getchar();
    printf("Enter you phone number: ");
    fgets(phon, 33, stdin);
    printf("your name is: %s, and your age is: %d, and your phone number is %s", name, age, phon);
    
    
    
    return 0;
}

