/*!
    @file
    @brief Header file class Complex
*/

#ifndef _MY_COMPLEX_H_
#include <iostream>

#define _MY_COMPLEX_H_

using namespace std;

/*!
    @brief Class complex number
*/

class Complex {

        /*!
            @brief Real sostavlyaushaya
        */

        double Re;

        /*!
            @brief Image sostavlyaushaya
        */

        double Im;

    public:
        Complex( double aRe = 0, double aIm = 0 );
        Complex( const Complex& );
        ~Complex();

        void Set( double aRe, double aIm = 0 );

        operator double();

        double abs();

        friend istream& operator >> ( istream&, Complex& );
        friend ostream& operator << ( ostream&, Complex& );

        friend Complex operator+ (const double&, const Complex& );
        friend Complex operator- (const double&, const Complex& );
        friend Complex operator* (const double&, const Complex& );

        Complex operator+ ( const Complex& );
        Complex operator- ( const Complex& );
        Complex operator* ( const Complex& );

        Complex operator/ ( const double& );
        Complex operator+ ( const double& );
        Complex operator- ( const double& );
        Complex operator* ( const double& );

        Complex& operator+= ( const Complex& );
        Complex& operator-= ( const Complex& );
        Complex& operator*= ( const Complex& );
        Complex& operator=  ( const Complex& );

        Complex& operator+= ( const double& );
        Complex& operator-= ( const double& );
        Complex& operator*= ( const double& );
        Complex& operator/= ( const double& );
        Complex& operator=  ( const double& );
};
#endif
