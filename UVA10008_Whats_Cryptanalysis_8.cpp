/*
Sample Input
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?
Sample Output
S 7
T 6
I 5
E 4
O 3
A 2
H 2
N 2
U 2
W 2
C 1
M 1
Q 1
Y 1
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	char msg[1000]={}; //값 입력; 
	char alp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; //기본 알파벳 입력; 
	int num[26]={}; //횟수 저장; 
	int n;
	cin>>n;
	cin.ignore(); //이상하게 이거 안쓰면 한번이 공백으로 입력됨; 
	for(int i=0;i<n;i++)
	{
		int length=0;
		cin.getline(msg,1000); //공백도 처리해야해서 getline으로 처리; 
		length=strlen(msg);
		for(int i=0;i<length;i++)
		{
			if(isalpha(msg[i]))
			{
				num[toupper(msg[i])-'A']++; //전부 대문자로 한 숫자에서 첫번째 A를 빼면 몇번째 알바벳인지 나옴; 
			}
		}
	}
	for(int i=0;i<26;i++) //판단식; 
	{
		for(int j=i;j<26;j++)
		{
			if(num[i]<num[j])
			{
				int temp;
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
				
				char temp1;
				temp1=alp[i];
				alp[i]=alp[j];
				alp[j]=temp1;
			}
			else if(num[i]==num[j])
			{
				if(alp[i]>alp[j])
				{
					char temp2;
					temp2=alp[i];
					alp[i]=alp[j];
					alp[j]=temp2;
				}
			}
		}
	}
	for(int i=0;i<26;i++) //출력함수; 
	{
		if(num[i])
		{
			cout<<alp[i]<<" "<<num[i]<<endl;	
		}
	
	}
return 0;
}

