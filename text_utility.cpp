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
    while(*str)
   {
     if (int(*str)<96 || *str == ' ')
     {
         str++;
        }
       else {*str -= 32;
     str++;}
    }

}
void toLowerCase(char* str)
{
  while (*str)
   {
    if(int(*str)>=65 && int(*str)<=90)
    {
        *str += 32;
        str++;
    } else if (*str == ' ') {
        str++;
    } else {
        str++;
    }
   }
}

int counterSubstringOccurrence(char* str, char* substr)
{

    return ; 
}