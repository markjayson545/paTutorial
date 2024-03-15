#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void displayNum();
void intersectArray();

vector <int> num = {10, 20, 30, 40, 50};

int main(){    
    int sel, modify, numb;
    bool loop = true;

    while (loop)
    {
        system("cls");
        displayNum();
            cout << "What do you want to do with the array? \n";
            cout << "1. Add \n";
            cout << "2. Remove \n";
            cout << "3. Modify \n";
            cout << "4. Intersect \n";
            cout << "5. Delete all \n";
            cout << "6. Display Memory Address \n";
            cout << "7. Exit \n";
            cout << "Selection: ";
            cin >> sel;
        switch (sel)
        {
                case 1:
                    system("cls");
                        cout << "What number do you want to add? \n";
                        cout << "Number: ";
                            cin >> modify;
                        num.push_back(modify);
                        cout << "Successfully added the number (" << modify << ") !!! \n";
                            displayNum();
                    system("pause");
                    break;
                case 2:
                    system("cls");
                        cout << "Which number do you want to remove? \n";
                            displayNum();
                        cout << "Selction: ";
                            cin >> numb;
                        cout << "Successfully removed element [" << numb << "]: " << num[numb] << endl;
                        num.erase(num.begin() + numb);
                            displayNum();
                    system("pause");
                    break;
                case 3: 
                    system("cls");
                        cout << "Which number do you want to modify? \n";
                            displayNum();
                        cout << "Selection: ";
                            cin >> numb;
                        cout << "Index [" << numb << "] is Selected!!! \n";
                        cout << "What number do you want to change it to? \n";
                        cout << "Number: ";
                            cin >> modify;
                        num[numb] = modify;
                        cout << "Index [" << numb << "] is changed to " << modify << endl;
                            displayNum();
                    system("pause");
                    break;
                case 4: 
                    system("cls");
                    intersectArray();
                    system("pause");
                    break;
                case 5:
                    char confirm;
                    system("cls");
                    cout << "Do you really want to delete all elements? Y/N";
                    cin >> confirm;
                    if (confirm == 'Y' || confirm == 'y')
                    {
                        cout << "Elements cleared successfully!!! \n";
                        num.clear();
                        num.shrink_to_fit();
                    }
                    else
                    {
                        cout << "No changes was made to the elements.";
                    }
                    system("pause");
                    break;
                case 6:
                system("cls");
                for (int i = 0; i < num.size(); i++)
                {
                    cout << "Index [" << i << "] " << &num[i] << endl;
                }
                system("pause");
                    break;
                case 7: 
                loop = false;
                    break;
                default:
                system("cls");
                cout << "Invalid Selection!!! \n";
                system("pause");
                    break;
        }
    }
    return 0;
}

void displayNum(){
    system("cls");
    cout << "List of Array: \n";
    for (int i = 0; i < num.size(); i++)
        {
            cout << "Index " << "[" << i << "]: " << num[i] << endl;
        }
}

void intersectArray(){
    int arr;
    vector <int> arr1;
    vector <int> arr2;
    
    cout << "Set 1: \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Index [" << i << "]: ";
            cin >> arr;
            arr1.push_back(arr);
        }
    cout << endl << "Set 2: \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Index [" << i << "]: ";
            cin >> arr;
            arr2.push_back(arr);
        }
        
    vector <int> v(arr1.size() + arr2.size());
    vector <int>::iterator it;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    it = set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), v.begin());

    v.resize(it - v.begin());

    cout << "Result: \n";
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << ' ' << *it << endl;
    }
}
