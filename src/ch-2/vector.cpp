#include <iostream>
using namespace std; 

class Vector{
private:
  double* elem;
  int sz;
public:
  Vector(int s): elem{new double[s]},sz{s}{}
  double& operator[](int i){return elem[i];}
  int size(){ return sz ;}
};


double read_and_sum(Vector& v){
  double sum{0.0};
  for(int i=0; i < v.size() ; i++){
    cout << "Enter a Number " ;
    cin >> v[i];
  }
  cout << "Read " << v.size()  << " numbers into the vector" << endl;
  for(int i=0; i < v.size() ; i++){
    sum = sum + v[i];
  }

  return sum;
};



int main(){

  Vector v(5);
  cout << "Size of Vector is " << v.size() << endl;
  double sum =   read_and_sum(v);
  cout << "The sum of the vector is " << sum << endl;
  return 0;

}
