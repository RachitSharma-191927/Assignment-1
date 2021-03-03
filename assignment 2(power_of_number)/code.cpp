#include<iostream>
using namespace std;
int read_input(int a,int b,int *p);
int print_input(int x,int y,int *p);


int main()
{
    int n,m;
    cout <<"\nWe are creating a matrix ";
    cout <<"\nEnter the number of rows of the matrix :";
    cin >> n;
    cout <<"\nEnter the number of columns of the matrix :";
    cin >> m;
    int array[n][m];
    read_input(n,m,&array[0][0]);
    print_input(n,m,&array[0][0]);
    return 0;



}
int read_input(int a,int b,int *p)
{
    cout<<"\nEnter the elements of matrix :";
    int m=b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout << "\narray"<<"["<<i+1<<"]"<<"["<<j+1<<"] =";
            cin >> *(p+m*i+j);
        }
    }
}
int print_input(int x,int y,int *p)
{
     cout<<"\nElements of matrix are:\n";
     int m=y;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            
            cout << *(p+m*i+j)<<"\t";
        }
        cout<<endl;
    }
}

