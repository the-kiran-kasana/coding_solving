#include <bits/ stdc++.h>

using namespace std;

class solution{

public:
pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        pair<long long, long long>value;
        
        long long min=INT_MAX;
        long long max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(min>=a[i])
            {
                min=a[i];
            }
            if(max<=a[i])
            {
                max=a[i];
            }
        }
        value.first=min;
        value.second=max;
        
        return value;
        
    }
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////

public:
    string reverseWord(string str)
    {
    //   string temp="";
    //   int n=str.length();
    //   for(int i=n;i>=0;i--)
    //   {
    //       temp=temp+str[i];
    //   }
       
    //   return temp;
    
    std::reverse(str.begin(), str.end());
     return str;
     
    
    }