//without global variable.
#include<bits/stdc++.h>
using namespace std;

void col(int r, int c, int mat1[][101], int mat2[][101])
{
    if(c<0) return;

    mat1[r][c]=mat1[r][c]+mat2[r][c];

    col(r, c-1, mat1, mat2);
}

void row(int r, int c, int mat1[][101], int mat2[][101])
{
    if(r<0) return;

    col(r, c, mat1, mat2);

    row(r-1, c, mat1, mat2);
}

int main()
{
     int r,c;
     cin>>r>>c;
     
     int mat1[101][101];
     for(int i=0; i<r; i++)
     {
          for(int j=0; j<c; j++) cin>>mat1[i][j];
     }
     
     int mat2[101][101];
     for(int i=0; i<r; i++)
     {
          for(int j=0; j<c; j++) cin>>mat2[i][j];
     }
     
     row(r-1, c-1, mat1, mat2);
     
     for(int i=0; i<r; i++)
     {
          for(int j=0; j<c; j++) 
          {
              if(j!=c-1) cout<<mat1[i][j]<<" ";
              else cout<<mat1[i][j];
          }
          cout<<"\n";
     }
     
     return 0;
}

//with global variable.
#include<bits/stdc++.h>
using namespace std;

int row, col;

void sum(int row1, int col1, int arr[][100], int brr[][100])
{
    if(row1==0) return;
    
    if(col1>0)
    {
        arr[row1-1][col1-1]=arr[row1-1][col1-1]+brr[row1-1][col1-1];
        sum(row1, col1-1, arr, brr);
    }
    else
    {
        sum(row1-1, col, arr, brr);
    }
}

int main()
{
    cin>>row>>col;

    int arr[100][100];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++) 
            cin>>arr[i][j];


    int brr[100][100];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++) 
            cin>>brr[i][j];

    
    sum(row, col, arr, brr);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}   

//Another approach.
#include<bits/stdc++.h>
using namespace std;

void sum(int row1, int col1, int index, int arr[][100], int brr[][100])
{
    if(row1==0) return;
    
    if(index<col1)
    {
        arr[row1-1][index]=arr[row1-1][index]+brr[row1-1][index];
        sum(row1, col1, index+1, arr, brr);
    }
    else
    {
        sum(row1-1, col1, 0, arr, brr);
    }
}

int main()
{
    int row, col;
    cin>>row>>col;

    int arr[100][100];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++) 
            cin>>arr[i][j];


    int brr[100][100];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++) 
            cin>>brr[i][j];

    
    sum(row, col, 0, arr, brr);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}   
