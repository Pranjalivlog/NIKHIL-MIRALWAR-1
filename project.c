#include<stdio.h>
int main()

{

    char que[4][100]={
    {"1) what is required in each c program?"},
    {"what is lint?"},
    {"in the C languge constant is defined ______."},
    {"which one of the following is a loop construct that will be always executed once?"}
    };


 char opt[4][100]={


           {"1)the program must have atleast one function.   2)the program does not require any function  3)input data  4)output data"},
           {"1)C compiler  2)interactive debuger  3)analyzing tool  4) C interpreter"},
           {"1)before main  2)after main  3)anywhare,but starting on a new line  4)none of these"},
           {"1)for  2)while  3)switch  4)do while"}
 };

  int ans[4]={1,3,3,4};

  int result=0;

  int res[4];

  int i=0;
  printf("============================QUESTIONS========================\n\n");

 for(i=0;i<=3;i++)
    {
       printf("\n\n");
       printf("%s\n",que[i]);
       printf("%s\n",opt[i]);
       printf("ans = ");
       scanf("%d", &res[i]);

    }
    for(i=0;i<=3;i++)
    {
       if(res[i]==ans[i])
       {
           result++;
       }
    }
  printf("result=%d",result);

    return 0;
}
