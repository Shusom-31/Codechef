#include <iostream>
using namespace std;

int main() {
	 int t;
	 std::cin >> t;
	 while(t--){
	     int x;
	     cin >>x;
	     if(x%2==0 && x%7==0){
	         printf("Alice\n");
	     }else if (x%2==1 && x%9==0)
	     {
	         printf("Bob\n");
	     }else{
	         printf("Charlie\n");
	     }
	     
	 }
	return 0;
}
