#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	int countSC,countNUM,countALF;
	countSC=countNUM=countALF = 0;
	int i =0;
	getline(cin,s);
	
	map<char,bool> LetterSeen;
	for( ;i < s.length() ; i++)
	{
		/*  char 32-47 = SC
			58 -64 = SC
			91-96 =SC
			123-126 =Sc */
		if((s[i]>=32 && s[i]<=47) | (s[i]>=58 && s[i]<=64) | (s[i]>=91 && s[i]<=96) | (s[i]>=123 && s[i]<=126))
		{	
			if(LetterSeen[s[i]]) {
			}
			else
			{
				LetterSeen[s[i]] = true;
				countSC++;
			}
		}
		//	char 48 - 57 = number
		else if(s[i]>=48 && s[i]<=57)
		{
			if(LetterSeen[s[i]]) {
			}
			else
			{
				LetterSeen[s[i]] = true;
				countNUM++;
			}
		}
		//	65 - 90 = alphabets
		//	97 - 122 = alphabets
		else if((s[i]>=65 && s[i]<=90) | (s[i]>=97 && s[i]<=122))
		{
			if(LetterSeen[s[i]]) {
			}
			else
			{
				LetterSeen[s[i]] = true;
				countALF++;
			}
		}
		
	}
	cout<<"total no. of tokens : "<<s.length();
	cout<<endl<<"Special Character : "<<countSC<<endl;
	cout<<"Numbers : "<<countNUM<<endl;
	cout<<"Alphabets : "<<countALF;
	
}
