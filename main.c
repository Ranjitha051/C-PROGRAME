#include<stdio.h>
#include<string.h>
int main()
{ char user[20],pass[20];
printf("username:");
scanf("%s",user);
printf("password:");
scanf("%s",pass);
if(strcmp(pass,"admin123")==0&&strlen(pass)>=8)
    printf("success!welcomr,%s.\n",user);
else
    printf("invalid password.\n");
return 0;
}

