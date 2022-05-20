#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,profit,minElementIndex;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   int lsf = INT_MAX;         //least so far
        int op = 0;           //overall profit
        int pist = 0;         //profit if sold today
        
        for(int i = 0; i < n; i++){
            if(arr[i] < lsf){
                lsf = arr[i];
            }
            pist = arr[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        cout<<"Max Profit:"<<op<<endl;
}
