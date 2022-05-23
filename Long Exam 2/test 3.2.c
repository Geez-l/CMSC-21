#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int occurences1[26], occurences2[26];

void scan_word(int occurence[26]){ /* function declaration involves counting of occurences and storing in occurence array */
    char c;                       //declaration of variables
    int *ptr;                     // pointer

    int *occ1, *occ2;
    occ1 = occurences1;
    occ2 = occurences2;
    ptr=occurence;


    printf("Enter first word: ");    /*ask user to enter first word */
    while ((c = getchar()) != '\n'){
        if (isalpha(c)){
            (*(occurence + (toupper(c) - 'A')))++;       /*convert lowercase to uppercase letters ; incrementing same*/
            *(occurences1 + (toupper(c) - 'A')) = *(occurence + (toupper(c) - 'A'));
        }
    }

    for (int i = 0; i < 26; i++){    
        *ptr++ = 0;
    }

    printf("\nEnter second word: "); /*ask user to enter second word */
    while ((c = getchar()) != '\n'){
        if (isalpha(c)){
            (*(occurence + (toupper(c) - 'A')))--; decrementing same
            *(occurences2 + (toupper(c) - 'A')) = *(occurence + (toupper(c) - 'A'));

        }
    }

}

bool is_anagram(int occurences1[26], int occurences2[26]){ /*Take two arrays of 26 characters each then comparing if both of them have 
                                                            the same occurences */
    int *o1, *o2;                       
    o1 = occurences1;
    o2 = occurences2;
    for (int i = 0; i < 26; i++){
        if (*o1 != *o2)
            return 0;
        o1++;
        o2++;
    }

    return 1;
}

int main(void){
    printf("ANAGRAMS OR NOT\n");       
    int i, same = 1, letters[26] = {0};          /*declaring varibales */

    scan_word(letters); //calling the function

    same = is_anagram(occurences1, occurences2);

    if (same){}                                  /*condtionals which state whether it is anagram or not */
    
        printf("\nThe words are anagrams.");   
        return 0; 
    }
    printf("\nThe words are not anagram.");

    return 0;
}