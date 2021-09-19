#include <stdio.h>
#include<string.h>
# define ch char

ch answer[1000000]="0";
ch a[100000]="0";
ch b[100000]="1";
int getcharval(const char *s, int idx) {
    if (idx < strlen(s))
        return s[ strlen(s)-idx-1 ] - 48; 
    return 0;
    
}
int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n==0)
    printf("%s",a);
    else if(n==1)
    printf("%s",b);
    else{
        for(int j=2;j<=n;j++){
            int i, wa=strlen(a), wb=strlen(b), width, sum, carry=0;
    width = wa > wb ? wa : wb; 
  //  printf("new\n");
    for( i=0; i<width; i++){
        int ca = getcharval(a, i); 
        int cb = getcharval(b, i); 
      //  printf("%d %d\n", ca, cb);
        sum = ca + cb + carry;
      //  printf("%d\n",sum);
        carry = 0;
        if(sum > 9){ 
            carry = 1;
            sum-=10;}
          
        answer[i] = sum+48;
    }   
    if(carry) answer[i++] = carry+48;
    
   for (i = 0; i < strlen(answer) / 2; i++) {
        char t = answer[i];
        answer[i] = answer[strlen(answer) - i - 1]; 
        answer[strlen(answer) - i - 1] = t;
    }     


     for(int i=0;b[i]!='\0';i++)
     a[i]=b[i];
     for(int i=0;answer[i]!='\0';i++)
     b[i]=answer[i];
  
        }
    }
    printf("n th fibonacci number \n\n");
    printf("%s",answer);
}

