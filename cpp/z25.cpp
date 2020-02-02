//Z25 PD W kontenerze <deque> umieścić 10 liczb (od 0 do 9). Utworzyć dwa iteratory.
//Iterator pierwszy ustawić na 4 element, a iterator drugi ustawić na 8 element
//kontenera (uwaga: indeksacja zaczyna się od 0!). Utworzyć drugi kontener <deque>

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> k1,k2;
    deque<int>::iterator i1,i2;

    for(int i=0;i<10;i++) k1.push_back(i);

    for(auto i:k1) cout << i <<", ";


    i1=k1.begin()+3;
    i2=k1.begin()+7;

    for(i1;i1<=i2;i1++) k2.push_back(*i1);

    cout << endl;

    for(auto i:k2) cout << i <<", ";

}
