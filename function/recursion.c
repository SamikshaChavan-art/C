#include <stdio.h>
int func(int a, int n)
{
  
    if (a > n)
    {
        return 0;
    }

    printf("%5d", a);
    a++;
    func(a, n);
}
int main()
{ 
    int a=1;
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    func(1, n);
}