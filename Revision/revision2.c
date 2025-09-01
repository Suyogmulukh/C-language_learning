#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int total ;
    int percentage;

    printf("enter the subject 1 marks : ");
    scanf ("%d",&sub1);
    printf("enter the subject 2 marks : ");
    scanf ("%d",&sub2);
    printf("enter the subject 3 marks : ");
    scanf ("%d",&sub3);
    printf("enter the subject 4 marks : ");
    scanf ("%d",&sub4);
    printf("enter the subject 5 marks : ");
    scanf ("%d",&sub5);

    total = sub1+sub2+sub3+sub4+sub5;
    percentage = total/5;
    
    printf("Total Marks = %d\n", total);
    printf("Percentage = %d\n", percentage);

    if (percentage > 85)
    {
        printf ("A grade");
    }
    else if (percentage > 70)
    {
        printf ("B grade");
    }
    else if (percentage > 55)
    {
        printf ("c grade");
    }
    else if (percentage > 35)
    {
        printf ("D grade");
    }
    else
    {
        printf ("f grade");
    }

}