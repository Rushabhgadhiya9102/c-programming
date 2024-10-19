#include <stdio.h>

struct students{
	
	int roll_no;
	char name[50];
	int chemistry;
	int maths;
	int physics;
	
};

int main (){
	
	int i,total_marks;
	struct students s1;
	 
	for (i=0; i<5; i++){
		
		printf("\n\nenter the student detail (%d)\n",i+1);
		printf("Roll_no: ");
		scanf("%d",&s1.roll_no);
		
		printf("Name: ");
		scanf("%s",&s1.name[i]);
		
		printf("Chemistry: ");
		scanf("%d",&s1.chemistry);
		
		printf("Maths: ");
		scanf("%d",&s1.maths);
		
		printf("Physics: ");
		scanf("%d",&s1.physics);
	}
	
	printf("\n\nOutput\n\n");
	
	for(i=0; i<5; i++){
		
		printf("%s (%d)\n",s1.name[i], s1.roll_no);
		
		printf("Chemistry: %d\n", s1.chemistry);
		
		printf("Maths: %d\n", s1.maths);
		
		printf("Physics: %d\n", s1.physics);
		
		total_marks = s1.chemistry + s1.maths + s1.physics;
		
		printf("Total = %d/300\n",total_marks);
		
		float percentage = total_marks/300*100;
		
		printf("Percentage = %.2f\n\n",percentage);
	}
	
	return 0;
}
