#include <stdio.h>

int main(){
char str[100];
int length=0,i;

printf("enter a string");
scanf("%s",str);

while(str[length]!='\0'){
length++;
}

printf("length of string=%d\n",length);

printf("reverse string=");
for (i=length-1;i>=0;i--){
printf("%c",str[i]);
}
printf("\n");

return 0;
}
