#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 5}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 4}, {5, 8}, {9, 8}};
    cout << arr[1].first;

    return 0;
}

