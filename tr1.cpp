#include <iostream>
using namespace std;

int arr[5]={1,2,3,4,5}; // IDECLARE YUNG ARRAY NA LIMA
// SA INDEX 0 PALAGI NAGUUMPISA THUS, 0,1,2,3,4 LANG SYA

int i=0; // ETO YUNG SIZE, SA ZERO MAGUUMPISA YUNG BILANG
void recurse(){
    if (i != 5) // PAG HINDI PA SYA 5 MAG RURUN TO
    {
        cout << arr[i] << endl; // PRINT YUNG ARRAY
        i++; // DAGDAG SIZE PARA MAGING INDEX 1 YUNG IPRINT SA SUSUNOD
        recurse(); // TATAWAGIN NYA ULIT SARILI NYA
        // KAPAG NAGING 5 NA YUNG INT I OR SIZE DI NA SYA MAG EEXECUTE
        // AND HINDI NA NYA TATAWAGIN YUNG SARILI NYA THUS MAG EEND YUNG PROGRAM
    }
}
int main(){
    recurse();
    return 0;
}