#include<bits/stdc++.h>

#define MAX 500

using namespace std;

int mult(int res[],int size, int n)
{
   int sum=0;
   int carry=0;

   for(int i=2;i<=n;i++)
   {

    for(int j=0;j<size;j++)
    {

    	sum=carry+i*res[j];

    	res[j]=sum%10;

    	//cout<<"i:="<<i<<" a["<<j<<"]= "<<res[j]<<endl;

    	carry=sum/10;

    	

    	// if(carry>0&&(j+1)==size)
    	// {
    	// 	size++;
    	// 	res[j+1]=carry;
    	// 	cout<<"i:="<<i<<" a["<<j+1<<"]= "<<res[j+1]<<endl;
    	// 	break;
    	// }

    	
    }

      while(carry>0)  // because carry can be of 2,3 or may be of 4 digits 
      {
      	
      	res[size]=carry%10;
      	size++;
        //cout<<"i:="<<i<<" a["<<size-1<<"]= "<<res[size-1]<<endl;
      	carry=carry/10;

      }

     // carry=0;


   
   }

   // for(int i=size-1;i>=0;i--)
   // 	cout<<res[i];

     return size;

   


}

void factorial(int n)
{
   int res[MAX];

   int size=1;

   res[0]=1;

   size=mult(res,size,n);

    for(int i=size-1;i>=0;i--)
   	cout<<res[i];

   //cout<<size<<endl;
   // while(size--)
   // {
   //  	cout<<" s: "<<size<<endl;
   //  	cout<<res[size-1];
   // 	//size--;

   // }

   cout<<endl;



}

int main()
{

   int n;
   cin>>n;

  cout<<"fact("<<n<<")= ";
   factorial(n);



	return 0;
}