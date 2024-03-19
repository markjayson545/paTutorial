#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr1;
    int selection, input;
    cout << "Type 0 to stop entering numbers\n";
    while ("true")
    {
    cout << "Input Numbers: ";
    cin >> input;
    if (input == 0)
    {
        break;
    }
    else
    {
        arr1.push_back(input);
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << '[' << i << "]: " << arr1[i] << endl;
    }
    }
    while ("true")
    {
        for (int i = 0; i < arr1.size(); i++)
        {
            cout << '[' << i << "]: " << arr1[i] << endl;
        }        
        cout << "Select Index Number to delete: ";
        cin >> selection;
        if (arr1.size() <= 0)
        {
            cout << "There's no array elements left\nExiting!!!";
            return 0;
        }
        else if (selection > arr1.size())
        {
            cout << "Element not found\n";
        }
        else
        {
            arr1.erase(arr1.begin() + selection);
        }
    }
}