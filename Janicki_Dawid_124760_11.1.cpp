// Dawid Janicki nr. Indeksu 124760 Informatyka grupa 2. Lista zadan nr 3 zadanie 2
#include <iostream>

using namespace std;

int a,b,c,d,m;

int main()
{
	cout<< "Podja 4 liczby rozdzielone spacja:";
	cin>>a>>b>>c>>d;
	
	m=a;
	if (b>m) m=b;
	if (c>m) m=c;
	if (d>m) m=d;
	  
	cout<<"Najwieksza liczba to "<<m;
	  return 0;
}
