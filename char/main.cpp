#include <iostream>

using namespace std;

int main()
{
    char C;
    cin>>C;

   if(C>=65 &&C<=90)
    C=C+32;
   else
         C=C-32;
    cout<<C;
    return 0;
}
