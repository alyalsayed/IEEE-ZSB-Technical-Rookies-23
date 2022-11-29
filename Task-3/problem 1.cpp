#include <bits/stdc++.h>
using namespace std;
int absolute(int n1){
    if(n1>=0) 
        return n1;
    else
       return -1*n1;
}
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int main_dig = 0, sec_dig = 0;
 
    for (int i = 0; i < n; i++)
        main_dig+=arr[i][i];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if (i == n - j - 1)
                sec_dig += arr[i][j];
        }
    }
    cout<<absolute(main_dig - sec_dig);
    return 0;
    
}