/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */
/*
#include "rationalNumber.h"
RationalNumber::RationalNumber(){
}


                                                            //Initialzing the rationals
RationalNumber::RationalNumber( int n, int d){
    if (d == 0)
        cout << "Undefined";
    num = n;
    den = d;
    reduction();
}

                                                            //Reduce Function
void RationalNumber::reduction(){
    for(int i = 2; i < num; i++){
        if(num % i == 0 && den % i == 0){
            int GCD = i;
            num = num / GCD;
            den = den / GCD;
        }
    }
}

                                                            //Print Method
void RationalNumber::printRational(){
    if(den == 0)
        cout << "Undefined" << endl;
    else if(num == 0)
        cout << 0;
    else
        cout << num << "/" << den;
}

                                                            //Print Float Method
void RationalNumber::printRationalAsFloating(){
    if(den == 0)
        cout << "Undefined" << endl;
    else if(num == 0)
        cout << 0;
    else
        cout << static_cast<float>(num) / static_cast<float>(den);
}

                                                            //Addition Method
RationalNumber RationalNumber::operator +(const RationalNumber &d) const{
    RationalNumber x;
    
    x.num = num*d.den + d.num*den;
    x.den = den*d.den;
    x.reduction();
    
    return x;
}
                                                            //Subtraction Method
RationalNumber RationalNumber::operator -(const RationalNumber &d) const{
    RationalNumber x;
    x.num = num*d.den - den*d.num;
    x.den = den*d.den;
    x.reduction();
    
    return x;
}



                                                            //Multiplication Method
RationalNumber RationalNumber::operator *(const RationalNumber &d) const{
    RationalNumber x;
    
    x.num = num*d.num;
    x.den = den*d.den;
    
    return x;
    
}

                                                            //Division Method
RationalNumber RationalNumber::operator /(const RationalNumber &d) const{
    RationalNumber x;
    
    x.num = num*d.den;
    x.den = den*d.num;
    x.reduction();
    
    return x;
}

*/


