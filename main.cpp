#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int ilosc_uczniow;

int ilosc_cukierkow;

int main()
{
	
	cout<<"Podaj ilosc uczniow "<<endl;
	cin>>ilosc_uczniow;
	

	cout<<"Podaj ilosc cukierkow "<<endl;
	cin>>ilosc_cukierkow;
	
	 
	cout<<"Ile cukierkow przypadnie na jednego ucznia? "<<ilosc_cukierkow/(ilosc_uczniow-1)<<endl;
	cout<<"Ile cukierkow zostanie? "<<ilosc_cukierkow-((ilosc_uczniow-1)*(ilosc_cukierkow/(ilosc_uczniow)))<<endl;
	
												








	return 0;
}
