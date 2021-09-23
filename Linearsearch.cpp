#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key,count;
        float flag;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                flag=1;
                count=i;

            }
        }
        if (flag==1)
    cout<<"present"<<" "<<count<<endl;
    else
      cout<<"not present"<<" "<<count<<endl;
    }
}