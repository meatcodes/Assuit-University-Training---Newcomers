#include<bits/stdc++.h>
using namespace std;

long long maxPath(int R, int C, int mat[][11], int i, int j)
{
    if(i==R && j==C) return mat[i][j];          //if the last element of the matrix return that element
    else if(i>R || j>C) return -1000000;        //return negative value larger than our allowed range, it will be compensated in max function.
    
    long long right=maxPath(R, C, mat, i, j+1); //going right
    long long down=maxPath(R, C, mat, i+1, j);  //going down

    return mat[i][j]+max(right, down);
}

int main()
{
    int R,C;
    cin>>R>>C;

    int mat[11][11];
    for(int i=0; i<R; i++) for(int j=0; j<C; j++) cin>>mat[i][j];

    cout<<maxPath(R-1, C-1, mat, 0, 0);

    return 0;
}
