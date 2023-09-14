#include<stdio.h>
int main(){

 int t;
     scanf("%d",&t);
     
    while(t--)
       {
       int n;
     scanf("%d",&n);
     int ary[n];
     int c=0;
        
         for (int i = 0; i < n; i++){
         scanf("%d",&ary[i]);
         
         for (int k = i+1; k < n; k++)
         {
              
         
               if(ary[i]==ary[k])
    {
        c++;
    }
   
         }
    }
    

 printf("%d\n",n-c);
    }
    return 0;

}

