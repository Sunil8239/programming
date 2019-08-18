#include <bits/stdc++.h>

using namespace std;

bool balanceparenth(string s)
{

  int n=s.size();

  char x;

  stack <char>p;

  if(s[0]==')'||s[0]=='}'||s[0]==']')
  	return false;

  for(int i=0;i<n;i++)
  {
     if(s[i]=='('||s[i]=='{'||s[i]=='[')
     	p.push(s[i]);

     else
     {

           switch(s[i])
           {
             case ')':
             
             if(p.empty())
             	return false;
             
             x=p.top();

             

             if(x=='{'||x=='[')
             	return false;

             if(x=='(')
             {
                p.pop();
                
              }
             
             break;

             case '}':

             if(p.empty())
             	return false;
             
             x=p.top();

             

             if(x=='('||x=='[')
             	return false;

             if(x=='{')
             {
                p.pop();
                
              }

             break;

             case ']':
             
             if(p.empty())
             	return false;

             x=p.top();

             

             if(x=='{'||x=='(')
             	return false;

             if(x=='[')
             {
                p.pop();
               
              }


              break;








           }


     }
     
  }


   if(p.empty())
   	return true;

   else
   	return false;

}



int main()
{

   //string s="[()]{}{[()()]()}";
   //string s="[]";
   string s="[(])";
   bool x;

   x=balanceparenth(s);

   

   if(x)
   	cout<<"is balanced";

   else
   	cout<<"not balanced";

}