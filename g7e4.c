#import <stdio.h>

void getInput(float *, int *,  int *);
float readNumber(int *);
int getOperator(int *);
float plus1(float, float);
float minus1(float, float);
float multiply1(float, float);
float xor1(int, int); 
float and1(int, int);	
float or1(int, int);
float calculate(float, float, int *);
/*

Calculator.
Input: 2 operands, whole or decimal number ( 4,75 or 4.75 ) and an operator. Only accepts numbers in the 10nth base
Output: The calculations of the operands with the chosen operand. If bitwise operator is called with decimal, only 
outputs the whole part of the computation.
*/

int main() {

	float result;
	int error = 0;
	float numbers[2];
	int operator;

	getInput(numbers, &operator, &error);																// Receives the operators from keyboard and check for errors

	if (!error) {																						// If no errors occured, calls calculate with operand1, operand2 
		result = calculate(numbers[0], numbers[1], &operator);											// and the adress of operator and ptrints result
		printf("%.2f\n", result);
	}
	else if ( error == 1 )																				// Error received from readNumber
		printf("\nError: One of the operands isn't a number. Exiting...\n");
	else if ( error == 2 )
		printf("\nError: Invalid operator. Exiting...\n");												// Error received from getOperator
	else if ( error == 3 ) 
		printf("\nError: Division by zero. Exiting...\n");

	return 0;
}

/*
Accepts a pointer to the array of floats containing the allocation for the operators,
a pointer to the operands and pointers to the variables "operator" and "error" initiated in main()
*/
void getInput(float numbers[], int *operator, int *error) {

	printf("Operator 1:\n");
	numbers[0] = readNumber(error);																		// First operand, calls with pointer to error to be able to update
																										// the error in main	
	printf("Operator 2:\n");	
	numbers[1] = readNumber(error);																		// Second operand. Same as first. checks for 0 division y zero here
	if ( !numbers[1] ) *error = 3;																		// for efficiency
	printf("(+) Sumar\n(-) Restar\n(*) Multiplicar\n(/) Dividir\n(^) XOR\n(&) AND\n(|) OR\n");
	*operator = readOperator(error);																	// Stores the value op readOperator
}

/*
Accepts a pointer to the error variable.
Loops through input of keyboard, converts the characters received from getchar() to ints and checks
for errors. If input is a decimal number, it divides the input in whole part and fraction part and sums
at end of algorithm. If either of the operands contains illegal characters it raises error 1.
Example of input: 345.678

Algorithm does:
number = 300 + 45 + 5 
decimal = (600 + 70 + 8)/1000 

*/

float readNumber(int *error) {

	int deccount = 0;														// Used to keep track of number of decimals
	float decimal = 0;														// The variable that stores the decimals (if any)		
	float number = 0;														// The variable that stores the whole part	
	int sign = 1;															// Keeps track of sign	
	char ch;																// Input character from keyboard

	while ( (( ch = getchar() ) != '\n') && (ch != EOF) ) {					// Recieves all characters from keyboard until "Enter"
		if ( (ch == '-' ) && ( number == 0 ) )								// Sets sign to negative if the number is negative	
			sign *= -1;
		else if ( ( ch >= '0' ) && ( ch <= '9' ) && ( deccount == 0) ) {	// loops whole part of number. Converts from char to int with (ch-'0') and keeps track of
			number = 10 * number + (ch - '0');								// and multiplies the numbered stored by 10 before adding the new int. only chars between 0-9	
		}
		else if ( ( ch >= '0' ) && ( ch <= '9' ) && ( deccount != 0) ) {	// loops fraction part of the number. Works in the same way, except for that it keeps track
			decimal = 10 * decimal + (ch - '0');							// how much we need to divide the number by, to convert it to a fraction. only chars 0-9
			deccount *= 10;
		}
		else if ( ( ch == ',' ) || ( ch == '.' ) && ( deccount == 0 ) )		// if theres a fraction part, extract the . or , and tell that decimal part has begun
			deccount++;
		else
			*error = 1;														// if the input is something else than a number or decimal number, raise error 1.
	}
	decimal = (deccount == 0 ) ? 0 : (decimal / deccount);					// If we had a decimal number, divide by correct 10nth
	number += decimal;
	return sign * number;													
}

/*
Accepts a pointer to the error variable.
Receives the caracter from keyboard and checks that it is a legal operator. 
If it's not, raises error 2.
*/
int readOperator(int *error) {
	int validOps[7] = {'+','-','*','/','^','&','|'};						// array of legal operators
	char valid = 0;															// Bool use when valid is found
	int i = 0;																	
	int ch = getchar();				
	for ( i; i < 7; i++ ) {													// Loops over all operators in the array
		if ( ch == validOps[i] )											// if the character recieved from keyboard is valid, change the bool
			valid = 1;
	}
	if (valid)																// if valid, return it, otherwise raise error 2.
		return ch;
	else
		*error = 2;
}
/*
Operating functions. Returns the result in a float to cope with
decimals. The bitwise operators only accepts integers, and therefore only whole numbers
*/

float divide1(float n1, float n2) {											// Only divides if denominator != 0
	if ( n2 )
		return (n1 / n2);
}
float plus1(float n1, float n2) 		{ return n1 + n2; }	
float minus1(float n1, float n2) 		{ return n1 - n2; }
float multiply1(float n1, float n2) 	{ return n1 * n2; }
float xor1(int n1, int n2) 				{ return n1 ^ n2; } 
float and1(int n1, int n2) 				{ return n1 & n2; }	
float or1(int n1, int n2) 				{ return n1 | n2; }

/*
Chooses the calculation function wanted. Accepts operand 1, operand 2 and a pointer to the operator.
Returns the value calculated by the operating functions.
*/
float calculate(float n1, float n2, int *op) {
	switch (*op) {									// compares to the value of the pointer to the operator. 
	case '+':
		return plus1(n1,n2);
		break;

	case '-':
		return minus1(n1,n2);
		break;

	case '/':
		return divide1(n1,n2);
		break;

	case '*':
		return multiply1(n1,n2);
		break;

	case '^':
		return xor1(n1,n2);
		break;

	case '|':
		return or1(n1,n2);
		break;		

	case '&':
		return and1(n1,n2);
		break;

	default:
		break;
	}
}
