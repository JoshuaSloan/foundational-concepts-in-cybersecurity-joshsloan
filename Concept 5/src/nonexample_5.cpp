#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
    short v1 = 0;
    long v2 = 0;
    bool flag = true;
    double input;
    while(flag)
    {
        cout << "Enter a number" << endl;
        cin >> input;
        if(input > 2147483646 || input < -2147483646)
        {
            cout << "Input too large, make smaller than 2147483647 or larger than -2147483647" << endl;
        }
        else
        {
            v1 = input;
            v2 = input;
            flag = false;
        }
    }
    v1 += 1;
    v2 += 1;
    cout << "Input stored as long\t input + 1 = " << v2 << endl;
    cout << "Input stored as short\t input + 1 = " << v1 << endl;
    return 0;
}