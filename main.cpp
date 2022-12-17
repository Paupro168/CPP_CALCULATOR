//INCLUDE
#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdio.h>

//DEFINE
#define cout        std::cout
#define string      std::string
#define cin         std::cin
#define stoi        std::stoi

/*
                CALCULATOR
*/

// First answer for start or not
string answer;

// Calculator
string num1;
string num2;
string mode;
int opRes;
int iNum1;
int iNum2;


void __exit__(){
    cout << "--__ EXITING __--\n";
    exit(0);
}


int main(){
    cout << "START? Y/n\n";
    cin>>answer;

    //Start program
    if (answer == "y" || answer == "Y")
    {   
        system("clear");
        
        while (true){
            cout<<"Enter the first number you want to operate with(or say 'q' to quit): ";
            cin>>num1;

            if (num1 == "q"){
                exit(0);
            }
            cout<<"\nEnter the second number you want to operate with: ";
            cin>>num2;


            cout<<num1;
            cout<<" stored in num1." << std::endl;
            cout<<num2;
            cout << " stored in num2." << std::endl;

            iNum1 = stoi(num1);
            iNum2 = stoi(num2);

            cout <<"Enter the mode(operator): ";
            cin >> mode;

            if (mode == "+"){
                opRes = iNum1 + iNum2;

                cout <<"- The result of the operation is " << opRes << std::endl;
            }

            else if(mode == "-"){
                opRes = iNum1 - iNum2;

                cout << "- The result of the operation is " << opRes << std::endl;
            }

            else if(mode == "/"){
                opRes = iNum1 / iNum2;

                cout << "- The result of the operation is " << opRes << std::endl;
            }

            else if(mode == "*" || mode == "x"){
                opRes = iNum1 * iNum2;

                cout << "- The result of the operation is " << opRes << std::endl;
            }

            else if(mode == "q"){
                exit(0);
            }


            sleep(2);

            system("clear");
        }
    }

    //Exit program
    else if(answer == "n" || answer == "N"){
        __exit__();
    }


    //Fatal error
    else
    {
        cout<<"!!!ERROR!!!\n";
        __exit__();
    
    }

    return 0;
}