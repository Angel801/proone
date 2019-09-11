// File Name: program1_a_f381.cpp
//
// Author: Alex Fong, Angel Juarez
// Date: 9/5/2019
// Assignment Number: 1
// CS 2308.005 Fall 2019
// Instructor: Joaquin Palacios
//
// This program will display a menu of Apple items, then calculate the cost of desired items, then output your Subtotal, Tax(8.25, and Total for the items selected.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct menuItemType
{
    string itemName; //Name of Item
    double itemPrice; //Price of Item
    int numOrdered;
};
menuItemType theMenu[6];

void showMenu();//this will display the menu
int takeOrder;
int choice;// this allows the user to input the order
void printCheck(double &tax, double &totalBill);


int main()
{
    int choice=0;
    
    showMenu();
    
    
    theMenu[0].itemName  = "#1  Macbook Air"; // This part sets the itemName array to a numbered product list showing prices.
    theMenu[1].itemName  = "#2  Macbook Pro";
    theMenu[2].itemName  = "#3  iPad Air";
    theMenu[3].itemName  = "#4  iPad Pro 11-in";
    theMenu[4].itemName  = "#5  iPad Pro 12.9-in";
    theMenu[5].itemName  = "#6  Watch S4";
    theMenu[0].itemPrice  = 1099.00;
    theMenu[1].itemPrice  = 1299.00;
    theMenu[2].itemPrice  = 499.00;
    theMenu[3].itemPrice  = 799.00;
    theMenu[4].itemPrice  = 999.00;
    theMenu[5].itemPrice  = 399.00;
    cin>>choice;

    
    switch(choice)
    {
        case '0': {cout << "1";}
        break;
        case '1' : {cout << "2";}
            break;
        case '2': {cout << "3";}
            break;
        case '3' : {cout << "4";}
            break;
        case '4' : {cout << "5";}
            break;
        case '5': {cout << "6";}
            break;
        default : cout << "*Error: There is no item " << choice<<  endl;
    }
}


void showMenu()
{
    
    cout <<"MacBook Air           $1099.00"<<endl;
    cout <<"MacBook Pro           $1299.00"<<endl;
    cout <<"iPad Air              $499.00"<<endl;
    cout <<"iPad Pro 11-in        $799.00"<<endl;
    cout <<"IPad Pro 12.9-in      $999.00"<<endl;
    cout <<"Watch S4              $399.00"<<endl <<endl;
    cout <<"Input the item numbers for the order, 0 to quit"<<endl;
    
}

