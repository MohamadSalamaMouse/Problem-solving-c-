#include <iostream>

using namespace std;

int main()
{
    long long A,B,Max,Min;
    cin>>A>>B;
    if(A>=B){
        Max=A;
        Min=B;
    }
    else
    {
        Max=B;
        Min=A;
    }
    if(Max%Min==0)
        cout<<"Multiples";
    else
        cout<<"No Multiples" ;
    return 0;
}
