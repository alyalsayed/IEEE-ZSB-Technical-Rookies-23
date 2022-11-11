/* A program to calculate sum
 * of numbers in a list
 * created by Aly Alsayed
 * */
#include<bits/stdc++.h>
using namespace std;
 int sum1(int arr[],int n){
     int sum=0;
     for(int i=0;i<n;i++ ){
         sum+=arr[i];
     }
     return sum;
 }
 int sum2(int arr[],int n){
    int sum=0,i=0;
     while(i<n){
         sum+=arr[i];
         i++;
     }
     return sum;
 }
 int sum3(int arr[],int n){
     if(n==0)
         return 0;
    else
        return arr[n-1]+sum3(arr,n-1);
 }
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++ )
       cin>>arr[i];
   cout<<sum1(arr,n)<<endl;
   cout<<sum2(arr,n)<<endl;
   cout<<sum3(arr,n)<<endl;

}
   

