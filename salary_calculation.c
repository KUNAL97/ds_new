#include<stdio.h>

float percent(float basic,int perc){
  float cal_perc;
cal_perc=(perc*basic)/100;
return cal_perc;
}

int main(){
int perc;
float basic,gross_salary,net_salary;
printf("Enter the basic salary of the employee\n");
scanf("%f",&basic);
if(1<=basic<=500000){
//printf("%f\n",percent(basic,50));
gross_salary=basic+percent(basic,10)+percent(basic,50);
//printf("%f\n",basic);
}

else if(500001<=basic<=1000000){
gross_salary=basic+percent(basic,20)+percent(basic,60);
}
else if(1000000<basic<=1500000){
gross_salary=basic+percent(basic,25)+percent(basic,70);
}
else{
gross_salary=basic+percent(basic,30)+percent(basic,80);
}
printf("Gross salary of an employee is %f\n",gross_salary);
printf("Enter the amount you want to donate to PM care fund in percent\n");
scanf("%d",&perc);
net_salary=gross_salary-(gross_salary*perc/100);
printf("Net salary of employee after donating to PM care fund is: %f",net_salary);


return 0;
}
