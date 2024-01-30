#include<bits/stdc++.h>
using namespace std;

bool checkPalin(int n)
{
     //after getting n here in checkPalin(n),
     //we are creating a string and storing remainder to get the binary representation of the number n.
     string s="";
     
     while(n>0)
     {
          int a=n%2;
          s+=(a+'0');
          n=n/2;
     }

     //now we have a string s, notice after we reverse it then it is the actual binary representation of n,
     //here we are just storing it and then comparing to do less steps which are enough for our problem.

     //either we do reverse and get actual binary representation and then reverse to compare, 
     //so when we already have the reverse then we reverse it to get actual binary and just compare,
     //one less step, won't hurt.

     //storing the revese 
     string str=s;

     //reverse the actual string to get binary representation.
     reverse(s.begin(), s.end());

     //now, we have both reverse and actual string, 
     //lets compare to check if the string is palindrome or not.
     if(str==s) return true;
     else return false;
}

bool checkOdd(int n)
{
     //checks if it is even, if yes return false,
     if(n%2==0) return false;
     //if it is odd then pass it to checkPalin(n) function for checking whether it's binary representation is palindrome or not.
     else 
     {
        if(checkPalin(n)) return true;
        else return false;
     }
}

int main()
{
     int n;
     cin>>n;

     //passing the number to check if it is odd or not.
     //In checkOdd(n) function if it is odd then pass the number to checkPalin(n) for checking palindrome,
     //if it is not odd then it returns false.
     if(!checkOdd(n)) cout<<"NO";
     else cout<<"YES";
     
     return 0;
}
