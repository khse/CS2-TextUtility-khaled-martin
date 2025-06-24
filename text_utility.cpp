#include "text_utility.h"

int wordCount(char* str)
{
	
    int words = 0;
    bool wasSpace = true;

    while (*str) {
        if (*str != ' ' && wasSpace) {
            words++;
            wasSpace = false;
        } else if (*str == ' ') {
            wasSpace = true;
        }
        str++;
    }

    return words;
}

int charCount(char* str)
{ 
   int count =0; 
   while(*str){
        if (*str!=' ')
        {
         str++; 
         count++;
        } else  str++;
    }   return count; 
}



void vowelConsonantCount(char* str, int &vowels, int &consonants)
{


}

void reverseString(char* str)
{


}

bool isPalindrome(char* str)
{


}
void toUpperCase(char* str)
{


}
void toLowerCase(char* str)
{

}

int counterSubstringOccurrence(char* str, char* substr)
{

    return ; 
}