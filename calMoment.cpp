// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

float annulusMoment(float r1, float r2) {
    if(r1 >r2) {
        cout<<"Invalid input";
        return 0;
    }
    float i;    //declaring the variable, i=second moment of inertia
    i = 3.14*(r2*r2*r2*r2-r1*r1*r1*r1)/4; //calculating inertia
    cout<<"Second moment of inertia : "<<i<<endl;   //printing the value
    return i;
}

int main()
{
    // calling the function
    float r2,r1,I;
        cout<<"Enter inner radius r2 : "; cin>>r1;
    cout<<"Enter outer radius r1 : "; cin>>r2;
    I = annulusMoment(r1,r2);
    return 0;
}
