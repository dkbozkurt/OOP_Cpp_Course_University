//Dogukan Kaan Bozkurt

#include "Rational.h"
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <iomanip>	//setw icin gerekli.
#include "Rational.h"
using namespace std;

Rational::Rational(double n_,double d_)
{
	num=n_;
	den=d_;
}

Rational::~Rational()
{
}
///
ostream &operator<<(ostream &output,const Rational &out )
{
	output<<out.num <<"/"<< out.den;
	return output;	
}
istream &operator>>(istream &inp,Rational &in)
{
	inp>>setw(1)>>in.num;
	inp.ignore(1);	//skip
	inp >> setw(1) >>in.den;
	return inp;
}
///
Rational Rational::operator+(const Rational& p){
    Rational temp;
    temp.num=(*this).num*p.den+(*this).den*p.num;
    temp.den=(*this).den*p.den;
    return temp;									//return Rational(this->num*r.den+this->den*r.num,this->den*r.den); gibi de yazilabilirdi.
}
Rational Rational::operator-(const Rational& s){
    Rational temp;
    temp.num=(*this).num*s.den-(*this).den*s.num;
    temp.den=(*this).den*s.den;
    return temp;
}
Rational Rational::operator*(const Rational& m){
    Rational temp;
    temp.num=(*this).num*m.num;
    temp.den=(*this).den*m.den;
    return temp;

}
Rational Rational::operator/(const Rational& d){
    Rational temp;
    temp.num=(*this).num*d.den;
    temp.den=(*this).den*d.num;
    return temp;
}
///
bool Rational::operator ==(const Rational& e){	//e=n2,this=n1
	
	if(((*this).num/(*this).den)==(e.num/e.den))
		return 1;
	else
		return 0;
}

bool Rational::operator !=(const Rational& ne){
	
	if(((*this).num/(*this).den)!=(ne.num/ne.den) )
		return 1;
	else
		return 0;	
}
bool Rational::operator <(const Rational& l){
	
	if(((*this).num/(*this).den)<(l.num/l.den))
		return 1;
	else
		return 0;	
}
bool Rational::operator >(const Rational& g){
	
	if(((*this).num/(*this).den)>(g.num/g.den))
		return 1;
	else
		return 0;	
}
bool Rational::operator <=(const Rational& le){
	
	if(((*this).num/(*this).den)<=(le.num/le.den))
		return 1;
	else
		return 0;	
}
bool Rational::operator >=(const Rational& ge){
	
	if(((*this).num/(*this).den)>=(ge.num/ge.den))
		return 1;
	else
		return 0;	
}
///
Rational& Rational::operator++(void)
{
    this->num = this->den + this->num;
    return *this;
}

Rational Rational::operator++(int pp)
{
	Rational temp(this->num,this->den);
	this->num = this->den + this ->num;
	return temp;
}
///
Rational& Rational::operator--(void)
{
    this->num = this->num - this->den;
    return *this;
}

Rational Rational::operator--(int ss)
{
	Rational temp(this->num,this->den);
	this->num = this ->num - this->den;
	return temp;
}
