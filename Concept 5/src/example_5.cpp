#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
    
    short v1 = 0;
    long v2 = 0;
    double input;
    bool flag = true;
    bool var = true;
    while(flag)
    {
        cout << "Enter a number" << endl;
        cin >> input;
        if(input < 32766 && input > -32766)
        {
            v1 = input;
            v1 += 1;
            var = true;
            flag = false;
        }
        else if(input < 2147483646 && input > -2147483646)
        {
            v2 = input;
            v2 += 1;
            var = false;
            flag = false;
        }
        else
        {
            cout << "Input too large, make smaller than 2147483647 or larger than -2147483647" << endl;
        }
    }
    
    
    if(var == true)
    {
        cout << "Input stored as short\t input + 1 = " << v1 << endl;
    }
    else
    {
        cout << "Input stored as long\t input + 1 = " << v2 << endl;
    }
    
    
    return 0;
}