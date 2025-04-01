#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 1000

void getString(char *str);
void getString2(char *str);
void getString3(char *str);
bool hasSpaces(const char *str);
void makeDupe(char *str, int n);


int main(void){
    char str[SIZE];
    char str2[SIZE];
    getString3(str);
    getString2(str2);

    printf("The string is \"%s\"\n", str);
    printf("The string2 is \"%s\"\n", str2);

    strcat(str, str2); //strcpy copies the str2 into str and strcat addes the content of str2 to str 
    printf("The string is \"%s\"\n", str);
    printf("The string2 is \"%s\"\n", str2);
    return 0;
}

void getString(char *str){
    puts("Enter a String: ");
    scanf("%s", str);
}

void getString2(char *str){
    puts("Enter a String: ");
    fgets(str, SIZE-1, stdin);
    //remove the ending
    int lastChar = strlen(str)-1;
    str[lastChar] = '\0';
}

void getString3(char *str){
    int i=0;
    char c = getchar(); // getchar scans one character
    while(i<SIZE-1 && c!='\n'){
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i]='\0';
}

bool hasSpaces(const char *str){
    if(strchr(str, ' ') == 0){
        puts("No spaces");
        return false;
    } else{
        puts("there is space");
        return true;
    }
}