#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> array1;
    vector <int> array2;
    int input;
    while ("true")
    {
        cout << "Enter array 1, type 0 to stop: ";
        cin >> input;
        if (input == 0)
        {
            break;
        }
        else
        {
            array1.push_back(input);
        }
    }
    while ("true")
    {
        cout << "Enter array 2, type 0 to stop: ";
        cin >> input;
        if (input  == 0)
        {
            break;
        }
        else 
        {
            array2.push_back(input);
        }
    }
    for (int i = 0; i < array1.size(); i++)
    {
        for (int j = 0; j < array2.size(); j++)
        {
            if (array1[i] == array2[j])
            {
                cout << array1[i] << " ";
            }
            
        }
        
    }
    return 0;
}