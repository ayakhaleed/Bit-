#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int x=0;
    string input;
    for(int  i=0;i<n;i++)
    {
        cin>>input;
        if(input=="++x"||input=="x++")
        {
            x++;
        }
        else if(input=="x--"||input=="--x")
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
