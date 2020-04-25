#include<stdio.h>
#include<conio.h>
#define SIZE 20
int emptystack(int top)
{
    if (top==-1)
    return 1;
    else 
    return 0;
}

int fullstack(int top)
{
    if (top==SIZE-1)
    return 1;
    else
    return 0;
}

void push(char *a, int *top, char x)
{
	if(!fullstack(*top))
    a[++(*top)]=x;
    else
    printf("Stack is Full\n");
}

void pop(char *a, int *top, char *y)
{
    if(!emptystack(*top))
    *y=a[(*top)--]; 
    else
    printf("Stack is Empty\n");
}

/*void disp(char *a, int top)
{        
    if(!emptystack(top))
    {
    	int i;
    	printf("Stack is\n");
		for (i=0;i<=top;i++)
		printf("%c\n",a[i]);
    }
    else
        printf("Stack is Empty\n");
}*/

int pr(char a)
{
    switch(a)
	{
        //case '#':
        // return 0;
        // break;
                            
		case '=': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
        case '^': return 4;
    }
}

int main()
{
    int topb=-1,i=0;
    char a[SIZE],b[SIZE],x;
    printf("Enter infix expression\n");
    scanf("%s",a);
    //push(b,&topb,'#');
    printf("Postfix expression\n");
    while(a[i]!='\0')
    {
        if(a[i]>=97 && a[i]<=122)
        printf("%c",a[i]);
        if(a[i]=='(')
        push(b,&topb,a[i]);
        if(a[i]==')')
        {
            do
        	{
                pop(b,&topb,&x);
                if(x!='(')
            	printf("%c",x);
            }while(x!='(');
        }
        
    	if ((a[i]=='+')||(a[i]=='-')||(a[i]=='*')||(a[i]=='/')||(a[i]=='^')||(a[i]=='='))
    	{
        	do
			{
            	if(!emptystack(topb))
            	{
               		pop(b,&topb,&x);
               		push(b,&topb,x);
               		if(pr(x)>=pr(a[i])&& x!='(')
            		{
                    	pop(b,&topb,&x);
                    	printf("%c",x);
              		}
        		}
        	}while(!emptystack(topb)&& x!='(' && pr(x)>=pr(a[i])); 
              
           /*  while(!emptystack(topb)&& x!='(' && pr(x)>=pr(a[i])) 
             {
               pop(b,&topb,&x);
               push(b,&topb,x);
               if(pr(x)>=pr(a[i])&& x!='(')
              {
                                pop(b,&topb,&x);
                                printf("%c",x);
              }
              }
              */
              
    		push(b,&topb,a[i]);
    	}
    	i++;
	}

	while(!emptystack(topb))
	{
    	pop(b,&topb,&x);
    	printf("%c",x);
	}
    return 0;
}
