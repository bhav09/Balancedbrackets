#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	
	char ans='y',x;
	int size=0,flag=0,i;
	char *a= new char[size+1];
	while(ans=='y')
	{
		
		cout<<"Enter:";
		cin>>x;
		a[size]=x;
		cout<<"Want to enter more?";
		cin>>ans;
		if(ans=='y')
			size+=1;
	}
	size+=1;
	char *rev=new char[size];
	cout<<"Length of string is:"<<size<<endl;
	cout<<"String is: ";
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
	if (size%2!=0)
	{
		flag=0;
	}
	else
	{
		for(i=0;i<size;i++)
		{
			if(a[i]==']')
			{
				a[i]='[';
			}
			
			if(a[i]==')')
			{
				a[i]='(';
			}
			
			if(a[i]=='}')
			{
				a[i]='{';
			}
		}
		for(i=0;i<size;i++)
		{
			rev[i]=a[size-i-1];
		}
	//	cout<<"Reverse of String is: ";
	/*	for(i=0;i<l;i++)
		{
			cout<<rev[i];
		}
	*/
		for(i=0;i<size;i++)
		{
			
			if (rev[i]==a[i])
				flag=1;
			else
				flag=0;
		
		}
		
	}
	if (flag==0)
	{
		cout<<"\nNOT balanced";
	}
	else
	{
		cout<<"\nBalanced";
	}
	return 0;
}
