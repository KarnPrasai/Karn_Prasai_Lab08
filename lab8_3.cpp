/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
    int y_age;
    int y_height;
    int y_bounty;
    string character;
    cout << "Enter your age: ";
    cin >> y_age;
    if(y_age <= 25)
    {
        cout << "Enter your height: ";
        cin >> y_height;
        if(y_height < 100)
            character = "Chopper";
        else if(y_height < 180)
            character = "Usopp";
        else
        {
            cout << "Enter your bounty: ";
            cin >> y_bounty;
            if(y_bounty > 1100000000)
                character = "Zoro";
            else
                character = "Sanji";
        }
    }
    else if(y_age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> y_bounty;
        if(y_bounty > 500000000)
            character = "Jinbe";
        else   
            character = "Franky";
    }
    else
        character = "Brook";
    cout << "Your character = " << character;
}
