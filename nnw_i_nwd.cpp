#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int a = 0;
    int b = 0;
    cout << "Podaj dwie liczby\n";
    cin >> a >> b;
    int iloczyn = a * b;
    while (a != b)
    {
        if (a <= b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    float nww = iloczyn / a;
    cout << "NWD = " << a << endl;
    cout << "NWW = " << nww;
    
}