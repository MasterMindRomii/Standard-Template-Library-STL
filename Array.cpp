#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,5> array_data={11,22,33,44,55};
    array<int,5> array_data2={1,2,3,4,5};

    cout << "at(2) function give you the indexed value of array at 2nd position:";
    cout << array_data.at(2) << endl;

    cout << "front() function give you the first indexed value of array :";
    cout << array_data.front() << endl;

    cout << "back() function give you the last indexed value of array :";
    cout << array_data.back() << endl;

    cout << "size() function give you the size of array :";
    cout << array_data.size() << endl;

    cout << "Swap() function is used to exchange the value of array with each other:";
    array_data.swap(array_data2);
    cout << "The value of array_data is now :";
    for (int i=0;i<=4;i++)
    {
        
        cout << array_data[i] << " " ;
    } 

    cout << endl;
    cout << "The value of array_data2 is now :";

    for (int i=0;i<=4;i++)
    {
        cout << array_data2[i] << " " ;
    }
    cout << endl;

    array_data.fill(10);
    for (int i=0;i<=4;i++)
    {
        cout << array_data[i] << " " ;
    }

    cout << endl;

    array_data2.fill(12);
    for (int i=0;i<=4;i++)
    {
        cout << array_data2[i] << " " ;
    }

    return 0;
}

// There is 2 more function which is Begin() and End() which is used when we work with iterator.