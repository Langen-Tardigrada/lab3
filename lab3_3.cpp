#include<iostream>
using namespace std;
int main()
{
    float x = 2, y = 69;
    float i = x, ans = 0;
    while(i<=y){
        ans+=1/i;
        i = i+1;

    }
    cout<<"1/2+.....+1/69 = "<<ans;
    return 0;
}
