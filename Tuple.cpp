#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<float, int, int>t1;
    tuple<string, int, float>t2;

    t1 = make_tuple(12.5f, 34, 56);
    t2 = make_tuple("Romi", 12, 34.5f);

    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";

    cout << get<0>(t2) << " ";
    cout << get<1>(t2) << " ";
    cout << get<2>(t2) << " ";

    return 0;
}