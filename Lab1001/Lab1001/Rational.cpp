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

#include "rationalNumber.h"
RationalNumber::RationalNumber(){
}


                                                            //Initialzing the rationals
RationalNumber::RationalNumber( int num, int denom) : n(num), d(denom){

}

                                                            //Reduce Function
ostream& operator <<(ostream &out, const RationalNumber &rational){
    if(rational.d == 1)
        out << rational.n;
    else if (rational.n == 0)
        out << "0";
    else if(rational.n == rational.d)
        out << "1";
    else if(rational.d == 0)
        cout << "undefined" << endl;
    else if(((rational.n < 0) && (rational.d < 0 )) || ((rational.n > 0 ) && (rational.d < 0)))
        out << rational.n * -1 << "/" << rational.d*-1;
    else
        out << rational.n << "/" << rational.d;
    return out;
}

istream& operator >>(istream &in, RationalNumber &rational){
    cout << endl << "Enter the numerator: ";
    in >> rational.n;
    cout << "Enter the denominator: ";
    in >> rational.d;
    if(rational.d == 0){
        cout << "Not valid. Exitting." << endl;
        system("pause");
        exit(1);
    }
    return in;
}


void RationalNumber::reducer_(){
    int greatestCommonDivisor = GCD(n, d);
    n /= greatestCommonDivisor;
    d /= greatestCommonDivisor;
    
    if((n>0 && d < 0) || (n < 0 && d < 0)){
        d = -d;
        n = -n;
    }
}

int RationalNumber::GCD(int x, int y){
    if (y==0)
        return x;
    else return GCD(y, x%y);
}

RationalNumber operator +(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber result;
    result.n = rational1.n * rational2.d + rational2.n * rational1.d;
    result.d = rational1.d * rational2.d;
    result.reducer_();
    return result;
}
RationalNumber operator -(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber result;
    result.n = rational1.n * rational2.d - rational2.n * rational1.d;
    result.d = rational1.d * rational2.d;
    result.reducer_();
    return result;
}
RationalNumber operator *(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber result;
    result.n = rational1.n * rational2.n;
    result.d = rational1.d * rational2.d;
    result.reducer_();
    return result;
}
RationalNumber operator /(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber result;
    result.n = rational1.n * rational2.d;
    result.d = rational1.d * rational2.n;
    result.reducer_();
    return result;
}

bool operator >(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return (subtractionResult.n > 0);
}
bool operator <(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return (subtractionResult.n < 0);
}
bool operator >=(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return (subtractionResult.n > 0 || subtractionResult.n == 0);
}
bool operator <=(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return (subtractionResult.n < 0 || subtractionResult.n == 0);
}
bool operator ==(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return (subtractionResult.n == 0);
}
bool operator !=(const RationalNumber &rational1, const RationalNumber &rational2){
    RationalNumber subtractionResult = rational1 - rational2;
    return !(subtractionResult.n == 0);
}


//Print Method
void RationalNumber::printRational(){
    if(d == 0)
        cout << "Undefined" << endl;
    else if(n == 0)
        cout << 0;
    else
        cout << n << "/" << d;
}

//Print Float Method
void RationalNumber::printRationalAsFloating(){
    if(d == 0)
        cout << "Undefined" << endl;
    else if(n == 0)
        cout << 0;
    else
        cout << static_cast<float>(n) / static_cast<float>(d);
}


