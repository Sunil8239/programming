#include<bits/stdc++.h>

using namespace std;

// Print Longest substring without repeating characters O(n)

string longestsubstr(string str)
{
  int n= str.size();

  string ans="";

  int st=0; //starting index of largest substring
  int curr=0;  //starting index of current substring

  int maxlen=0;

  unordered_map<char,int>pos;


  for(int i=0;i<n;i++)
  {

  	if(pos.find(str[i])==pos.end())
      pos[str[i]]=i;

    else

    {
    	
      if(i-curr>maxlen)
    	{
    		maxlen=i-curr;
    		
        st=curr;

    		if(pos[str[i]]<st)       //check repeated char is at left side or right side
    			maxlen=maxlen+1;
      }

    		
    			curr=i;
    }
     
  }
 
   cout<<"st: "<<st<<"  maxlen: "<<maxlen<<endl;

   for(int j=st;j<st+maxlen;j++)
   {
   	ans=ans+str[j];
   }

   return ans;
}



int main()
{
    string str="geeksforgeeks";

    //string str="AAAA";

    cout<<longestsubstr(str);

	return 0;
}