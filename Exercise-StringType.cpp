//nur nazurah bt md kamalullail
//compare two strings

#include<string>
#include<iostream>
using namespace std;

int main()
{
	string myName = "NAZURAH";
	string userName;
	while (true)
	{
		cout<<"enter your name (or 'quit' to exit): ";
		cin>>userName;
		
		if(userName=="Kasih")
		{
			cout<<"hye, Kasih! Welcome Back!"<<endl;
		}
		else if(userName=="quit")
		{
			//user is sick entering names, so lets quit
			cout<<endl;
			break;
		}
		else if(userName!=myName)
		{
			//user did not enter quit, Kasih or NAZURAH
			cout<<"HEllo, "<<userName <<endl;
		}
		else
		{
			cout<<"Oh, Its you, "<<myName <<endl;
		}
		
	}
	return 0;
}
