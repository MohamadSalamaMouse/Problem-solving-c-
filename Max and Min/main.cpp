#include <iostream>

using namespace std;

int main()
{
    long long A,B,C,Max,Min;
    cin>>A>>B>>C;
    if(A>=B && A>=C){
        Max=A;
        if (B>=C)
            Min=C;
        else
            Min=B;
    }
     if(B>=A && B>=C){
        Max=B;
        if (A>=C)
            Min=C;
        else
            Min=A;
    }
    if(C>=A && C>=B){
        Max=C;
        if (A>=B)
            Min=B;
        else
            Min=A;
    }
    cout<<Min<<" "<<Max;
    return 0;
}
