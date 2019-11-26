/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "myBank.h"

int main()
{
    int b=1;
    printf ("Welcome. This terminal simulate bank accounts managing, choose a code and use an action\n");
        printf ("All codes:\n");
    printf ("o - Open an acount, deposit is needed\n");
    printf ("b - Check acount's status, an acount number is needed\n");
    printf ("d - Update the amount of moeny in your bank account, an acount number and amount is needed\n");
    printf ("w - withdraw an amount of money from your account, an acount number and withdrawl amount is needed\n");
    printf ("c - Close your acount, an acount number is needed\n");
    printf ("i - Add interest to all banks accounts, an interest amount is needed\n");
    printf ("p- Print all accountin the banks\n");
    printf ("e - close all accounts and end terminal\n");
    while (b!=0){
    char activity; double amount; int acount;
    printf ("Enter an activation code:, for a list of a all activation codes type 'm' \n");
    scanf (" %c", &activity);
    if (activity== 'e'){
        b= Exit(b);
        printf("\n");
    }
    else if (activity== 'o' ){
        printf("In order to open your new acount you will need to enter a sum of money\n");
        printf("Please enter the amount you want to lay in your account\n");
        if (scanf(" %lf", &amount)!=1){
            return printf("invalid input\n");
        }
        OpenAccount (Bank, amount);
        printf("\n");
    }
    else if (activity== 'b'){
        printf ("Please state your acount numbe\n");
        if (scanf (" %d", &acount)!=1){
           return printf("invalid input\n"); 
        }
        Money (Bank, acount);
        printf("\n");
    }
    else if (activity== 'd'){
        printf ("Please state your acount number, than the new amount of dollars you want it to have:\n");
         if (scanf (" %d%lf", &acount, &amount)!=2){
           return printf("invalid input"); 
        }
        Update (Bank, acount, amount);
        printf("\n");
    }
    else if (activity== 'w'){
        printf ("Please state your acount number, than the amount of dollars you want to withdraw\n");
         if (scanf (" %d%lf", &acount, &amount)!=2){
           return printf("invalid input\n"); 
        }
        Withdraw (Bank, acount, amount);
        printf("\n");
    }
    else if (activity== 'c'){
        printf ("Please state the acount number you want to close\n");
         if (scanf (" %d", &acount)!=1){
           return printf("invalid input\n"); 
        }
        Close (Bank, acount);
        printf("\n");
    } 
    else if (activity== 'i'){
        printf ("Please state the amount interest you want to add the all bank's accounts by percentage\n");
         if (scanf (" %lf", &amount)!=1){
           return printf("invalid input\n"); 
        }
        Interest (Bank, amount);
        printf("\n");
    }
    else if (activity== 'p'){
        Print(Bank);
        printf("\n");
    }
    else if (activity== 'm'){
    printf ("All codes:\n");
    printf ("o - Open an acount, deposit is needed\n");
    printf ("b - Check acount's status, an acount number is needed\n");
    printf ("d - Update the amount of moeny in your bank account, an acount number and amount is needed\n");
    printf ("w - withdraw an amount of money from your account, an acount number and withdrawl amount is needed\n");
    printf ("c - Close your acount, an acount number is needed\n");
    printf ("i - Add interest to all banks accounts, an interest amount is needed\n");
    printf ("p- Print all accountin the banks\n");
    printf ("e - close all accounts and end terminal\n");
    }
    else{
        printf ("Invalid activity code, please try again.\n");
        printf("\n");
    }
    }
    printf("Thank you for using our termianl");
}

