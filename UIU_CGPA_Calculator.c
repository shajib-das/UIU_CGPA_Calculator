#include<stdio.h>
int main()
{
    int credit_hour, total_credit, number_of_subject, i;
    double gained_grade_point, total_gpa, actual_total_gpa, cgpa;
    printf("Enter no. of Subjects: ");
    scanf("%d", &number_of_subject);

    printf("Enter Gained Grade point and Credit Hour respectively of Subjects:\n");
    for(i = 1; i <=number_of_subject; i++){
        scanf("%lf %d", &gained_grade_point, &credit_hour);

        if(gained_grade_point == 4.00){
            total_gpa = (double)credit_hour * 4.00;
        }
        else if(gained_grade_point == 3.67){
            total_gpa = (double)credit_hour * 3.67;
        }
        else if(gained_grade_point == 3.33){
            total_gpa = (double)credit_hour * 3.33;
        }
        else if(gained_grade_point == 3.00){
            total_gpa = (double)credit_hour * 3.00;
        }
        else if(gained_grade_point == 2.67){
            total_gpa = (double)credit_hour * 2.67;
        }
        else if(gained_grade_point == 2.33){
            total_gpa = (double)credit_hour * 2.33;
        }
        else if(gained_grade_point == 2.00){
            total_gpa = (double)credit_hour * 2.00;
        }
        else if(gained_grade_point == 1.67){
            total_gpa = (double)credit_hour * 1.67;
        }
        else if(gained_grade_point == 1.33){
            total_gpa = (double)credit_hour * 1.33;
        }
        else if(gained_grade_point == 1.00){
            total_gpa = (double)credit_hour * 1.00;
        }
        else if(gained_grade_point == 0.00){
            total_gpa = (double)credit_hour * 0.00;
        }

        actual_total_gpa += total_gpa;
        total_credit += credit_hour;

    }
    cgpa = actual_total_gpa / total_credit;
    printf("CGPA: %0.2lf\n", cgpa);


    return 0;
}
