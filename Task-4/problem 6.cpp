#include<bits/stdc++.h>
using namespace std;

int solve(int n,int count)
{
	if(n==0)
		return 0;
	count++;

	int arr[4];//convert number to array af integers
    for (int i = 0; i < 4; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    sort(arr, arr + 4);
    int asc = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0] * 1;

    int dsc = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3] * 1;

    int ans = abs(asc - dsc);
    if(ans == 6174){
        return count;
    }
    else{
        return solve(ans,count);
}
}
int main()
{
	int n;
	cin>>n;
    cout << solve(n ,0) << endl;
    return 0;
}
