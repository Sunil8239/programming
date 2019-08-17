#include <bits/stdc++.h>
using namespace std;

// Print Longest substring without repeating characters O(n^3)

bool distinct(char* s,int start,int end)
{

   int a[26];

   memset(a,0,26*sizeof(int));

   for(int i=start;i<=end;i++)
   {
   	   // cout<<s[i]<<endl;
   	  if(a[s[i]-'a']!=0)
   	   {

   	   	 return false;
   	   }

   	   else
   	   
   	   a[s[i]-'a']=1;
   	   
   }

   

   return true;
}


int main()
{

  int len=0;

  int k=false;

  char*s=(char*)malloc(1024*sizeof(char));

  string p;

  cout<<"enter the string: ";

  scanf("%[^\n]",s);

  s=(char*)realloc(s,strlen(s)+1);

  // cout<<"return: "<<s<<endl;

  int n=strlen(s);

  // cout<<"n: "<<n<<endl;
  int i,j,l;

  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)
     {
     	// cout<<"i: "<<i<<" "<<"j: "<<j<<endl;
 
        k=distinct(s,i,j);

        // // cout<<"k: "<<k<<endl;

        // cout<<5<<endl;

        if(k&&(j-i+1>len))
        {
        	 p="";

        	for(l=i;l<=j;l++)
        	{
        		p=p+s[l];
        	}

            len=j-i+1;

            // cout<<"p: "<<p<<endl;
        }


      

     }

  }

  cout<<"result "<<p;

  return 0;

}