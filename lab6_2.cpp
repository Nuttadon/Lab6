#include <iostream>
#include<cmath>
using namespace std;
double deg2rad(double inde){
    return (inde*M_PI)/180;
}
double rad2deg(double inra){
    return 90-(inra*(180/M_PI));
    // if(inra =! 0){
    // return 90-(inra*(180/M_PI));
    // }
    // else{
    //     return 0;
    // } สำหรับแก้ไขบัคเมื่อ ใส่องศาเป็น 0 ทั้งหมดแล้วผลขององศาลัพธ์จะออกมาเป็น 90 (แต่ใส่ในตัวทดลองแล้วผิด)
        
}
double findXComponent(double le1,double le2,double an1,double an2){
    return le1*sin(an1) + le2*sin(an2);
}
double findYComponent(double le1,double le2,double an1,double an2){
    return le1*cos(an1) + le2*cos(an2);
}
double pythagoras(double x,double y){
    return sqrt((x*x)+(y*y));
}
void showResult(double l,double d){
  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
  cout << "Length of the resultant vector = " <<l<<endl;
  cout << "Direction of the resultant vector (deg) = "<<d<<endl;
  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
