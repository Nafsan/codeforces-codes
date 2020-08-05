#include<stdio.h>
#define sf scanf
#define pf printf
typedef long long ll;

int main()
{
    int a, b, div, mod;
    sf("%d%d", &a, &b);
    int sum = a;
    while(a>=b)
    {
        div = (a/b);
        sum = sum + div;
        mod = (a%b);
        a= (div+mod);
    }
    pf("%d\n", sum);
}