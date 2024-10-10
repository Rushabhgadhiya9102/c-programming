#include <stdio.h>

// ------------------- CUSTOM FUNCTIONS ---------------------

float addition(float a, float b){ 			// ADDITION FUNCTION

    float result = a + b;
    printf("\nthe addition of the %.2f and %.2f : %.2f\n",a,b,result);

    return 0;
}

float subtraction(float a, float b){ 		// SUBTRACTION FUUNCTION

    float result = a - b;
    printf("\nthe subtraction of the %.2f and %.2f : %.2f\n",a,b,result);

    return 0;
}

float multiplication(float a, float b){ 	// MULTIPLICATION FUNCTION

    float result = a * b;
    printf("\nthe multiplication of the %.2f and %.2f : %.2f\n",a,b,result);

    return 0;
}

float division(float a, float b){			// DIVISION FUNCTION

    float result = a / b;
    printf("\nthe division of the %.2f and %.2f : %.2f\n",a,b,result);

    return 0;
}

float modulas(float a, float b){			// MODULAS FUNCTION

    float result = (int)a % (int)b;
    printf("\nthe mod of the %.2f and %.2f : %.2f\n",a,b,result);

    return 0;
}

// ----------------- MAIN CODE FUNCTION ---------------------


int main (){

    float num1, num2;  			// DECLARE THE VARIABLES
    int op;
    char button;

    printf("\t\t welcome\n\n");

    printf("press 's' to start: ");   		// ENTER THE S TO START
    scanf("%c",&button);

    if(button == 's'){					// IF THE CONDITION IS MATCH THEN CALCULATOR IS START OR ELSE EXIT

        while(1){   					// WHILE LOOP WITH 1 WHICH MEANS ALWAYS TRUE

            printf("\n\npress 1 for addition \n");   			
            printf("press 2 for subtraction \n");
            printf("press 3 for multiplication\n");
            printf("press 4 for division\n");
            printf("press 5 for modulas\n");
            printf("press 0 for exit\n");

            printf("\nenter the operator: ");			//ENTER THE OPERATOR CHOICE
            scanf("%d",&op);

            if(op == 0){
                printf("\n\t\tGood bye\n\n");      // PRESS 0 TO EXIT
                break;
            }

           printf("\nenter the first number: ");		// ENTER FIRST NUM
           scanf("%f",&num1);

           printf("\nenter the second number: ");		// ENTER SECOND NUM
           scanf("%f",&num2);
           
            switch(op){				// SWITCH CASE FOR OPERATION AND OUTPUT

                case 1:
                    addition(num1,num2);		// ADD FUNCTION CALL
                    break;

                case 2:
                    subtraction(num1,num2);		// SUB FUNCTION CALL
                    break;

                case 3:
                    multiplication(num1,num2); 		// MULTIPLICATION FUNCTION CALL
                    break;

                case 4:
                    division(num1,num2);		// DIVISION FUNCTION CALL
                    break;

                case 5:
                    modulas(num1,num2);			// MODULAS FUNCTION CALL
                    break;

                default:
                    printf("wrong choice");    // DEFAULT 
                    break;    
            }

        }

    }else {
        printf("\n\tsorry couldn't able to start");		// EXIT THE CALCULATOR
    }
    
    return 0;
}
