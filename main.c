#include<stdio.h>
#include<string.h>
int main() {
char dest[10];
char src[]="programming";
//use strncpy to avoid buffer overflow strncpy(dest,src,size of (dest)-1);
dest[sizeof(dest)-1]='\0';//ensure null terminate
printf("safely copied string:%s",dest);
}
