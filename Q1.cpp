//Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is called perfect if every diagonal from top-left to bottom-right has the same elements.

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element of array: ";
            cin>> matrix[i][j];
        } cout<<endl;
    }

    int count = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int store = matrix[0][0];
            if (i == j){
                if(matrix[i][j] == store){
                    count++;
                }
            }
        }
    }
    if(count == m){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}