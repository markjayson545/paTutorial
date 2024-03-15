#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    int selection; // forda selection ng number
    vector <int> arr = {10,20,30,40,50}; // as always ideclare the array
    while ("true") // iloop kase why not, kahit maubos pa yung array
    {
        cout << "list of array: \n";
        for (int i = 0; i < arr.size(); i++) // iprint yung mga array hanggang sa kawalan nya
        {
            cout << '[' << i << "]: " << arr[i] << endl; // "dapat alam nyo to" credits from mam arts appri
        }
        cout << "what element do you want to delete: ";
        cin >> selection; // kunin yung gusto mong idelete ciniout ko nanga eh alam nyo nayan
        if (selection < 0 || selection >= arr.size()) // para di mo madelete yung imagination na element na wala naman sa array
        {                                             // wag kang delulu boy, di ka si sir apollo
            cout << "Hoi bawal yan!!" << endl;        // sabi konga bawal magdelete ng wala sa array
        }
        else // basta execute to pag di sya dumaan sa if
        {
            cout << "Successfully deleted " << arr[selection] << endl; // kase delulu ko sasabihing nadelete na
            arr.erase(arr.begin() + selection); // kahit dito sa line na to mismong idedelete
            cout << "list of array: \n"; // syempre i display ulit yung arrays
            for (int i = 0; i < arr.size(); i++) // alam nyo nayan
            {
                cout << '[' << i << "]: " << arr[i] << endl; // alam nyo na to uulitin kopa?
            }    
        }
    } // well, uulit ulit sya sa umpisa
    
    // gets?!!
    
    return 0;
}