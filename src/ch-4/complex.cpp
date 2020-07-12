#include <iostream>
using namespace std;

class complex{
  private:
    double re, im;
  public:
    complex(): re{0},im{0}{}
    complex(double r , double i): re{r}, im{i}{}
    complex(double r): re{r}, im{0}{}
    double real() const {return re;}
    void real(double d){ re = d;}
    double imaginary() const {return im;}
    void imaginary(double d) { im = d; } 

    // inline functions declared outiside the class
    complex& operator+=(complex b);
    complex& operator-=(complex b);

};

inline complex& complex::operator+=(complex b){
  re = re + b.re;
  im = im + b.im;
  return *this;
};

inline complex& complex::operator-=(complex b){
  re = re - b.re;
  im = im - b.im;
  return *this;
};



int main(){
  complex a{5,5};
  complex b{10,10};

  a+=b;
  
  cout << "complex real is  = " << a.real() << endl;
  cout << "complex imaginary is " << a.imaginary() << endl;

  a-=b;

  cout << "complex real is  = " << a.real() << endl;
  cout << "complex imaginary is " << a.imaginary() << endl;

  a=b;

  cout << "complex real is  = " << a.real() << endl;
  cout << "complex imaginary is " << a.imaginary() << endl;





  return 0;
}
