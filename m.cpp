#include <iostream>  // cout
#include <algorithm> // set_intersection, sort
#include <vector>    // vector

using namespace std;

int main()
{
    vector<int> first = {5, 10, 15, 20, 25};
    vector<int> second = {50, 40, 30, 20, 10};
    vector<int> v(10); // 0  0  0  0  0  0  0  0  0  0
    vector<int>::iterator it;

    sort(first.begin(), first.end());   //  5 10 15 20 25
    sort(second.begin(), second.end()); // 10 20 30 40 50

    it = set_intersection(first.begin(), first.end(), second.begin(), second.end(), v.begin());
    // 10 20 0  0  0  0  0  0  0  0
    v.resize(it - v.begin()); // 10 20

    cout << "The intersection has " << (v.size()) << " elements:\n";
    for (it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}
