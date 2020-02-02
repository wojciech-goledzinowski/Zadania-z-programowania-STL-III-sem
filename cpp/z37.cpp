//BBB37.W kontenerze <vector> umieść elementy typu int (wartości od 1 do 9). Zaimplementuj funkcję print(int elem), która drukuje elementy. Wykorzystaj algorytm for_each() do wydrukowania zawartości kontenera.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int element){
cout << element << ", ";
}



int main()
{
    vector<int> k;

    for(int i=1;i<10;i++){
        k.push_back(i);}

    for_each(k.begin(),k.end(),print);
}

