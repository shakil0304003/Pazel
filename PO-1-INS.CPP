#include<stdio.h>
void main()
{FILE *p1,*p2,*p3,*p4;
 p1=fopen("sav11","w");
 fprintf(p1,"0");
 fclose(p1);
 p2=fopen("sav22","w");
 fprintf(p2,"0");
 fclose(p2);
 p3=fopen("sav33","w");
 fprintf(p3,"0");
 fclose(p3);
 p4=fopen("sav44","w");
 fprintf(p4,"0");
 fclose(p4);



}