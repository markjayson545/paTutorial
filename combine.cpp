#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> arr1 = {20, 30, 40, 50};
    vector <int> arr2 = {90, 80, 70, 60};
    vector <int> merged(arr1.size() + arr2.size());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());
}