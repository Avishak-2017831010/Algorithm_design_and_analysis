#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val,n;
    vector<int>v;
    cin>>val>>n;
    int arr[100][100];

    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            arr[i][j]=100000;


    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
       v.push_back(k);
    }
    for(int i=0;i<v.size();i++)
        arr[i][0]=0;


    for(int i=0;i<v.size();i++){
        for(int j=1;j<=val;j++){

                if(j-v[i]>=0)
                {
                    if(i==0)
                        arr[i][j]=1+min(arr[i][j-v[i]],arr[i][j]);
                    else{
                        arr[i][j]=min(arr[i-1][j],1+arr[i][j-v[i]]);
                    }
                }

                else
                {
                    if(i>0)
                        arr[i][j]=arr[i-1][j];
                }
        }
    }


    for(int i=0;i<v.size();i++){
        for(int j=0;j<=val;j++){

                cout<<arr[i][j]<<' ';
        }

        cout<<endl;
    }


}
