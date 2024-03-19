#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {1,2,3,4,5};  //declare the array na dalawa
    int arr2[5] = {2,4,5,6,8};  // pati yung pangalawa
    int intersection[5];
    for (int i = 0; i < 5; i++) // for loop hanggang size lang ng arr1
    {
        for (int j = 0; j < 5; j++) // for loop nanaman forda size ng arr2
        {                           // mas maganda pag parehas na set lang diko pa natest yung magkaibang size
            if (arr1[i] == arr2[j]) // pag equal daw yung arr1 tas arr2
            {
                intersection[j] = arr1[i];
                cout << arr1[i] << endl; // iprint nya yung element ng arr1
            }
            
        } // gets?!!!
        
    }
    return 0;
}