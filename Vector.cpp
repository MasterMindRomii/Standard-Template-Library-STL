#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<string> v2{"Romi Gupta"};
    vector<float> v3{23.5f};

    cout << "The initial capacity of vector is:" << v1.capacity() << endl;
    v1.push_back(12);
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "The capacity of vector is:" << v1.capacity() << endl;
    v1.push_back(16);
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "The capacity of vector is:" << v1.capacity() << endl;
    v1.push_back(18);
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "The capacity of vector is:" << v1.capacity() << endl;
    v1.push_back(19);
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "The capacity of vector is:" << v1.capacity() << endl;
    v1.pop_back();
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "The capacity of vector is:" << v1.capacity() << endl;
    v1.pop_back();
    cout << "The capacity of vector is:" << v1.capacity() << endl;

    cout << "Now below code print 2 values:\n";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    cout << "The front value of v1 Vector is:";
    cout << v1.front();

    cout << endl
         << "The back value of v1 vector is:";
    cout << v1.back();

    cout << endl
         << "The value at index 1 is:";
    cout << v1.at(1);

    cout << endl;

    vector<int>::iterator it = v1.begin();
    v1.insert(it + 2, 45);

    cout << "Value at 3rd Position:" << v1.at(2) << endl;

    cout << "All elements in Vector:";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    v1.clear();
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "THe current capacity is " << v1.capacity() << " But the size is " << v1.size() << endl;

    return 0;
}