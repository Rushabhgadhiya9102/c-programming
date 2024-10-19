#include <stdio.h>

int main (){
	
	int i;
	FILE *oddfile, *evenfile;
	
	oddfile = fopen("oddfile.txt","w");
	
	if(oddfile == NULL){
		printf("the file is empty or does not exist");
	}
	
	evenfile = fopen("evenfile.txt","w");
	
	if(evenfile == NULL){
		printf("the file is empty or does not exist");
	}
	
	for(i=50; i<=70; i++){
		
		if(i%2 == 0){
			fprintf(evenfile,"%d\n",i);
		}else{
			fprintf(oddfile,"%d\n",i);
		}
	}
	
	printf("the file is successfully created");
	
	return 0;
}
