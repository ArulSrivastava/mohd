#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=0,a=1,k=0;
printf("Blood Bank Application");
char c;
char DonorName[6][50],Address[6][50],EmailId[6][50],BloodGroup[6][50],Gender[6][50];
int Age[10],MobileNo[10];
printf("\n Enter the data of the donor");
while(a==1)
{
printf("\n Enter the name of the donor: ");
   scanf("%c",&DonorName[i]);

printf("\n Enter the Address: ");
   scanf("%c",&Address[i]);

printf("\n Enter the email id: ");
   scanf("%c",&EmailId[i]);

printf(" Enter the blood group: ");
   scanf("%c",&BloodGroup);

printf("\n Gender: ");
   scanf("%c",&Gender[i]);

printf("\n Enter the Age of the Donor: ");
   scanf("%d",&Age[i]);

printf("\n Enter the Mobile number: ");
   scanf("%d",&MobileNo[i]);

printf("\n Data for next Donor: ");

}
}
