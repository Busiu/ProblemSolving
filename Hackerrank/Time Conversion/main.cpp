#include <iostream>

using namespace std;

string zmiana(string w)
{
    if(w=="01")
        return "13";
    if(w=="02")
        return "14";
    if(w=="03")
        return "15";
    if(w=="04")
        return "16";
    if(w=="05")
        return "17";
    if(w=="06")
        return "18";
    if(w=="07")
        return "19";
    if(w=="08")
        return "20";
    if(w=="09")
        return "21";
    if(w=="10")
        return "22";
    if(w=="11")
        return "23";
    else
        return "12";
}



int main()
{
    string s, pom;

    cin >> s;

    if(s[s.length()-2]=='A')
    {
        pom = s.substr(0,2);

        if(pom=="12")
            cout << "00";
        else
            cout << pom;

        for(int i=2; i<s.length()-2; i++)
        {
            cout << s[i];
        }
    }

    else
    {
        pom = s.substr(0,2);
        cout << zmiana(pom);
        for(int i=2; i<s.length()-2; i++)
            cout << s[i];

    }

    return 0;
}
