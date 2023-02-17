#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

string pattern,checkS;
cout<<"Please Enter Any Character :";
cin>>pattern;
cout<<"Please Enter Any Character :";
cin>>checkS;

bool TRUE=true,FALSE=false;

bool dp[pattern.length()+1][checkS.length()+1];

dp[0][0]=TRUE;

for(int i=1;i<=checkS.length();i++)

 dp[0][i]=FALSE;

for(int i=1;i<=pattern.length();i++)

 if(pattern[i-1] == '*')

 dp[i][0]=dp[i-1][0];

 else

 dp[i][0]=FALSE;

 for(int i=1;i<=pattern.length();i++)

 {

 for(int j=1;j<=checkS.length();j++)

 {

 if(pattern[i-1] == checkS[j-1])

 dp[i][j]=dp[i-1][j-1];

 else if(pattern[i-1] == '?')

 dp[i][j]=dp[i-1][j-1];

 else if(pattern[i-1] == '*')

 dp[i][j]=dp[i-1][j]||dp[i][j-1];

 else if(pattern[i-1] == '+')

 {

 if(pattern[i-2] == checkS[j-1])

 {

 dp[i][j]=dp[i-1][j] or dp[i][j-1];

 }

 else

 {

 dp[i][j] =FALSE;

 }

 }

 else

 {

 dp[i][j] =FALSE;

 }

 }

 }

 // for(int i=1;i<=pattern.length();i++)

 // {

 // for(int j=1;j<=checkS.length();j++)

 // {

 // cout<<dp[i][j]<<” “;

 // }

 // cout<<endl;

 // }

 if(dp[pattern.length()][checkS.length()])

 cout<<"True";

 else

 cout<<"False";

}
