#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<1||n>9)
        cout<<"Invalid input";
    else if ((n*n)%10==n)
        cout<<"Automorphic Number";
    else
        cout<<"Not Automorphic Number";
    return 0;
}
