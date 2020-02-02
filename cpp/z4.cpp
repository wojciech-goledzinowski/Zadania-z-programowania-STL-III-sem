//Z4 . Poszczególne litery w napisie: string S = ”abrakadabra”; umieść przy pomocy metody insert() w kontenerze  <set>. Program //ma także wypisać elementy kontenera. Przy pomocy metody find() sprawdzić, czy w kontenerze jest litera ‘r’.

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string s = "abrakadabra";
    set<char> d;
    set<char>::iterator p1;

    for (int i = 0; i < s.length(); i++)
        d.insert(s[i]);

    for (auto element : d){
        cout << element;};

    cout << endl;
    p1=d.find('r');

    if (*p1=='r') {cout << "Jest litera r";}
    else {cout << "Brak litery r";}

    return 0;
}
