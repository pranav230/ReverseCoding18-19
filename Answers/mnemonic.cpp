//Pattern (count and say)
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility>


#define lli long long int
#define ui undigned int 


using namespace std;


string countnndSay(int n) 
{ 

	if (n == 1){	
        
        return "1";
    }
	
    if (n == 2)	 {
        
        return "11";
    }; 

	string str = "11"; 
	for (int i = 3; i<=n; i++) 
	{ 
		
		str += '$'; 
		int len = str.length(); 

		int cnt = 1; 
		string tmp = ""; 

		for (int j = 1; j < len; j++) 
		{  
			if (str[j] != str[j-1]){ 
				tmp += cnt + '0'; 
				tmp +=str[j-1]; 
				cnt = 1; 
			} 
			else 
                cnt++; 
		} 
		str = tmp; 

        cout<<str<<"\n";
	} 

	return str; 
} 

int main() 
{       
    int t;

    cout <<"Enter a number : ";
    cin>>t;

    cout<<1<<"\n"<<11<<"\n";
    countnndSay(t);
	return 0; 
} 
