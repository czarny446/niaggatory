#include <iostream>

using namespace std;

int x,y,z;
	
int najwieksza(int l1,int l2,int l3)
{

	if((l1>l2)&&(l1>l3))
	{
	return cout<<l1<<" jest najwieksze"<<endl;
	
		
	}
	else if((l2>l1)&&(l2>l3))
	{
	return	cout<<l2<<" jest najwieksze"<<endl;
		
	}
		else if((l3>l1)&&(l3>l2))
	{
	return	cout<<l3<<" jest najwieksze"<<endl;
	
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
	
	najwieksza(x,y,z);
	cout<<najwieksza;
	
	
	
	return 0;
}
