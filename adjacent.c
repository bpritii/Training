// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
#define N 50
int i,j,k,len,count;
int possible( char str[N])
{
    count=0,i=0;
    len=strlen(str);
    while(str[i]!='\0')
    {
        if((str[i+1]-str[i])==1)
        {
            count++;
            k=i;
            for(j=k+2;j<strlen(str);j++){
                str[k]=str[j];
                k++;
            }
            str[len-1]='\0';str[len-2]='\0';
            
        }
        else 
            continue;
        i++;
    }
    return count;
}

int main()
{
   char str[50];
   int val;
   scanf("%s",str);
   //str[strlen(str)-1]='\0';
   val=possible(str);
   printf("Possibilities:%d",val);
   printf("%s",str);
}
