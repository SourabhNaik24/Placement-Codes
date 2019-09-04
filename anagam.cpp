#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string str1, string str2){
	if(str1.size() != str2.size()){
		return false;
	}
	int value =0;
	for (int i=0; i<str1.size(); i++){
		value = value ^ (int) str1[i];	
		value = value ^ (int) str2[i];
	}
	return value ==0;
}
int main(){
	string str1="listen";
	string str2="silent";
	if(areAnagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each other";
	return 0;
}

