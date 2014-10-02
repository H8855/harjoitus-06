#include <iostream>
using namespace std;

int lompakko, hinta;

void main(void)
{
	cout << "Lompakossa oleva rahamaara: ";
	cin >> lompakko;
	cout << "Lihapiirakan hinta: ";
	cin >> hinta;
	if (hinta <= lompakko)
	{
		cout << "Lompakkoon jaa viela " << lompakko - hinta;
	}
	else
		cout << "Paastoa.";
}