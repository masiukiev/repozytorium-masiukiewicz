#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 1;
	int moves = 0;
	cout << "ile razy wypisać ?\n";
	cin >> moves;
	for (int i = 0; i < moves; i++)
	{
		if (a > b) {
			b = a + b;
			cout << b << endl;
		}
		else {
			a = a + b;
			cout << a << endl;
		}
	}
}