#include <iostream>
using namespace std;

int arr[5]={1,2,3,4,5};

int i=0;
void recurse(){
    if (i != 5)
    {
        cout << arr[i] << endl;
        i++;
        recurse();
    }
}
int main(){
    recurse();
    return 0;
}