#include <stdio.h>
 
int main() {
 
    int emp_num,WRK_HR;
    float salary_p_h,SALARY;
    scanf("%d %d %f",&emp_num,&WRK_HR,&salary_p_h);
    SALARY=WRK_HR*salary_p_h;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",emp_num,SALARY);
 
    return 0;
}
