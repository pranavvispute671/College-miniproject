#include <bits/stdc++.h>
using namespace std;

int main(){
    // Enter the shape of matrix A
    int m;
    int n;
    
    // Enter the shape of matrix B
    int p;
    int q;
    
    cin>>m>>n>>p>>q;
    
    
    if(n != p){
        cout<<"These matrices cannot be multiplied, as their shapes are not compatible. Try again!"<<endl;
    }
    
    // Init values in A
    int A[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>A[i][j];
        }
    }
    // Init values in B
    int B[p][q];
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            cin>>B[i][j];
        }
    }
    
    // create our resultant matrix C with shape m,q
    int C[m][q];
     for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            C[i][j] = 0;
        }
    }
    //  Finding the product of 2 matrices and storing it in a new matrix.
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k < n;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    
    // Printing the resultant matrix.
    for(int i = 0; i<m;i++){
        for(int j = 0; j <q; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
