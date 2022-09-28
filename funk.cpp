#include <iostream>

using namespace std;

int x,y,z;
	
int najwieksza(int l1,int l2,int l3)
{

	if((l1>l2)&&(l1>l3))
	{
	return l1;
	
		
	}
	else if((l2>l1)&&(l2>l3))
	{
	return	l2;
		
	}
		else if((l3>l1)&&(l3>l2))
	{
	return	l3;
	
	}
	
	
}
	
	


int main() 

{
	cout<<"Podaj 1 liczbe: "<<endl;
	cin>>x;
	cout<<"Podaj 2 liczbe: "<<endl;
	cin>>y;
	cout<<"Podaj 3 liczbe: "<<endl;
	cin>>z;
	
	cout<<najwieksza(x,y,z);
	
	
	
	return 0;
}
