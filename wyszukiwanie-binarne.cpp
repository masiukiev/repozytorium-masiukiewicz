#include <iostream>
using namespace std;

int main()
{
    short max = 16;
    short min = -1;
    short index = -1;
    short szukana = 2;
    short tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cout << "Jakiej liczby szukasz poszukiwaczu?\n";
    cin >> szukana;
    while (index == -1) {
        int szukIndex = (min + max) / 2;
        if (min == max - 1) {
            break;
        }
        if (tab[szukIndex] > szukana) {
            max = szukIndex;
        }
        else if (tab[szukIndex] < szukana) {
            min = szukIndex;
        }
        else {
            index = szukIndex;
            break;
        }
    }
    if (index == -1) {
        cout << "nie znaleziono :( ";
    }
    else {
        cout << "znaleniono " << index << endl;
    }
}


