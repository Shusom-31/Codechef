
#include <iostream>
using namespace std;
int main (){
  int n;
 cin >> n;
 while (n--)
 {
   int m;
   cin >>m;
    
   
    if (m<=3)
    {
        cout<<"BRONZE\n"<<endl;

    }else if(3> m || m<=6){
      cout<<"SILVER\n"<<endl;
    }else if (m>6){
        cout<<"GOLD\n"<<endl;
    }
    
 }
 
  return 0;
}
