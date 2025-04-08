#include <iostream>
using namespace std;

float ch_set(){
    char opr;
    float num, var, result;
    cin>> result >> opr ;
    while (opr != '='){
        cin>> num;
        if (opr == '+'){
            result += num;
            cin>> opr;
        }        
        else if (opr =='-')
        {
            result -= num;
            cin>> opr;
        }
        else if (opr == '/')
        {
            result /= num;
            cin>> opr;
        }
        else if (opr == 'x')
        {
            result *= num;
            cin>> opr;
        }
    }
    return (result);
}

int main()
{
    float result = ch_set();
    cout<< result<<endl;
    return 0;
}
