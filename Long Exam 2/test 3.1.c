#include <stdio.h> // printf, scanf
#include <ctype.h> // toupper ; isalpha
#include <stdbool.h> //true;false

int occurences1[26];int occurences2[26];
void scan_word(int occurence[26]){   /* function declaration involves counting of occurences and storing in occurence array */
    char c;

    printf("Enter first word: ");     //prompt user to enter first word
    while ((c = getchar()) != '\n'){  //convertion of lowercase letters to uppercase
        if (isalpha(c)){
            occurence[toupper(c) - 'A']++;
            occurences1[toupper(c) - 'A'] = occurence[toupper(c) - 'A'];
        }
    }

    for (int i = 0; i < 26; i++){    
        occurence[i] = 0;
    }

    printf("\nEnter second word: "); //prompts user to enter the second word
    while ((c = getchar()) != '\n'){ // converts lowercase to uppercase
        if (isalpha(c)){
            occurence[toupper(c) - 'A']--;
            occurences2[toupper(c) - 'A'] = occurence[toupper(c) - 'A'];

        }
    }

}

bool is_anagram(int occurences1[26], int occurences2[26]){  /*comparison between two words */
    for (int i = 0; i < 26; i++){
        if (occurences1[i] != occurences2[i])
            return 0;
    }

    return 1;
}

int main(){    
    printf("ANAGRAMS OR NOT\n\n");
    int i, same = 1, letters[26] = {0};    
    scan_word(letters);   /* calling function scan_word */

    same = is_anagram(occurences1, occurences2); 


    if (same){
        printf("\nThe words are anagrams."); /*condition to check if words are anagrams or not */
        return 0;
    }
    printf("\nThe words are not anagram.");

    return 0;
}
