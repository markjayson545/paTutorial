#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class storage {
    private: 
    /* Learned that vector is easy :)
    it is easier than allocating and deallocating memory
    using array, well i didn't taught myself that,
    cause i don't want to deal with such long process */
    vector <int> digits;

    void storeNseparatNum(long long int input){
        // conv to string
        string numString = to_string(input);
        // conv to integer and add to the vector, separate digits
        for (char digitChar : numString)
        {
            int digit = digitChar - '0';
            digits.push_back(digit);
        }
    }

    void resetDigits(){
        digits.clear();
        digits.shrink_to_fit();
    }
    
    public:
    // functional
    int calculateBintoDec(int results = 0){
        int size = digits.size();
        size--;
        for (int i = 0; i < digits.size(); i++)
        {
            results += pow(digits[i] * 2, size);
            size--;
        }
        results--;
        return results;
    }

    void runResetDigits(){
        resetDigits();
    }

    void runStoreNum(long long int userIn){
        storeNseparatNum(userIn);
    }
    // for debugging purposes only
    void printVector(){
        for (int i = 0; i < digits.size(); i++)
        {
            cout << digits[i] << endl;
        }
    }

};

class processing: public storage{
    private:
    // dec_any functional
    void dec_any(long long int dec, int divisor, bool hex){
        long long int decimal = dec;
        int qoutient, mod;
        qoutient = decimal;
        vector <string> hexString;
        vector <long long int> converted;

        do
        {
            mod = qoutient % divisor;
            qoutient = decimal / divisor;
            if (hex == true)
            {
                switch (mod)
                {
                case 10:
                    hexString.push_back("A");
                    break;
                case 11:
                    hexString.push_back("B");
                    break;
                case 12:
                    hexString.push_back("C");
                    break;
                case 13:
                    hexString.push_back("D");
                    break;
                case 14:
                    hexString.push_back("E");
                    break;
                case 15:
                    hexString.push_back("F");
                    break;
                default:
                    hexString.push_back(to_string(mod));
                    break;
                }
            }
            else
            {
                converted.push_back(mod);
            }
            decimal = qoutient;
        } while (qoutient != 0);
            if (hex == true)
            {
                for (long long int i = hexString.size(); i > 0; i--)
                {
                    cout << hexString[i - 1];
                }
                hexString.clear();
                hexString.shrink_to_fit();
            }
            else
            {
                for (long long int i = converted.size(); i > 0; i--)
                {
                    cout << converted[i - 1];
                }
                converted.clear();
                converted.shrink_to_fit();
            }           
        }

    /* ALREADY TESTED, IMPLEMENTATION NEEDED
    int countDigits(int num){
    int count = 0;
    while (num != 0)
    {
    num = num / 10;
    count++;
    }
    return count;
    } 
    for binary results
 */

    void any_dec(string any, int muliplier, bool isHex){
        vector <long long int> results;
        long long int num;
        if (isHex == false)
        {
            
        }
        
        
        
    }

    public:

    /* int getCount(int n){
        int res = countDigits(n);
        return res;
    } */

    void runDec_any(long long int userInput, int divisor, bool hex){
        dec_any(userInput, divisor, hex);
    }

};
class converters: public processing {
    private: 

    void dec_bin(long long int userInput){
        cout << "Decimal in Binary: ";
        runDec_any(userInput, 2, false);
        /*int decimal = userInput;
        int qoutient, mod;
        qoutient = decimal;
        do
        {
            mod = qoutient % 2;
            qoutient = decimal / 2;
            if (mod < 1)
            {
                cout << '1';
            }
            else {
                cout << '0';
            }
            decimal = qoutient;
            
        } while (qoutient != 0); */
        }
    void bin_dec(long long int userInput){
        runStoreNum(userInput);
        cout << "Binary in Decimal: " << calculateBintoDec();
        }
    void dec_oct(long long int userInput){
        runDec_any(userInput, 8, false);
        }
    void oct_dec(){

        }
    void dec_hex(long long int userInput){
        runDec_any(userInput, 16, true);
        }
    void hex_dec(){

        }
    void runConv(int sel){
        long long int userInt;
        switch (sel)
        {
        case 1:
            cout << "Enter Decimal: ";
            cin >> userInt;
            dec_bin(userInt);
            break;
        case 2:
            cout << "Enter Binary: ";
            cin >> userInt;
            bin_dec(userInt);
            break;
        case 3: 
            cout << "Enter Decimal: ";
            cin >> userInt;
            dec_oct(userInt);
            break;
        case 4: 

            break;
        case 5:
            cout << "Enter Decimal: ";
            cin >> userInt;
            dec_hex(userInt);
            break;
        case 6:

            break;

        default:
            cout << "Invalid Selection";
            break;
        }

    }
    public:
    void runSel(int selection) {
    runConv(selection);
    }

};

class miscellaneous: public converters {
    private: 

    void menu(){
        cout << "Select Converter: " << endl;
        cout << "1. Decimal to Binary" << endl;
        cout << "2. Binary to Decimal" << endl;
        cout << "3. Decimal to Octal" << endl;
        cout << "4. Octal to Decimal" << endl;
        cout << "5. Decimal to Hex" << endl;
        cout << "6. Hex to Decimal" << endl;
        cout << "7. Exit"<< endl;
        cout << "Selection: ";
    }

    public: 
    void print_menu(){
        menu();
    };
};

int main(){
    miscellaneous miscell;
    int sel;
    while ("true")
    {
    cout << endl << "Number System Converter" << endl;
    miscell.print_menu();
    cin >> sel;
    if (sel == 7)
    {
        break;
    }
    miscell.runSel(sel);
    cout << endl;
    system("pause");
    system("cls");
    }

    return 0;
}