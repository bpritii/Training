#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
    char str[SIZE];
    int len,i,j,count; 
    fgets(str,SIZE,stdin);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                break;
            }
            else
                continue;
        }
        if(count>0)
        {
            continue;
        }
        else 
        {
            printf("%c",str[i]);
            break;
        }
    }
    return 0;

}
