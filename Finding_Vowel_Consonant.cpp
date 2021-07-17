#include<iostream>
using namespace std;

int main()
{
	char c,i;
	char isUpperCaseVowel, isLowerCaseVowel;
	
	cout<<"Enter the Alphabet: ";
	cin>>c;
	
	isUpperCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isLowerCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if(isUpperCaseVowel || isLowerCaseVowel)
	{
		cout<<"It is a Vowel.";
	}
	else
	{
		cout<<"It is a Consonant.";
	}
	
	return 0;
}
