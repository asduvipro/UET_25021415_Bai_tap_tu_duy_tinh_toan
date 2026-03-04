#include <iostream> 
using namespace std;
int main(){
    int a,b;
    char c;
    while(true){cout<<"nhap so a: ";
    cin>>a;
    cout<<"nhap so b: ";
    cin>>b;
    cout<<"nhap phep tinh: ";
    cin>>ws>>c;
   cout<<"ket qua = " ;
   switch(c)
   {case '+': cout<<a+b;break;
   case '-': cout<< a-b;break;
   case 'x': cout<<a*b;break;
   case ':': cout<<a/b<<" du "<<a%b;break;
   default: cout<<endl<<"Phep tinh khong hop le";}
   cout<<endl;}
   return 0;
}