
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define X first
#define Y second
#define setZero(array) memset((array), 0, sizeof (array))
#define setOne(array) memset((array), 1, sizeof (array))
#define setTrue(array) memset((array), true, sizeof (array))
#define setFalse(array) memset((array), false, sizeof (array))
#define ___ ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
typedef long long ll;
using namespace std; 
 
  
bool ischeck(string str1, string str2) 
{ 
    
    int n1 = str1.length(); 
    int n2 = str2.length(); 
  
   
    if (n1 != n2) 
        return false; 
  
   
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end()); 
  
  
    for (int i = 0; i < n1; i++) 
        if (str1[i] != str2[i]) 
            return false; 
  
    return true; 
} 
  

void inline solve(){
    string s;
    cin>>s;
    string mid=s;
    string snew="";
    int len=s.length();
    int q;
    cin>>q;
    int p=0;
    while(q--)
    {
        char c;
        int mag;
        cin>>c>>mag;
        
        if(c=='L')
        {
            p=p+mag;
            p=p%len;
            snew=snew+mid[p];
        }
        else
        {
        	p=(len+p+len-mag%len)%len;
        
                snew=snew+mid[p];
        }
    }
        
  // cout<<snew<<endl;
string substring="";
    int n=s.length();
    int count=0;
    for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) 
        {
            substring=substring+s.substr(i, len) ;
            //cout<<substring<<endl;
            if(ischeck(substring,snew))
            {
                count++;
                break;
            }
            substring="";
    }
    if(count==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
     
}

int main(){
    ___
    solve();
    return 0;
}
