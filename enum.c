#include <stdio.h>

enum data
{
    char name[100],
    int age[10],
    int phno[10],
    char address[100],
    
};

int main()
{
    enum data n;
    scanf("%s", n.name);
    scanf("%d", n.age);
    scanf("%d", n.phno);
    scanf("%s", n.address);
    
    return 0;
}