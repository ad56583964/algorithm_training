//1-11

#include<cstdio>  //in cpp needed

int main ()
{
    int a, b, n, m;
    scanf("%d%d", &n, &m);

    //联立方程得到
    a = (4*n-m) /2;
    b = n-a;

    //附加实际意义的约束
    if(m % 2 == 1 || a < 0 || b < 0)  // ||运算符具有短路策略
        printf("No answer\n");
    else
        printf("%d %d\n", a, b);

    return 0;
}

//