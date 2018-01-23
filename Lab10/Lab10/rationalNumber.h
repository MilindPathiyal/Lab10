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
#ifndef rational_h
#define rational_h



#include <cstdlib>
#include <iostream>
using namespace std;

class RationalNumber{
public:
    RationalNumber();
    RationalNumber(int num, int den);
    void printRational();
    void printRationalAsFloating();
    RationalNumber operator +(const RationalNumber &d)const;
    RationalNumber operator -(const RationalNumber &d)const;
    RationalNumber operator *(const RationalNumber &d)const;
    RationalNumber operator /(const RationalNumber &d)const;
    

    
private:
    int x = 0;
    void reduction();
    int num = 1;
    int den = 1;

    };


#endif /* rational_h */
