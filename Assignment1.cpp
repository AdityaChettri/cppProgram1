/*Author:Aditya Chettri
DOC:17th November2020
Pattern Printing
*/
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=i;j<=7;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	for(int i=6;i>=1;i--)
	{
		
		for(int j=i;j<=7;j++)
		{
			cout<<j;
		}		
		cout<<"\n";
	}
	return 0;
}
