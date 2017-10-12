#include <iostream>
using namespace std;

int example(int data){
    data += 1;
    return data;
}

int main()
{
    int real = 10;
    int test;
    
    test = example(real);
    if(test == real)
    {
        cout << "Equal" << endl;
    }
    else{
        cout << "Not equal" << endl;
    }
    return 0;
}