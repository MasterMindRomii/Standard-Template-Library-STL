#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    list<int>::iterator p = l1.begin();

    cout << "Current List Contains These Values Before Operation:";
    while (p != l1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    cout << "The size of List l1 is:" << l1.size() << endl;

    cout << "Add 110 at last position:";
    l1.push_back(110);
    cout << endl;
    cout << "Current List After Adding 110 at Last Position:";
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Add 0 at first position:";
    l1.push_front(0);
    cout << endl;
    cout << "Current List After Adding 0 at First Position:";
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Remove 110 from last position:";
    l1.pop_back();
    cout << endl;
    cout << "Current List After Removing 110 from Last Position:";
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Remove 0 from first position:";
    l1.pop_front();
    cout << endl;
    cout << "Current List After Removing 0 from Front Position:";
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse the list:";
    l1.reverse();
    cout << endl;
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Sort the list:";
    l1.sort();
    cout << endl;
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Remove an element from a particular index 3rd:";
    l1.remove(30);
    cout << endl;
    for (auto it = l1.begin(); it != l1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    l1.clear();

    return 0;
}
