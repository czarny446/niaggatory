#include <iostream>

using namespace std;

int main()

{
	string login;
	string haslo;
	
	cout<<"Podaj login: "<<endl;
	cin>>login;
	
	cout<<"Podaj haslo: "<<endl;
	cin>>haslo;
	
	if((login=="czarny")&&(haslo=="2467"))
	{
		cout<<"Zalogowany"<<endl;
		
	}
	
	else
	
	{
		cout<<"Niepoprawny login lub haslo"<<endl;
		
	}
	
	return 0;
}
