#include "text_utility.h"


void swap (char& a, char& b)
{
    char temp = a; 
    a = b; 
    b = temp; 
}

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
	    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            vowels++;
            str++;
        }
        else if (*str != ' ') {
            consonants++;
            str++;
        }
        else
            str++;
    }
}

void reverseString(char* str)
{
  int size = 0;
   while (*str) {str++; size++;} 
   str-=size; 
  for (int i = 0; i < size / 2; i++) 
  {
      swap(str[i], str[size-i-1]);
  }
}

bool isPalindrome(char* str)
{

    int size=charCount( str );
    bool palindrome =true;
    for (int i=0;i<size/2;i++)
    {
        if (str[i] !=str[size-i-1])
        {
            palindrome= false; 
            break; 
        }
    }
    return palindrome;

}
void toUpperCase(char* str)
{


}
void toLowerCase(char* str)
{

}

int counterSubstringOccurrence(char* str, char* substr)
{
        int count = 0;
    int substrLen = 0;
    int strLen = 0;
    char* temp = substr;

    while (*temp) {
        substrLen++;
        temp++;
    }
    temp=str;
    while (*temp) {
        strLen++;
        temp++;
    }
    char* temp2 = substr;
    temp=str;

    for (int i = 0; i<strLen-substrLen+1; i++) {
        bool same = true;
        for (int j = 0; j < substrLen; j++) {
            if (temp[i+j]!=temp2[j]) {
                same = false;
                break;
            }
        }
        if (same) count++;
    }

    return count;
}