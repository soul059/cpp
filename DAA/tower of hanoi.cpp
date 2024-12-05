#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int x;

void tower(int n,char s,char h,char d)
{
    if(n==0) return;
    tower(n-1,s,d,h);
    // cout<<s<<" --> "<<d<<"\n";
    x++;
    tower(n-1,h,s,d);
    return;
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    tower(n,'A','B','C');

    cout<<x;
    return 0;
}