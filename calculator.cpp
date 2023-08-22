#include <iostream>
#include <cmath>

using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
double sin(double x, double terms) {
    double result = 0.0;
    for (int n = 0; n < terms; ++n) {
        double term = (pow(-1, n) * pow(x, 2 * n + 1)) / factorial(2 * n + 1);
        result += term; // Accumulate the terms
    }
    return result;
}

double cos(double x, double terms) {
    double result = 0.0;
    for (int p = 0; p < terms; ++p) {
        double term = (pow(-1, p) * pow(x, 2 * p)) / factorial(2 * p);
        result += term; // Accumulate the terms
    }
    return result;
}
double Exponential(double x, int terms) {
    double result = 1.0;
    for (int n = 1; n < terms; ++n) {
        double term = pow(x, n) / factorial(n);
        result += term;
    }
    return result;
}
int main() {
    int choice;
    do {
        cout << "Which operation do you want to perform? (Enter the corresponding number)" << endl;
        cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl;
        cout << "4. Division" << endl << "5. Remainder" << endl << "6. Square root" << endl;
        cout << "7. Square" << endl << "8. Trigonometric function" << endl << "9. Exponential function" << endl << "10. Exit" << endl;
        cin >> choice;

        if (choice == 10) {
            cout << "Exiting the program." << endl;
            break;
        }

        double n1, n2, result;
        int n3;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                result = n1 + n2;
                cout << "The sum is: " << result << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                result = n1 - n2;
                cout << "The subtraction result is: " << result << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                result = n1 * n2;
                cout << "The multiplication result is: " << result << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                if (n2 != 0) {
                    result = n1 / n2;
                    cout << "The division result is: " << result << endl;
                } else {
                    cout << "Cannot divide by zero." << endl;
                }
                break;
            case 5:
                cout << "Enter two numbers: ";
                cin >> n1 >> n2;
                if (n2 != 0) {
                    result = fmod(n1, n2);
                    cout << "The remainder is: " << result << endl;
                } else {
                    cout << "Cannot divide by zero." << endl;
                }
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> n3;
                if (n3 >= 0) {
                    result = sqrt(n3);
                    cout << "The square root is: " << result << endl;
                } else {
                    cout << "Cannot compute square root of a negative number." << endl;
                }
                break;
            case 7:
                cout << "Enter a number: ";
                cin >> n3;
                result = n3 * n3;
                cout << "The square is: " << result << endl;
                break;
            case 8:
                char trigChoice;
                double x;
                cout << "Enter the trigonometric function (sin(s),cos(c), tan(t), cot(d), cosec(e),sec(f) ";
                cin >> trigChoice;
                cout << "Enter the angle in degrees: ";
                cin >> x;// Convert to radians
                x = x * M_PI / 180.0; 
                switch (trigChoice) {
                    case 's':
                      
                      cout<<"the value of sin is"<<sin(x,10)<<endl;
                        break;
                    case 'c':
                      cout<<"the value of cos is"<<cos(x,10)<<endl;
                       break;
                    case 't':
                      cout<<"the value of tan is"<<sin(x,10)/cos(x,10)<<endl;
                       break;
                    case 'd':
                      cout<<"the value of cot is"<<cos(x,10)/sin(x,10)<<endl;
                        break;
                    case 'e':
                        cout<<"the value of cosec is"<<1/sin(x,10)<<endl;
                        break;
                    case 'f':
                        cout<<"the value of sec is"<<1/cos(x,10)<<endl;
                        break;
                    default:
                        cout << "Invalid trigonometric function choice." << endl;
                        break;
                }
                break;
            case 9:
                cout << "Enter a number: ";
                cin >> n3;
                cout << "The exponential value is: " << Exponential(n3,10) << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }

    } while (true);

    return 0;
}