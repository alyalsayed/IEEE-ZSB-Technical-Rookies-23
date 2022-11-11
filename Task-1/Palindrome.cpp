#include <iostream>
#include <bits/stdc++.h>
 
void ispalindrome(int num);
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    ispalindrome(n);
 
}
 
void ispalindrome(int num){
    int digit=0,rev=0,n;
    n=num;
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if(n==rev){
        cout<<n<<endl;
        cout<<"YES";}
    else{
       cout<< rev<<endl;
       cout<<"NO";}
 
 
     }