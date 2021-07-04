#include<stdio.h>
#include<string.h>
#include<conio.h>
#define SIZE 50+1
char stack[SIZE];
int tos;
void push(char c)
{
    tos=strlen(stack);
    stack[tos]=c;
    tos=tos+1;
    stack[tos]='\0';
}
char pop()
{
    char ch;
    tos=tos-1;
    ch=stack[tos];
    stack[tos]='\0';
    return ch;
}
int isEmpty()
{
  return  (tos) ? 0 : 1;
}
int main()
{
     int a,b,c,d,e,f,errorpos=0;
     char c1,c2;
     char str[SIZE];
     scanf("%s", str);
     for(a=0;str[a];a++)
     {
        c1=str[a];
        if(c1=='(' || c1=='{' || c1=='['){
            push(c1);
        }
        else{
            if(isEmpty()){
                errorpos=a+1;
                //printf("y\n");
               break;
            }
            c2=pop();
            //printf("%c%c\n",c1,c2);
            if((c1==')' && c2!='('))
            {
                errorpos=a+1;
                break;
            }
            else if( (c1=='}' && c2!='{'))
            {
               errorpos=a+1;
               break;
            }
            else if((c1==']' && c2!='['))
            {
               errorpos=a+1;
               break;
            }

        }
    }
    if(errorpos)
     {
        printf("Error at position %d\n", errorpos);
    }
    else if(tos!=0)
    {
        printf("Error at position %d\n", a+1);
    }
    else
    {
        printf("Matched\n");
    }
    getch();
    return 0;
}

