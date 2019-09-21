#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(25);
    v.push_back(50);
    int val;

    while(cin>>val)
    {
        int arr[10][10000];
        for(int i=0;i<v.size();i++)
            arr[i][0]=1;

        for(int i=0;i<v.size();i++){
                for(int j=1;j<=val;j++){
                    if(i==0 && j<v[i])
                    {
                        arr[i][j]=0;
                    }

                    else if(i==0 && j>=v[i])
                    {
                        arr[i][j]=arr[i][j-v[i]];
                    }

                    else

                    {
                        if(j<v[i])
                        {
                            arr[i][j]=arr[i-1][j];
                        }

                        else

                        {
                            arr[i][j]=arr[i-1][j]+arr[i][j-v[i]];
                        }
                    }
                }
        }

        cout<<arr[v.size()-1][val]<<endl;

    }
}
