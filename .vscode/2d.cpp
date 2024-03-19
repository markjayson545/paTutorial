#include <iostream>
using namespace std;

int main(){
    int arr[5][5] = {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {2,4,6,8,10},
                        {10,12,13,30,23},
                        {10,20,30,40,50}
    };
    while ("true")
    {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
        
    }
    }
}