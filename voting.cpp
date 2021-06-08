#include<bits/stdc++.h>
using namespace std;
int eligible(int a){
    if(a>=18)
    {
        cout<<"You are eligible to Vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
}
int main()
{
    int a;
    cout<<"Enter your age";
    cin>>a;
    cout<<endl;
    eligible(a);
    return 0;
}