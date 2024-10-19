#include <stdio.h>

struct employees {
	
	int emp_id;
 	char emp_name[50];
 	int emp_age[2];
 	char emp_role[50];
 	char emp_city[30];
 	char emp_experience[10];
	char emp_company_name[50];
};

void main (){
	
	int i, num;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	struct employees e1[num];
	
	for(i=0; i<num; i++){
		
		printf("\nemp id: ");
		scanf("%d",&e1[i].emp_id);
		
		printf("emp name: ");
		scanf("%s",&e1[i].emp_name);
		
		printf("emp age: ");
		scanf("%d",&e1[i].emp_age);
		
		printf("emp role: ");
		scanf("%s",&e1[i].emp_role);
		
		printf("emp city: ");
		scanf("%s",&e1[i].emp_city);
		
		printf("emp experience: ");
		scanf("%s",&e1[i].emp_experience);
		
		printf("emp company name: ");
		scanf("%s",&e1[i].emp_company_name);
		
	}
	
		for(i=0; i<num; i++){
		
		printf("\n\nemp_id: %d",e1[i].emp_id);
		
		printf("\nemp_name: %s",e1[i].emp_name);
		
		printf("\nemp_age: %d",e1[i].emp_age);
		
		printf("\nemp_role: %s",e1[i].emp_role);
		
		printf("\nemp_city: %s",e1[i].emp_city);
		
		printf("\nemp_experience: %s",e1[i].emp_experience);
		
		printf("\nemp_company_name: %s",e1[i].emp_company_name);
		
	}
}
