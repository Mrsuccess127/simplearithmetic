#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int r1, r3;
    char operation1;
    char operation2;

    cout<<"enter a number";
    cin>>num1;
    cout<<"select an operation";
    cin>>operation1;
    cout<<"enter a number";
    cin>>num2;
    cout<<"select an operation";
    cin>>operation2;
    cout<<"enter a number";
    cin>>num3;



    switch(operation1) {
        case '+':
         r1 = num1 + num2;
            break;
        case '-':
         r1 =  num1 - num2;
            break;
        default:
            cout <<"error in operation";
            break;
    }

    switch(operation2) {
        case '+':
          //  result =
                   r3 = r1+num3;
          // cout<<result;
            break;
        case '-':
          //  result =
                  r3 = r1-num3;
        // cout<<result;
            break;
        default:
            cout<<"error";
    }


    cout<<r3;
    }


