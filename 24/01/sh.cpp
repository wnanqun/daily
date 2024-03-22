#include <iostream>
using namespace std;

int main()
{
    float a=90.0;
    int num=10;
    while(num>0)
    {
        a=180-((180-a)/2);
        num--;
    }
    cout<<a<<endl;
}