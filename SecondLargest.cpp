#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest = a[0];
    int secondLargest = -1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            secondlargest = largest;
            largest = a[i];

        }
        else if(a[i]<largest && a[i]>secondLargest){
            secondLargest=a[i];

        }
    }
    return secondLargest;
}
