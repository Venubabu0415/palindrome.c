// Online C compiler to run C program online
#include <stdio.h>
int main() {
int n,temp,rev=0,rem;
printf("enter the number :");
scanf("%d",&n);
temp=n;
while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("the sum:%d",rev);
if(temp==rev){
    printf("\n%d is a palindrome number",temp);

}else{
    printf("%d is not a palindrome number",temp);
    
}
    return 0;
}
