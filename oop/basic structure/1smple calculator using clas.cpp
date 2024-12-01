#include<iostream>
using namespace std;

main()
{
	int a, b;
	
	cout<<"\n\n\t Enter a : ";
	cin>>a;
	cout<<"\n\n\t Enter b : ";
	cin>>b;
	
	cout<<"\n\n\t 1. Addition ";
	cout<<"\n\n\t 2. Subtraction";
	cout<<"\n\n\t 3. multipication";
	cout<<"\n\n\t 4. division";
	int ch;
	
	cout<<"\n\n\t Select the choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1 : cout<<"\n\n\t Addition = "<<a+b;
				break;
				
		case 2 : cout<<"\n\n\t subtraction = "<<a-b;
				break;
		case 3 : cout<<"\n\n\t multipication = "<<a*b;
				break;
		case 4 : cout<<"\n\n\t divison = "<<a/b;
				break;
	}
	
}
