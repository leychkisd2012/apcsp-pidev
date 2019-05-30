#include <stdio.h>
#include <string.h>

int main()
{
    
    char lowerOne [27];
    char lowerTwo [27] = {"abcdefghijklmnopqrstuvwxyz"};
    
    for(int i = 97;i< 123; i++){
        lowerOne[i-97] = (int)i;
    }
    
    _Bool boZero = strcmp(lowerOne, lowerTwo);
    printf("Should be 0: %d \n", boZero);
    
    
    for (int i = 0; i<26; i++){
        lowerOne[i] = lowerOne[i] - 32;
    }
    
    _Bool boOne = strcmp(lowerOne, lowerTwo);
    printf("Should be 1: %d \n", boOne);
    
    
    char allCharacters [57] = {};
    strcpy(allCharacters, lowerTwo);
    strcat(allCharacters, lowerOne);
    
    printf("%s \n", lowerOne);
    printf("%s \n", lowerTwo);
    printf("%s", allCharacters);

}

