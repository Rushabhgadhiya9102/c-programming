#include <stdio.h>

struct std {
	
	int stu_id;
 	char stu_name[50];
 	int stu_age[2];
 	char stu_course[50];
 	char stu_city[30];
 	int stu_standard;
 	char stu_school[50];
};

void main (){
	
	int i, num;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	struct std s1[num];
	
	for(i=0; i<num; i++){
		
		printf("\nstu id: ");
		scanf("%d",&s1[i].stu_id);
		
		printf("stu name: ");
		scanf("%s",&s1[i].stu_name);
		
		printf("stu age: ");
		scanf("%d",&s1[i].stu_age);
		
		printf("stu course: ");
		scanf("%s",&s1[i].stu_course);
		
		printf("stu city: ");
		scanf("%s",&s1[i].stu_city);
		
		printf("stu standard: ");
		scanf("%d",&s1[i].stu_standard);
		
		printf("stu school: ");
		scanf("%s",&s1[i].stu_school);
		
	}
	
		for(i=0; i<num; i++){
		
		printf("\nstu_id: %d",s1[i].stu_id);
		
		printf("stu_name: %s",s1[i].stu_name);
		
		printf("stu_age: %d",s1[i].stu_age);
		
		printf("stu_course: %s",s1[i].stu_course);
		
		printf("stu_city: %s",s1[i].stu_city);
		
		printf("stu_standart: %d",s1[i].stu_standard);
		
		printf("stu_school: %s",s1[i].stu_school);
		
	}
}
