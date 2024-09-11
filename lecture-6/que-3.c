#include <stdio.h>

main(){
	
	int maths, english, science, avg;
	
	printf("enter the marks of maths :");
	scanf("%d",&maths);
	
	printf("enter the marks of english :");
	scanf("%d",&english);
	
	printf("enter the marks of science :");
	scanf("%d",&science);
	
	avg = (maths + english + science)/3;
	
	if(avg>80 && avg<90){
		printf("Excellent performance",avg);
	}else if(avg>70 && avg<80){
		printf("Very good perfonmance",avg);
	}else if(avg>50 && avg<60){
		printf("Good performance",avg);
	}else if(avg>40 && avg<50){
		printf("Need to work hard",avg);
	}else{
		printf("Try your luck next year",avg);
	}
}
