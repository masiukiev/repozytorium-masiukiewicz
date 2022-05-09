#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{

    int n = 0;
    cout << "Ile liczb pierwszych wyświetlić?" << endl;
    cin >> n;
    auto start = high_resolution_clock::now();
    int p = 2;
    cout << "Liczby pierwsze:" << endl;
    for (int c = 0; c < n; c)
    {
        bool pier = true;
        for (int i = 2; i <= p / 2; i++)
        {
            if (p % i == 0)
            {
                pier = false;
                break;
            }
        }
        if (pier == true)
        {
            cout << p << endl;
            c++;
        }
        p++;

    }
    
}