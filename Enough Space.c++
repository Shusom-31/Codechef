
#include <iostream>
using namespace std;
int main (){
  int n ;
 cin >> n;
 while (n--)
 {
   int m,k,r;
   cin >>m>>k>>r;
  
   
    if (k+(r*2)<=m)
    {
        cout<<"YES"<<endl;

    }else{
      cout<<"NO"<<endl;
    }
    
 }
 
  return 0;
}
