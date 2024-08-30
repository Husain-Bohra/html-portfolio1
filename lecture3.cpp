#include<iostream>
using namespace std;
int main(){
int variable1 , variable2, variable3 ;
cout<<"Enter 2 numbers to be swapped"<<endl;
cin>>variable1>>variable2;
variable3=variable1;
variable1=variable2;
variable2=variable3;
cout<<"The swapped values are "<<variable1<<endl;
cout<<" and "<<variable2;



    return 0;
}