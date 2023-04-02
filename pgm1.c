# include<stdio.h>
#include<string.h>
union tr {

int i;
float f;
char name[90];
};
int main()
{
    union tr data;
    printf("Memory space occupied  %d\n",sizeof(data));
    return 0;
}
