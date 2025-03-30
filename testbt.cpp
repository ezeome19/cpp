#include <iostream>
using namespace std;
int n=1, a, b, p=0, m[100]={};
char opr[1000];  //string
char var='p';

void clearInputBuffer(){
    cin.clear;
    cin.ignore(1000, '\n');
}
int main(){
    cout<< "To do list\n";
    while (var != 'x')
    {
        if (var =='p')
        {
            cout<<"enter \n"<<n<<". ";
            cin >> opr[n];  //getline(cin, opr[n]);
            clearInputBuffer(); //from A.I
            p=n+1, b=n, n++; 
            cout<< "enter... e to edit entries ,... x to exit ,... o to mark as done or ...  p to continue:  ";
            cin>> var;
        }
        else if(var == 'o') 
        {
            cout<<"enter no you'd like to mark as done.\n";
            cin>> n;
            a=n, n=b, m[a]=n, n++;
            cout<< "enter... e to edit entries ,... x to exit ,... o to mark as done or ... p to continue:  ";
            cin>> var;
        }   
        else if(var == 'e')
        {
            cout<< "enter no you'd like to change\n";
            cin>> n>> opr[n];  //getline(cin, opr[n]);
            cout<< "enter... e to edit entries ,... x to exit ,... o to mark as done or ... p to continue:  ";
            cin>> var;
            n=b, n++;
        }   
    }
    cout<<"To do list\n";
    for(n=1; n<p; n++){
        a=1;
        cout<< n <<". "<<opr[n];
        while(a<p){
            if (m[n]==a){
                cout<<"...done";
            }
            a++;
        }
        cout<<endl;
    }       
    return 0;
}