#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string "<<endl;
	getline(cin,str);
	
for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'b')
			str[i] = str[i] - 32;
		
	}
	cout<<str<<endl;
	return 0;
}
