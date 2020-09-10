//program to find the strength of a password where passwordstrength=3 means strongest 
//By: Ankit shrestha
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
    int i ;
    int passwordstrength=0;
    int len=0;
    char passwordtotest[40];
    printf("Make sure the password contains");
    printf(" an uppercase a number and a symbol of ! and &\n");
    printf("Enter your password:\t");
    scanf("%d",passwordtotest);
    len=sizeof(passwordtotest);

    for(i=0;i<=len;i++){
        if(isupper(passwordtotest[i])){
            printf("Password contains uppercase\n");
            passwordstrength++;
            break;

        }
    }

    for(i=0;i<=len;i++){
        if(isdigit(passwordtotest[i])){
            printf("passowrd contains number\n");
            passwordstrength++;
            break;
        }
    }

    for(i=0;i<=len;i++){
        if (passwordtotest[i]=='&'||passwordtotest[i]=='!'){
            printf("passoword contains symbol\n");
         } else
            {
               printf("it doesn't contain a symbol\n"); /* code */
            }
            
            passwordstrength++;
            break;
        }
    
    printf("password strength is:%d\n",passwordstrength);
    switch (passwordstrength)
    {
    case 1/* constant-expression */:
        printf("Your password is weak");/* code */
        break;
        case 2:printf("medium, try a stronger password");
        break;
        case 3:printf("strong. your password is good to go.");
    
    default:printf("error");
        break;
    }
    return 0;
}