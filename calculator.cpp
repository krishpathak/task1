#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    
    do 
    {
        cout << "Which operation do you want to perform? (Enter the corresponding number)" << endl;
        cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl;
        cout << "4. Division" << endl << "5. Remainder" << endl << "6. Square root" << endl;
        cout << "7. Square" << endl << "8. Trigonometric function" << endl << "9. Exponential function" << endl;
        cout << "10. Absolute value" << endl << "11. Power" << endl;
        
        
        int op;
        cin>>op;
        double n1,n2;
        int n3;
        switch(op)
        {
            case 1:
            cout<<"Enter two numbers"<<endl;
            cin>>n1>>n2;
            cout<<"The sum of "<<n1<<" and "<<n2<<" is  "<<n1+n2<<endl;
            break;
            case 2:
            cout<<"Enter two numbers"<<endl;
            cin>>n1>>n2;
            cout<<"The substraction of "<<n1<<" and "<<n2<<" is  "<<n1-n2<<endl;
            break;
            case 3:
            cout<<"Enter two numbers"<<endl;
            cin>>n1>>n2;
            cout<<"The multiplication of "<<n1<<" and "<<n2<<" is  "<<n1*n2<<endl;
             break;
             case 4:
             cout<<"Enter two numbers"<<endl;
            cin>>n1>>n2;
            cout<<"The divison of "<<n1<<" and "<<n2<<"is  "<<n1/n2<<endl;
            break;
            case 5:
            int n4,n5;
            cout<<"Enter two numbers"<<endl;
            cin>>n4>>n5;
            cout<<"The remainder when "<<n4<<" is divided by "<<n5<< " is "<<n4%n5<<endl;
            break;
            case 8:
             {
             char trig;
             double a;
             cout<<"Enter trignometric function(Enter first letter)"<<endl;
             cout<<"a.sin"<<endl<<"b.cos"<<endl<<"c.tan"<<endl<<"d.cosec"<<endl<<"e.sec"<<endl<<"f.cot"<<endl;
             cin>>trig;
             
             cout<<"Enter the value in degree"<<endl;
             cin>>a;
             a=(M_PI*a)/180.0;
            switch(trig)
            {
                case 'a':
                cout<<"The sin value is"<<sin(a)<<endl;
                break;
                case 'b':
                cout<<"The cos value is"<<cos(a)<<endl;
                break;
                case 'c':
                cout<<"The tan value is"<<tan(a)<<endl;
                break;
                case 'd':
                cout<<"The cosec value is"<<(1/sin(a))<<endl;
                break;
                case 'e':
                cout<<"The sec value is"<<(1/cos(a))<<endl;
                break;
                case 'f':
                cout<<"The cot value is"<<(1/tan(a))<<endl;
                break;
                default:
                cout<<"Something went wrong:("<<endl;
                break;
            } break;
            case 6:
            cout<<"Enter the value"<<endl;
            cin>>n3;
            cout<<"The square root of "<<n3<<" is "<<sqrt(n3)<<endl;
            break;
            case 7:
            cout<<"Enter the value"<<endl;
            cin>>n3;
            cout<<"The square of "<<n3<<" is "<<n3*n3<<endl;
            break;
            case 9:
            cout<<"Enter the value"<<endl;
            cin>>n3;
            cout<<"The exponential of "<<n3<<" is "<<exp(n3)<<endl;
            break;
            case 10:
            cout<<"Enter the value"<<endl;
            cin>>n3;
            cout<<"The absolute value of "<<n3<<" is "<<abs(n3)<<endl;
            break;
            case 11:
            cout<<"Enter two numbers"<<endl;
            cin>>n1>>n2;
            cout<<"The value of "<<n1<<" raised "<<n2<<" is "<<pow(n1,n2)<<endl;
            default:
            cout<<"Something went wrong:(";
            break;
        }
    }
}
    while(1);
    return 0;
}