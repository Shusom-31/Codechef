#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int a,b,c,x;
	    cin >>a>>b>>c>>x;
	    if(a+b>=x || a+c>=x || b+c>=x){
	        
	        printf("YES\n");
	        
	        
	    }else{
	        
	        printf("NO\n");
	    }
	    
	}
	
	return 0;
}
