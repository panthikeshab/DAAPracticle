#include <iostream>
using namespace std; 
void linearsearch(int arr[],int n) 
	{
		
		int count,found,i;
		int key;

		int q;

		cout<<"How many numbers you want to search?\n";
		cin>>q;

		for(int it=1;it<=q;it++) 
		{
		
		cout<<"Enter the key to be searched?\n";
		cin>>key;
		count=0;
		found=0;

		for(i=0;i<n;i++)
			{
				count++; 
				
					if(arr[i]==key)
						{
							
							found=1;
							break;
							
						
						}
			}
						
	if(found==1)
		{
			cout<<"Present "<<count<<endl;


		}
	else
		{
			cout<<"Not Present "<<count<<endl;
		}

}
	}

	
int main()
{
	int n,i; 
	cin>>n;
	int arr[n];  
	for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}

					linearsearch(arr,n); 	
	return 0;
}
