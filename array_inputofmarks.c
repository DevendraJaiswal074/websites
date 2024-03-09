// create a array and take marks input from user print the final percentage 

#include <stdio.h>
int main()
{
    int user, sum=0;
    printf("Enter the number of subject:");
    scanf("%d", &user);
    int marks[user];

    for (int i = 0; i < user; i++)
    {
        printf("Enter the mark of subject %d :", i + 1);
        scanf("%d", &marks[i]);
        sum= sum+marks[i]/user;
    }

    for (int i = 0; i < user; i++)
    {

        printf(" the mark of subject %d is %d \n", i + 1, marks[i]);
    }
    printf("You total percentage obtain %d",sum);

    return 0;
}