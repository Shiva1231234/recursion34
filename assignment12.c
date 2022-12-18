Q=1
/*#include <stdio.h>



void printNaturalNumbers(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;    
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}
*/
Q=2
/*

// C++ program to print all numbers between 1
// to N in reverse order
 
#include <bits/stdc++.h>
using namespace std;
 
// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{
 
    for (int i = N; i > 0; i--)
        cout << i << " ";
 
}
 
// Driven Code
int main()
{
    int N = 5;
 
    PrintReverseOrder(N);
 
    return 0;
}*/
Q=4
/*
#include <stdio.h>

int main()
{
    int i, start;

    /* Input start range from user */
    printf("Enter starting value: ");
    scanf("%d", &start);

    /*
     * Run loop from 'start' to 1 and
     * decrement 1 in each iteration
     */ 
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}*/
Q=5
/*
#include<stdio.h>
int  numPrint(int);
int main()
{
    int n = 1;
	printf("\n\n Recursion : print first 50 natural numbers :\n");
	printf("-------------------------------------------------\n"); 
	printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}
*/
Q=6
/*
#include<stdio.h>
 
int main()
{
    int Number, i;
   
    printf("\n Please Enter any Integer Value  : ");
    scanf("%d", &Number);
     
    i = Number;
    printf("\n List of Natural Numbers from %d to 1 are \n", Number);   
     
    while(i >= 1)
    {
        printf(" %d \t", i);
        i--;
    }
   
    return 0;
}
*/

Q=8
/*
#include <stdio.h>

int decimal_binary(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%2)+10*decimal_binary(n/2));
}

void main()
{
   int no;
 
   printf("Enter a decimal number\n");
   scanf("%d",&no);
   printf("Decimal(%d) = Binary(%d)\n",no,decimal_binary(no));
}
*/
Q=9
/*
#include <stdio.h>
 
int main()
{
    int num, octal=0, rem, i=1;
 
    printf("Enter a Decimal number: \n");
    scanf("%d",&num);
 
    //loop until number reduces to 0
    while(num != 0)
    {   
        //get remainder
        rem = num%8;
        
        //stack in bottom-up manner
        octal = (rem*i) + octal; 
        
        //update the quotient
        num = num/8;
        
        //update i
        i= i*10;                         
    }
 
    printf("Octal: %d", octal);
 
    return 0;
}
*/
Q=10
/*
#include <stdio.h>
int sum=0,rem;
int reverse_function(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reverse_number;

  //Take the number as an input from user
  printf("Enter any number:");
  scanf("%d",&num);

  //Calling user defined function to perform reverse
  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  return 0;
}*/