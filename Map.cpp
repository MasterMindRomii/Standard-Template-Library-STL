#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> Student;

    Student[100] = "Romi Gupta";
    Student[125] = "Akash Kumar";
    Student[150] = "Gulshan Kumar";
    Student[175] = "Mulaym Singh";
    Student[200] = "Ishnat Sikdar";

    map<int, string> Customer{{100, "Romi Gupta"}, {125, "Prashant"}, {150, "Brijesh"}, {175, "Nitin"}, {200, "Sujeet"}};

    cout << "Access Elements:";
    map<int, string>::iterator p = Customer.begin();
    while (p != Customer.end())
    {
        cout << p->second << " ";
        p++;
    }
    cout << endl;

    // 1. at() function and Subscript([])-
    cout << "Value at index 200: ";
    cout << Customer.at(200);
    cout << endl;

    cout << "Value at index 125th: ";
    cout << Customer[125];
    cout << endl;

    // 2. Size() Function
    cout << "The size of map(Associative Array) is: " << Customer.size();
    cout << endl;

    // 3. Empty() Function
    cout << "The function gives 0 if value have in map or 1 if not: " << Customer.empty();
    cout << endl;

    // 4. Insert() Method
    Customer.insert(pair<int, string>(225, "Prince"));
    cout << "After Insertion:";

    map<int,string>::iterator q=Customer.begin();
    while (q != Customer.end())
    {
        cout << q->second << " ";
        q++;
    }
    cout<<endl;

    Customer.clear();
    Student.clear();
    cout << "Now the map is cleared";

    return 0;
}