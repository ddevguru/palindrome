// program to check whether it is a palindrome or not

#include <stdio.h>
int main()
{
    int number,reversed=0,rem,temp;
    printf("Enter the number :\n");
    scanf("%d",&number);
    temp=number;
    while(number != 0)
    {
        rem=number%10;
        reversed = reversed * 10 + rem;
        number /= 10;
    }
        if(temp == reversed)
            {
                 printf("It is a palindrome \n");
            }
         else
             {
                 printf("It is not a palindrome \n");
            }
           
}