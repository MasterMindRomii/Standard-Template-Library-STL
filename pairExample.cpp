#include <iostream>
using namespace std;
#include<utility>

class Details
{
private:
    string name;
    int age;

public:
    void setValue(string s, int a)
    {
        name=s;
        age=a;
    }

    void showData()
    {
        cout << "Name: " << name;
        cout << " Age: " << age;
    }
};

int main()
{
    pair<int, int> p1;
    pair<float, string> p2;
    pair<string, string> p3;

    p1=make_pair(12, 34);
    p2=make_pair(12.5f, "Romi Gupta");
    p3=make_pair("India", "New Delhi");

    pair<int, Details> p4;
    Details D;
    D.setValue("Romi", 20);
    p4=make_pair(1, D);

    cout << "\nPair1";
    cout << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << endl;

    cout << "\nPair2";
    cout << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << endl;

    cout << "\nPair3";
    cout << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << endl;

    cout << "\nPair4";
    cout << endl;
    cout << p4.first << endl;

    Details Show = p4.second;
    Show.showData();

    return 0;
}