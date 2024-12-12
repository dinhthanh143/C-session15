#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
int main(){
char str[100];
printf("moi nhap chuoi: ");
fgets(str,sizeof(str),stdin);
int i;
int size=strlen(str);
for(i=0;i<size;i++){
if (str[i-1]==' ' && str[i]!=' '){
str[i]=toupper(str[i]);
}
}

if(str[0]!=' '){
	str[0]=toupper(str[0]);
}

printf("%s", str);
   return 0;
}

