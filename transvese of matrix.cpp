#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;


    int A[m][n];

    for(int i=0; i<m; i++)
    {
    for(int j=0; j<n; j++)           // enter the array
    {
        cin>>A[i][j];
    }


    for(int i=0; i<m; i++)
    {
        for (j=i; j<n; j++)
        {
            int temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    } 

    for(int i=0; i<m; i++)
    {
    for(int j=0; j<n; j++)           // enter the array
       {
        cout<< A[i][j] ;
       }
    }


    

}