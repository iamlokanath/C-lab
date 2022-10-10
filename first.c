// write a c program to print your name
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your name: ");
    scanf("%d",&a);
    return 0;
}
*/
// write a c program to print a) pre increment & decrement,  b) post increment &decrement
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    ++a;
    printf("%d is preincremented number \n",a);
    a++;
    printf("%d is post incremented number \n",a);
    --a;
    printf("%d is pre decremented number \n",a);
    a--;
    printf("%d is post decremented number \n",a);
    return 0;
}
*/

// write a c program to perform arithmatic operater in number
/*
#include<stdio.h>
int main()
{
    int num1, num2, sum, diff, multi, div, mod;
    printf("Enter any two number to perform arthmatic operation: ");
    scanf("%d%d",&num1, &num2);
    sum = num1+num2;
    printf("%d is the sum of two number: \n",sum);
    diff= num1-num2;
    printf("%d is the difference of two number: \n",diff);
    multi = num1*num2;
    printf("%d is the multiplication of two number: \n",multi);
    div= num1/num2;
    printf("%d is the division of two number: \n",div);
    mod = num1% num2;
    printf("%d is the modulus of two number: \n",mod);
    return 0;
}
*/

// write a cprogram to find a number even or odd
/*
#include<stdio.h>
int main()
{
    int num, even, odd;
    printf("Enter any number to check weather it is odd or even: ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("%d is an even number",num);
    }
    else{
        printf("%d is an odd number",num);
    }
    return 0;

}
*/

// write a c program to make a simple calculater using switch case
/*
#include<stdio.h>
int main()
{
    int num1, num2, op, result;
    printf("Enter any two number: ");
    scanf("%d%d",&num1, &num2);
    printf("Enter any mathematical operation: ");
    scanf("%d",&op);
    switch (op)
    {
    case '+':
        result= num1 + num2;
        break;
     case '-':
        result= num1 - num2;
        break;
     case '*':
        result= num1 * num2;
        break;
     case '/':
        result= num1 / num2;
        break;

    default:
        printf("Enter a valid choice");
        break;
    }
    printf("%d",result);
}
*/

// write a c proram to find the reverse of the number
/*
#include<stdio.h>
int main()
{
    int num, reminder, reverse = 0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num/10;
    }
    printf("%d is the reverse of the number", reverse);
    return 0;


}
*/

// write a cprogram to find out the sum of all digits
/*
#include <stdio.h>
int main()
{
    int num, sum = 0, m;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        m = num % 10;
        sum = sum + m;
        num = num / 10;
    }
    printf("%d is the sum", sum);
    return 0;
}
*/
// wap in c to find the sum of first and last digit
/*
#include <stdio.h>
int main()
{
    int first_digit, last_digit, sum = 0, num;
    printf("enter any number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;
    sum = first_digit + last_digit;
    printf("%d is the sum of first and last digit of the given number", sum);
    return 0;
}
*/
// wap to find that the number is amstrong or not
/*
#include<stdio.h>
int main()
{
    int num, original_num, last_digit, result=0;
    printf("Enter an three number: ");
    scanf("%d", &num);
    original_num = num;

    while (original_num != 0)
    {
        last_digit = original_num % 10;
        result += last_digit * last_digit * last_digit;
        original_num /= 10;
    }
    if (result == num)
    {
        printf("%d is an amastrong number", num);
    }
    else{
        printf("%d is not an amstrong number", num);
    }
    return 0;

}
*/
// wap to find the factorial of the given number
/*
#include<stdio.h>
int main()
{
    int num, fact=1;
    printf("enter any number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
    fact = fact*i;

    }
    printf("%d is the factorial of the given number",fact);

    return 0;

}
*/

// wap to find out the average of n numbers using array
/*
#include<stdio.h>
int main()
{
    int arr[5], n, avg, sum=0;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d",&i);
        sum += i;
    }
    avg = sum / n;
    printf("%d is the average of the number", avg);
    return 0;

}
*/

// wap to find the addition of two matrices
/*
#include <stdio.h>

int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Enter the elements of second matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);

   printf("Sum of entered matrices:-\n");

   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
*/
// wap to perform multiplication two matrices
/*
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    system("cls");
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    printf("enter the first matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// wap in c to read the string using gets() function and print it using puts() function
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is: ");
    puts(name);
    return 0;
}

*/

// wap in c to copy one string from another using strcpy() library function
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Lokanath Panda";
    char str2[50];
    strcpy(str2, str1);
    puts(str2);
    return 0;
}
*/

//wap in c to add two numbers using function
/*
#include<stdio.h>
int sum_two(int x, int y){
    return x+y;
}
int main()
{
    int a, b, sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the first number: ");
    scanf("%d", &b);
    sum= sum_two(a, b);
    printf("%d is the sum of two number", sum);
    return 0;
}
*/
