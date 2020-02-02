//BBB38.W kontenerze <vector> umieść 20 elementów typu int (wartości od 1 do 7). Przy pomocy algorytmu count() policz ile było wystąpień wybranego elementu (np. 3).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> k {1,2,3,4,5,6,7,3,6,5,4,3,2,1,2,3,4,5,6,7};
    int liczba;
    liczba=7;

    cout << "Liczba " << liczba << " wystapila "<<count(k.begin(),k.end(),liczba)<< " razy.";

}

