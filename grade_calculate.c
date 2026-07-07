#include<stdio.h>
int main()
{
int score;
char grade;
printf("___________________________________________________________________\n");
printf("\nEnter your score: ");
scanf("%d",&score);
if(score < 0 || score > 100)
{
    printf("\n*******************************************************************");
    printf("\n\033[1;31mERROR\033[0m: Invalid input. Please enter a valid integer score.\n");
    printf("*******************************************************************\n\n");
    
}
grade = (score >= 90 && score <=100) ? 'A' :
        (score >= 80 && score <=89) ? 'B' :
        (score >= 70 && score <=79) ? 'C' :
        (score >= 60 && score <=69) ? 'D' : 'F';
    printf("\nYour grade is: %c\n", grade);

switch(grade)
{
    case 'A':
        printf("\nExcellent! You have scored an \033[1;32mA\033[0m grade.\n");
        break;
    case 'B':
        printf("\nGood job! You have scored a \033[1;32mB\033[0m grade.\n");
        break;
    case 'C':
        printf("\nYou have scored a \033[1;33mC\033[0m grade. Keep working hard!\n");
        break;
    case 'D':
        printf("\nYou have scored a \033[1;33mD\033[0m grade. Keep working hard!\n");
        break;
    case 'F':
        printf("\nYou have scored an \033[1;31mF\033[0m grade. You need to improve.\n");
        break;
}
if (grade>= 'A' && grade <= 'D')
{
    printf("\nCongratulations! You have passed the course.\n");
}
else
{
    printf("\nUnfortunately, you have failed the course. Better luck next time!\n");

}


    return 0;
}