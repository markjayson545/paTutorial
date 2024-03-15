#include <iostream>
using namespace std;

int main(){
    int size = 5;    // alam nyo nato
    int arr[size] = {10,20,30,40,50}; // basta array to
    int selection; // forda userinput
    while ("true") // iloop ng infinite kase why not, trip ko lang
    {
        cout << "\nSelect element to delete: \n"; // alam nyo nayan

        for (int i = 0; i < size; i++) // idisplay yung mga array using loopings
        {
            cout << '[' << i << "]: " << arr[i] << endl; // "dapat alam nyo yan" (mam arts)
        }
        cout << "Selection: "; // kelangan paba talaga toh?
        cin >> selection;    // cin yan para sa selection
        if (selection < 0 || selection >= size) // syempre bida bida ako kaya meron toh
        {
            cout << "sabi ng bawal yan eh!!" << endl; // para di maexecute pag wala sa listahan
        }
        else {  // core processing eto yung process hoi kaya basahin nyo
            for (int i = selection; i < size - 1; i++) // mag loop sa umpisa ng user selection hanggang sa pinakahuli ng array
            {                                          // syempre mag dedelete kaya minus 1 para uusog lahat noh
                arr[i] = arr[ i + 1 ]; // kunware yung index 1 na 20 papalitan 
                                       // mawawala yung 20 tas magiging 30 then uusog yung mga susunod
                                       // basta alam nyo nayan
                                       // IT kayo eh
                                       // basta nagwork sya hehe :)
            }
            size--; // obviously mag bawas ng size kase nawala yung isang element
        }
        if (size == 0) // kala mo infinite noh 
        {
            cout << "\n\nHOY!!! UBOS NA YUNG ARRAY TAMA NA!!!";
            break; // putulin ang sedula!!!!
        }
    }  //GETS NYONA?!!!

    return 0;
}
