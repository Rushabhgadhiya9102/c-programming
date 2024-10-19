#include <stdio.h>

struct students{		// STRUCTURE IS CREATED
	
	int roll_no;
	char name[50];
	int chemistry;
	int maths;
	int physics;
	
};

int main (){
	
	int i,total_marks;		// DECALRE THE VARIABLE
	struct students s1[5];		// CALLING THE STRUCTURE S1

	// ------------------------ FIRST LOOP FOR INPUT ------------------------
	 
	for (i=0; i<5; i++){	
		
		printf("\n\nenter the student detail (%d)\n",i+1);
		printf("Roll_no: ");
		scanf("%d",&s1[i].roll_no);		// ENTER THE ROLL NO
		
		printf("Name: ");
		scanf("%s",&s1[i].name);		// ENTER THE NAME
		
		printf("Chemistry: ");
		scanf("%d",&s1[i].chemistry);		// ENTER THE SUBJECT MARKS
		
		printf("Maths: ");
		scanf("%d",&s1[i].maths);		// ENTER THE SUBJECT MARKS
		
		printf("Physics: ");
		scanf("%d",&s1[i].physics);		// ENTER THE SUBJECT MARKS
	}
	
	printf("\n\nOutput\n\n");

	// ------------------------ SECOND LOOP FOR OUTPUT ------------------------
	
	for(i=0; i<5; i++){
		
		printf("%s (%d)\n",s1[i].name, s1[i].roll_no);		// PRINT NAME AND ROLL NO.
		
		printf("Chemistry: %d\n", s1[i].chemistry);			// PRINT SUBJECT MARKS
		
		printf("Maths: %d\n", s1[i].maths);					// PRINT SUBJECT MARKS
		
		printf("Physics: %d\n", s1[i].physics);				// PRINT SUBJECT MARKS
		
		total_marks = s1[i].chemistry + s1[i].maths + s1[i].physics;		// TOTAL OF SUBJECT MARKS
		
		printf("Total: %d/300\n",total_marks); 		// PRINT THE TOTAL
			
		printf("Percentage: %.2f%%\n\n",(float)total_marks/300*100);		// PRINT THE PERCENTAGE
	}
	
	return 0;
}
