#include<stdio.h>
#include<string.h>
#define SIZE 500
int main()
{
char ch, arr[SIZE];
int i=0;	
while((ch=getchar())!=EOF){
	arr[i]=ch;
	i++;
	}

puts(arr);




return 0;
}

