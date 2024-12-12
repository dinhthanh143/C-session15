#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char string[100];
	int i;
printf("moi nhap chuoi: ");
fgets(string,sizeof(string)/sizeof(char),stdin);
int size=strlen(string);
int count=0;
int characters=0;
int numbers=0;
int specials=0;
char temp[]=" ";

for(i=0;i<size;i++){
	if(string[i]>= '0' && string[i]<='9'&& string[i]!=temp[0]){
	numbers++;
	}else if(string[i]>= 'a' && string[i]<='z'&& string[i]!=temp[0] || string[i]>= 'A' && string[i]<='Z'&& string[i]!=temp[0]){
           characters++;
	}else {
		specials++;
	}
}

specials--; //loai bo phan tu la dau enter khi ket thuc nhap chuoi
printf("co %d ki tu la chu cai trong chuoi.\n", characters);
printf("co %d ki tu la so trong chuoi.\n", numbers);
printf("co %d ki tu la ki tu dac biet trong chuoi.\n", specials);
   return 0;
}

