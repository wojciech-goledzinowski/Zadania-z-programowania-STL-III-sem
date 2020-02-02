//BBB39.W kontenerze <vector> umieść 20 elementów typu int (wartości od 1 do 7). Przy pomocy algorytmu find() znajdź czy w kolekcji jest wybrana wartość (np. 4 lub 22), a jeżeli jest to na jakiej pozycji.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> k {1,7,3,4,5,6,7,3,6,5,4,3,2,1,2,3,4,5,6,7};
    vector<int>::iterator it;
    int liczba;

    liczba=4;
    it = find(k.begin(), k.end(), liczba);
    if (it != k.end())
        cout << "Element znaleziony na pozycji liczonej od 0: " <<(it-k.begin())<< "\n";
    else
        cout << "Element nie znaleziony\n";
}

