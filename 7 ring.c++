#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
            
            int a,b,c;
        
        cin >> a>>b;
        c=a*b;

            if(c>9999 && c<=99999)
            {
                printf("YES\n");
            }else {
                printf("NO\n");
            }
            
        
        
    }
 
    return 0;
}
