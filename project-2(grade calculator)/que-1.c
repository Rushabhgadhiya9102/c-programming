#include <stdio.h>
main()
{
  float fmarks;  // fmarks = FLOAT VARIABLE
  int marks;     // marks = INTEGER VARIABLE
  char grade;    // grade = CHARACTER VARIABLE
  
  printf("Enter your score: ");  // ENTER FLOATING VALUE
  scanf("%f",&fmarks);
  
  marks=(int)fmarks; // FLOAT CONVERT INTO INTEGER
  
  grade = (marks<=100 && marks>=90)?'A' : (marks<=89 && marks>=80)? 'B' : (marks<=79 && marks>=70)? 'C' : (marks<=69 && marks>=60)? 'D' : (marks<=59 && marks>=40)? 'E' : (marks<=39 && marks>=20)? 'F' : 'F';
  
  printf("Your grade is %c\n", grade); // PRINT THE GRADE BASED ON MARKS
  
  switch(grade){
  	
  	case'A':
  	printf("Excellent Work\n"); // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	case'B':
  	printf("Well Done\n");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	case'C':
  	printf("Good Work\n");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	case'D':
  	printf("You Passed,but you could do better\n");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	case'E':
  	printf("Need to work hard\n");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	case'F':
  	printf("You have failed the examination");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  	
  	default:
  	printf("invalid grade\n");  // PRINT THE MESSAGE BASED ON GRADE
  	break;
  } 
  
  // ELIGIBILITY CHECK BASED ON GRADE (A TO D)
  
  if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
  	printf("Congratulations! You are eligible for the next level");
  }else{
  	printf("Please try your luck next time");
  }
   
}
