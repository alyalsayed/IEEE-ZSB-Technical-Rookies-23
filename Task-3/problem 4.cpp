// C++ program to find minimum number of page
// turns to reach a page
#include<bits/stdc++.h>
using namespace std;
 
int min_turn(int n, int p)
{
    if (n%2 == 0)
        n++;
   
    return min((p + 1)/2, (n - p + 1)/2);
}
 
// Driven Program
int main()
{
    int n,p;
    cin>>n>>p;
    cout << min_turn(n,p) << endl;
    return 0;
}