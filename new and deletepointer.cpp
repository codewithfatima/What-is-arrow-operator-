#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is  : "<< real<<endl;
            cout<<"The imaginary part is  : "<< imaginary<<endl;
        }
        
        //constructor 
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
  };

int main(){
//	complex c1;
//	complex *ptr = &c1;
//	(*ptr).setData(12,23);
//	(*ptr).getData();


    //Arrow operator 
    complex *ptr = new complex;
    ptr->setData(12,23);
    ptr->getData();
    
  //Array Of Objects
  complex *ptr1 = new complex[3];
  ptr1->setData(1,3);
  ptr1->getData();
	 
}  
