//BBB40.W kontenerze <vector> umieść elementy typu int (wartości od 1 do 9). Przy pomocy algorytmu transform() zaneguj wszystkie wartości, Wyświetl te wartości.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> k {1,2,3,4,5,6,7,8,9};

    transform(k.begin(),k.end(),k.begin(),[](int f){ return f*(-1);});

    for(auto i:k) cout <<i<<", ";

}

