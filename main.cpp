#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

struct New_user{
    string first_name;
    string surname;
    string fullname;
    string nationality;
    string Place_of_birth;
    int age;
    char gender;
    string user_name;
    string password;
    string nationa_ID_no;
    string username = "Holison";
    string pin = "0000";
    string date_of_birth;
    string date_of_acc_opening;
}user1;

void balance();
void newbie_form();
string pin_generator();
int login(string *name, string *pin);

int main(){

    system("CLS");
    cout<<"\n\n\t\t\t\t\t\tWELCOME TO BANK MANAGEMENT SYSTEM"<<endl;
    cout<<"Enter an Option below...."<<endl;
    cout<<"[1] Log Into an existing account"<<endl;
    cout<<"[2] Create a new account"<<endl;

    int option;
    cout<<">>>> ";
    cin>>option;
    switch(option){

        case 1:{ system("CLS");

            // ask the user to enter their login information
            string username,pin;
            cout<<"User name: ";
            cin>>username;
            cout<<"Pin: ";
            cin>>pin;
            int to_print = login(&username,&pin);
            if (to_print==1){
                cout<<"Login Successful"<<endl;
            }
            else{
                cout<<"Wrong Details"<<endl;
                return 0;
            }
            Sleep(1000);
            system("CLS");
            int option2;
            cout<<"(1) Check Balance"<<endl;
            cout<<"(2) Deposit"<<endl;
            cout<<"(3) Withdraw"<<endl;
            cout<<"Enter an option>>> ";
            cin>>option2;
            if (option2 == 1){
                balance();
            }

        break;
        }
        case 2: system("CLS");
               newbie_form();
          break;
    }
}

void balance(){

    static float balance = 0;
    cout<<"Balance is $"<<balance;
}

void newbie_form()
{
    cout<<"fill the form below with the correct details"<<endl;

    // ask the user for their details and store in the structure created
    cout<<"Date of Opening: ";
    cin>>user1.date_of_acc_opening;
    cout<<"First Name: ";
    cin>>user1.first_name;
    cout<<"Surname: ";
    cin>>user1.surname;

    user1.fullname = user1.first_name +" "+ user1.surname;
    cout<<"Date of Birth: ";
    cin>>user1.date_of_birth;
    cout<<"Nationality: ";
    cin>>user1.nationality;
    cout<<"Place of Birth: ";
    cin>>user1.Place_of_birth;
    cout<<"Gender(M/F): ";
    cin>>user1.gender;
    cout<<"Age: ";
    cin>>user1.age;



    cout<<"\n"<<endl;
    cout<<"Account creation successful"<<endl;

    // clear screen
    //system("CLS");
}


string pin_generator(){

    string numbers = "0,1,2,3,4,5,6,7,8,9";
}

int login(string *name, string *pin){

    // the function compares the value of the user name and pin and returns a value
    if((*name == user1.username)&& (*pin == user1.pin)){
        return 1;
    }
    else{
        return 0;
    }

}

