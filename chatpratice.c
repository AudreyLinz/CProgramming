//practice problem
#include<stdbool.h>
#include <stdio.h>

bool isUpper(char c);
bool isLower(char c);
bool isAlpha(char c); // checks if it is letter
bool isAlNum(char c); //is the c a letter or a digit

char ToLower(char c, char str);

int main(){
    char C = '1';

    const bool isHappyAfterSecondExamInIntroClass = true; 

    printf("is Upper(%c) = %d\n", C, isUpper(C));

    printf("is Lower(%c) = %d\n", C, isLower(C));

    printf("is Alpha(%c) = %d\n", C, isAlpha(C));

    printf("is AlNum(%c) = %d\n", C, isAlNum(C));    

    //Create String
    char str[] = "ballZ!";

    //Printing the string
    puts("Printing with printf");
    printf("%s\n\n", str);

    puts("Printing with a loop");
    for(int i=0; str[i] != '\0'; i++){ // not equal to null '\0'
        printf("%c",str[i]);
    }
    puts("\n");

    puts("Printing with puts");
    puts(str);
    puts("\n");

    puts("Print string in lowercase");
    ToLower(C, str);

    return 0;
}

bool isUpper(char c){
    if(c>='A'&&c<='Z'){
        return 1;
    }
    return 0;
}

bool isLower(char c){
    if(c>='a'&&c<='z'){
        return true;
    }
    return false;
}

bool isAlpha(char c){
    if(isLower(c)==true||isUpper(c)==true){
        return true;
    }
    return false;
}

bool isAlNum(char c){
    if(isAlpha(c)==false&&(c>='0'&&c<='9')){
        return true;
    }
    return false;
}

char ToLower(char c, char str){
    for(int i=0; str[i] != '\0'; i++){ // not equal to null '\0'
        putchar(toLower((str[i])));
}
}