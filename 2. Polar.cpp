#include <bits/stdc++.h>
using namespace std;
class Polar
{
  double radius;
  double angle;
  double getx(){
      return radius*cos(angle);
    }
  double gety(){
      return radius*sin(angle);
    }
public:
   Polar(){
       radius=0.0;angle=0.0;
       }
   Polar(float r,float a){
      radius=r;
      angle=a;
    }
   void display(){
      cout<<radius<<" "<<angle;
    }

  Polar operator + (Polar o2){
    double x = getx()+o2.getx();
    double y = gety()+o2.gety();
    double r = sqrt(x*x + y*y);   //converts x and y to
    double a = atan(y/x);         //Polar co-ordinate.
    return Polar(r,a);
  }
};

int main(){
 Polar o1(5,21), o2(3,15), o3;
 o3=o1+o2;
 cout<<"x = ";
 o1.display();
 cout<<"\ny = ";
 o2.display();
 cout<<"\nPolar(r, theta) =";
 o3.display();
}
