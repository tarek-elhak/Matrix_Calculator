#include "matrix.h"
#include <iostream>
using namespace std;

template <class T>
Matrix<T>::Matrix()
{
    cout<<"enter the number of rows : ";
    cin>>NumberOfRows;
    cout<<"enter the number of columns : ";
    cin>>NumberOfColumns;

    ptr = new T*[NumberOfRows];
    // building n*m matrix
    for (int i = 0 ; i<NumberOfRows ; i++){
        ptr[i] = new T [NumberOfColumns];
    }
    // filling matrix with some values
    for (int i = 0 ; i<NumberOfRows ; i++){
        cout<<"enter value for Row# "<<i+1<<endl;
        for (int j = 0 ; j<NumberOfColumns ; j++){
            cin>>ptr[i][j];
        }
    }
}

template<class T>
void Matrix<T>::operator+(Matrix<T> a){
    if (NumberOfRows == a.NumberOfRows && NumberOfColumns == a.NumberOfColumns){
        cout<<"the result is :\n";
        for (int i = 0 ; i<NumberOfRows ; i++){
            for (int j = 0 ; j<NumberOfColumns ; j++){
                cout<<ptr[i][j]+a.ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Addition cannot be done \n";
    }

}
template<class T>
void Matrix<T>::operator-(Matrix<T> a){
    if (NumberOfRows == a.NumberOfRows && NumberOfColumns == a.NumberOfColumns){
        cout<<"the result is :\n";
        for (int i = 0 ; i<NumberOfRows ; i++){
            for (int j = 0 ; j<NumberOfColumns ; j++){
                cout<<ptr[i][j]-a.ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"subtraction cannot be done \n";
    }

}
template<class T>
void Matrix<T>::operator*(Matrix<T> a){
    int sum = 0 ;
    if (NumberOfColumns == a.NumberOfRows){
        cout<<"the result is :\n";
        for (int i = 0 ; i<NumberOfRows ; i++){
            for (int j = 0 ; j<a.NumberOfColumns ; j++){
                for (int k = 0 ; k<NumberOfColumns; k++){
                    sum+=ptr[i][k]*a.ptr[k][j];
                }
                cout<<sum<<" ";
                sum = 0 ;
            }
            cout<<endl;
            sum = 0;
        }
    }
    else{
        cout<<"Multiplication cannot be done \n";
    }

}
template <class T>
void Matrix<T>::transpose(){
    for (int i = 0 ; i<NumberOfColumns ; i++){
        for (int j = 0 ; j<NumberOfRows ; j++){
            cout<<ptr[j][i]<<" ";
        }
        cout<<endl;
    }
}
template <class T>
Matrix<T>::~Matrix()
{
    for( int i = 0 ; i < NumberOfRows ; i++ ){
        delete[] ptr[i];
    }
    delete[] ptr;
}
