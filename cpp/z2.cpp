//Z2. Poszczególne litery w napisie:
//		string S = ”abrakadabra”;
//umieść przy pomocy metody push() w kontenerze klasy <queue>. Program ma także wypisać elementy kontenera.

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    string s = "abrakadabra";
    queue<char> d;

    for (int i = 0; i < s.length(); i++)
        d.push_back(s[i]);

    for (element : d)
        cout << element;

    return 0;
}
