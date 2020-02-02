// Z1. Poszczególne litery w napisie:
//		 string S = "abrakadabra";
//umieść przy pomocy metody push_back() w kontenerze klasy <vector>. Program //ma także wypisać elementy kontenera. Następnie posortuj litery w napisie i //wydrukuj uporządkowaną kolekcję.


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s="abrakadabra";
    vector<char> v;

    for(int i=0;i<s.length();i++)v.push_back(s[i]);

    sort(v.begin(),v.end());

    for( element: v) cout << element;

    return 0;
}




