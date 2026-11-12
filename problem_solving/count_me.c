#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int div2=0;
    int div3=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0 ){ 
           div2++;  
        }
        else if(a[i]%3==0 ){ 
            div3++;  
         }     
    }
    printf("%d %d\n",div2,div3);
    return 0;
}
