#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 

{
	string nazwisko[50];
    float  ocena[10];
	int ilosc;
	float suma=0; 
	int indeks=0;
	
	
	cout<<"Podaj liczbê uczniow (nie wieksza niz 50): "<<endl;
	cin>>ilosc;
	
	for(int i=0;i<ilosc;i++)
	 { 
	 cout<<"Podaj nazwisko i ocene  "<<i+1<<"  ucznia:  "<<endl;
	 cin>>nazwisko[i]>>ocena[i];
	 suma=suma+ocena[i];
	 
	 if(ocena[i]>ocena[indeks])
	 {
	 	indeks=i;
	 }
	 
	 }
	cout<<endl<<"Najlepsza ocene dostal "<<nazwisko[indeks]<<"i byla to "<<ocena[indeks]<<endl;
	cout<<"srednia ocen "<<suma/ilosc<<endl;
	
	for (int i=0;i<ilosc;i++)
	{
		cout<<nazwisko[i]<<ocena[i]<<endl;
	}
	



	
	return 0;
}
