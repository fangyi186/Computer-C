/*******************************************************************************
题目内容：
编写一个函数，用于将一个int类型的数组清零（即将指定前n项元素全部置为0）数组以-1结尾，且-1不包括在此数组中。要求数组使用地址传递（传指针）。

提示：本题只要在形参中使用整型指针，对应的实参是数组名（因为数组名是数组的首地址），函数中仍使用下标访问数组元素。
例如 int a[100],*p=a;   //a是数组a的首地址。
则p[i]相当于a[i]。

输入格式:
第一行数是数组元素，第二行的数是需清零的元素个数n

输出格式：
清零后的数组元素,注意最后一个元素后不要带空格。

输入样例：
503 87 512 61 908 170 897 275 653 426 154 509 612 677 765 703 -1
5

输出样例：
0 0 0 0 0 170 897 275 653 426 154 509 612 677 765 703
***********************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

void reset(int *a,int n)
{
    int i=0;
    while(i++ < n)
    {
        *a=0;
        a++;
    }
}
int main()
{
    int a[100]={0},n;
    static int num=0;
    int i=0;
    int temp;
    while(temp !=-1)
    {

        cin>>temp;
        a[i++]=temp;
        //*a++;
        num++;
    }
    cin>>n;
    reset(a,n);
    for(i=0;i<num-2;i++)
    {
        cout<<a[i]<<" ";

    }

    cout<<a[num-2];
    return 0;
}