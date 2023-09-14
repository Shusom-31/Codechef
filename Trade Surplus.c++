#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int a,b,c,d,m;
	   scanf("%d%d%d%d",&a,&b,&c,&d);
	    m=(a-b)+(c-d);
	if(m<0){
	    printf("YES\n");
	}else{
	    printf("NO\n");
	}
	    
	   
	}
	return 0;
}
