//Z11. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Utworzyć dwa iterarory. Iterator pierwszy ustawić na 4 element a iterator drugi ustawić na 8 element kontenera (uwaga: indeksacja jest od 0!). Utworzyć drugi kontener <vector> i skopiować elementy pierwszego kontenera do drugiego w zakresie wskazanym przez ustawione iterarory.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k,k2;
    vector<int>::iterator i1,i2;

    for(int i=0;i<10;i++){
        k.push_back(i);}

    i1=i2=k.begin();
    i1+=3;
    i2+=7;

    for(i1;i1<=i2;i1++){
        k2.push_back(*i1);
    }

    for(auto i: k){cout << i << ", ";}
    cout << endl;
    for(auto i: k2){cout << i << ", ";}
    cout << endl;


}


