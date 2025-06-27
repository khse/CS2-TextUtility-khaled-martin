#include "text_utility.h"Add commentMore actions
#include <iostream> 

using namespace std;

int main() {
	cout << "Hi" << endl;
	return 0;
	char str[] = "Hello world test";
	char reverse[] = "this is the reverce test";
	char palindrome1[] = "radar";
	char palindrome2[] = "qatar";
	char uplowCase[] = "HeLlO woRLD THiS is a TESt";
	char mainstr[] = "abababab";
	char substr[] = "ab";
	char plainText[] = "attackatdawn";
	char key[] = "lemon";
	char encrypted[];
	char decrypted[];

	cout << "word Count: " << wordCount(str) << endl;
	cout << "Characters Count: " << charCount(str) << endl;

	int vowels = 0, consonants = 0;
	vowelConsonantCout(str, vowels, consonants);

	cout << "String before reverce: " << reverce;
	reverseString(str);
	cout << "reverced string: " << reverce;

	if (isPalindrome(palindrome1))
		cout << palindrome1 << " Is a palindrome" << endl;
	else
		cout << palindrome1 << " Is not a palindrome" << endl;

	if (isPalindrome(palindrome2))
		cout << palindrome2 << " Is a palindrome" << endl;
	else
		cout << palindrome2 << " Is not a palindrome" << endl;

	cout << "Original: " << upperTest << endl;
	toUpperCase(upperTest);
	cout << "After toUpperCase: " << upperTest << endl;

	cout << "Original: " << lowerTest << endl;
	toLowerCase(lowerTest);
	cout << "After toLowerCase: " << lowerTest << endl;

	cout << "Substring 'ab' occurs in 'abababab' " << counterSubstringOccurrence(mainstr, substr) << " times" << endl;

	cout << "Plaintext: " << plainText << endl;
	encryptStr(plainText, key, encrypted);
	cout << "Encrypted: " << encrypted << endl;

	decryptStr(decrypted, key, encrypted);
	cout << "Decrypted: " << decrypted << endl;
}