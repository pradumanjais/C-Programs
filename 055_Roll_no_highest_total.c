/*Write a program to read roll number and marks of 10 students in 3 subjects. The valid range for roll numbers is 1000-9999,
if the roll number entered is not in this range, the user should be asked to enter again. Calculate total marks of only those
students who get more than or equal to 40 marks in each subjects. Count the number of students whose total is more than 200.
Print the roll number of student who gets the highest total.
*/
#include <stdio.h>
int main()
{
    int i = 0, roll_no, m1, m2, m3, high_roll, max = 0, count = 0, total;
    while (i <= 2)
    {
        printf("Enter roll number\n");
        scanf("%d", &roll_no);
        if (roll_no >= 1000 && roll_no <= 9999)
        {
            total = 0;
            printf("Enter marks\n");
            scanf("%d%d%d", &m1, &m2, &m3);
            if (m1 >= 40 && m2 >= 40 && m3 >= 40)
            {
                total = m1 + m2 + m3;
                if (total > 200)
                    count++;
                if (max < total)
                {
                    max = total;
                    high_roll = roll_no;
                }
            }
            i++;
        }
        else
            printf("Your roll_number is wrong please enter again\n");
    }
    printf("No of students got 200+ marks is %d\n", count);
    printf("Roll_no : %d got the highest marks of %d", high_roll, max);
    return 0;
}