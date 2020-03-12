#include <iostream>
#include "matrix.h"
#include "src\matrix.cpp"

using namespace std;

int main()
{
    cout<<"welcome to Matrix Calculator \n";
    int option ;
    while(true){
        cout<<"1: perform matrix addition \n";
        cout<<"2: perform matrix subtraction \n";
        cout<<"3: perform matrix multiplication \n";
        cout<<"4: perform matrix transpose \n";
        cout<<"5: End \n";
        cin>>option;
        if (option == 1){
            Matrix<int> a ;
            Matrix<int> b ;
            a+b;
        }
        else if (option == 2){
            Matrix<int> a ;
            Matrix<int> b ;
            a-b;
        }
        else if (option == 3){
            Matrix<int> a ;
            Matrix<int> b ;
            a*b;
        }
        else if (option == 4){
            Matrix <int> a ;
            a.transpose();
        }
        else{
            break;
        }
    }
    return 0;
}
