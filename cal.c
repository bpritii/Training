#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

float parseterm();
float addsub();
int issvalid();
float multidiv();

char expr[SIZE];
int pos=0,i;

int issvalid()
{
     for(i=0;i<strlen(expr);i++){
        if (!isdigit(expr[i]) && expr[i]!= '+' && expr[i]!= '-' && expr[i]!= '*' && expr[i]!= '/' && expr[i]!= ')' && expr[i]!= '(' )
        {
            return 0;
        }}
        return 1;
    
}
float parseterm()
{
    float num=0;
    
    if(expr[pos]=='('){
        pos++;
        num=addsub();
    
        if(expr[pos]==')'){
            pos++;
            return num;
        }
    }
    
    else {
        while(expr[pos]>='0' && expr[pos]<='9'){
            num=num*10 +(expr[pos]-'0');
            pos++;
        }
    }
    return num;
}

float multidiv()
{
    float op1,op2;
    op1=parseterm();
    
    while(expr[pos]  == '*' || expr[pos] == '/'){
        
        if(expr[pos] == '*'){
            pos++;
            op2=parseterm();
            op1*=op2;
        }
        
        else if (expr[pos]=='/'){
            pos++;
            op2=parseterm();
            op1/=op2;
        }
        else{
            return op1;
        }
    }
}

float addsub(){
    float op1,op2;
    op1=multidiv();
    
    while(expr[pos] == '+' || expr[pos] == '-'){
        if(expr[pos]=='+'){
            pos++;
            op2=multidiv();
            op1+=op2;
        }
        else if(expr[pos]=='-'){
            pos++;
            op2=multidiv();
            op1-=op2;
        }
        else{
            return op1;
        }
    }
}

int main()
{
    printf("Enter your expression:\n");
    //scanf("%s",&expr);
    fgets(expr,sizeof(expr),stdin);
    if(issvalid()==0)
    {
        printf("Please enter valid expression.");
        return 1;
    }
    int pos=0;
    printf("%f",addsub());
    
    return 0;
}

