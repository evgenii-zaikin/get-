#include <iostream>
#include <stdio.h>
#include<math.h>
#include<algorithm>
#include <queue>
#include <cmath>
using namespace std;
struct something {
    int a;
    bool b;
    char c;
};
struct something* calc_address(struct something* start, unsigned int number)
{
    return(start+number);
}
int* copyarr(int* a, unsigned int size)
{int *x;
x=new int[size];
for (unsigned int i=0;i<size;i++)
    *(x+i)=*(a+i);
return x;
}
int* dubling(int* arr, unsigned int N)
{
  int *x;
x=new int[2*N];
for (unsigned int i=0;i<N;i++)
    *(x+i)=*(arr+i);
delete [] arr;
return x;
}
void doubling(int** arr, unsigned int N)
{
    int *x;
x=new int[2*N];
int *y=*arr;
for (unsigned int i=0;i<N;i++)
    x[i]=y[i];
delete [] arr;
*arr=x;
}
int main()
{

}

