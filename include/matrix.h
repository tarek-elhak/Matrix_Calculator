#ifndef MATRIX_H
#define MATRIX_H

using namespace std ;

template<class T>
class Matrix
{
    public:
        Matrix();
        ~Matrix();
        int NumberOfRows;
        int NumberOfColumns;
        T** ptr ;
        void operator+(Matrix);
        void operator-(Matrix);
        void operator*(Matrix);
        void transpose ();
    protected:

    private:

};


#endif
