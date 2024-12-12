#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	
	int count,exist;
	int i,j,k;
	char str[]="hello kitty";
	printf("%s \n", str);
	int size=strlen(str);
	for(i=0;i<size;i++){
	    count=0;
	    exist=0;
	    if(str[i]==' '){
		continue;
	}
	for(k=i+1;k<size;k++){
		if(str[k]==str[i]){
			exist++;
		}	
	}
	
	
	for(j=0;j<size;j++){
		if(str[j]==str[i]){
		count++;
		
		}
	}
	if (exist==0){
			printf("%c:%d\n",str[i],count);	
	}

	}
	
	
	return 0;	
}

