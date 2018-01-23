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

#ifndef rational_h
#define rational_h



#include <cstdlib>
#include <iostream>
using namespace std;

class RationalNumber{
public:
    RationalNumber();
    RationalNumber(const int num, const int denom);
    
    friend ostream& operator <<(ostream &out, const RationalNumber &rational);
    friend istream& operator >>(istream &in, RationalNumber &rational);
    

    void printRational();
    void printRationalAsFloating();
    friend RationalNumber operator +(const RationalNumber &rational1, const RationalNumber &rational2);
    friend RationalNumber operator -(const RationalNumber &rational1, const RationalNumber &rational2);
    friend RationalNumber operator *(const RationalNumber &rational1, const RationalNumber &rational2);
    friend RationalNumber operator /(const RationalNumber &rational1, const RationalNumber &rational2);

    friend bool operator <(const RationalNumber &rational1, const RationalNumber &rational2);
    friend bool operator >(const RationalNumber &rational1, const RationalNumber &rational2);
    friend bool operator <=(const RationalNumber &rational1, const RationalNumber &rational2);
    friend bool operator >=(const RationalNumber &rational1, const RationalNumber &rational2);
    friend bool operator ==(const RationalNumber &rational1, const RationalNumber &rational2);
    friend bool operator !=(const RationalNumber &rational1, const RationalNumber &rational2);
   
private:
    int x = 0;
    int GCD(int x, int y);
    void reducer_();
    int n = 1;
    int d = 1;
    };


#endif /* rational_h */
