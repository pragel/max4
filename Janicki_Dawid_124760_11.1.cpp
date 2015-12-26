#include <iostream>
using namespace std;

int main()
{
	int a, m;
	
	cout << "Podaj 4 liczby rozdzielone spacja:";
	
	cin >> a;
	m = a;
	
	for (int i = 0; i < 3; i++) {
		cin >> a;
		if (a > m) m = a;
	}
 
	cout << "Najwieksza liczba to " << m;
	return 0;
}
