#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i= 0; i<n-1; i++)
    {
        int minIdx = i;
        for(int j = i+1; j<n; j++)
        {
            if(nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }
        swap(nums[minIdx], nums[i]);

    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}