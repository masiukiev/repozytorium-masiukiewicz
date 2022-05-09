#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void Funkcja(int klucz, char tab[], string slowo);
void Funkcja(int klucz, char tab[], string slowo)
{
	int dl;
	dl = strlen(tab);
	if (!(klucz >= -26 && klucz <= 26))
	{
		cout << "podales zly klucz!";

	}
	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
	cout << "Przed uzyciem szyfru " << slowo << endl;
	cout << "Po zaszyfrowaniu " << tab << endl;
}
int main()
{
	string slowo;
	int klucz;
	char tab[100];
	cout << "podaj slowo ktore sklada sie z malych liter" << endl;
	cin >> tab;
	slowo = tab;
	cout << "Podaj klucz z przedzialu [-26..26]" << endl;
	cin >> klucz;
	Funkcja(klucz, tab, slowo);

	
}