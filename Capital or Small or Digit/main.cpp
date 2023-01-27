#include <iostream>

using namespace std;

int main()
{
    char C;
    cin>>C;
    if(C>=48 &&C<=57){
        cout<<"IS DIGIT" ;
    }
    else{
        if(C>=65 &&C<=90)
            cout<< "ALPHA\n"<<"IS CAPITAL";
        if(C>=97 &&C<=122)
            cout<< "IS SMALL" ;
    }
    return 0;
}
