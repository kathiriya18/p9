#include<stdio.h>

struct students
{
      int roll_no;
      float maths_marks,chemistry_marks,physics_marks;
      char name;
	   
}s[100];

main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter student roll no ");
		scanf("%d",&s[i].roll_no);
		printf("enter student name");
		scanf("%s",&s[i].name);
		printf("enter student maths marks ");
		scanf("%f",&s[i].maths_marks);
		printf("enter student chemistry marks ");
		scanf("%f",&s[i].chemistry_marks);
		printf("enter student physics marks ");
		scanf("%f",&s[i].physics_marks);
		
    }
    printf("\n----------------------------------------------------------------\n");
    for(i=0;i<5;i++)
    {
    	float percentage=(s[i].maths_marks+s[i].chemistry_marks+s[i].physics_marks)/300.0*100;
    	printf("student roll no. =%d\n",s[i].roll_no);
    	printf("student percentage=%.2f%%\n",percentage);
	}
    
}