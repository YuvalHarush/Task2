#include <stdio.h>

int Bank [50][2]= {{0},{0}};
int OpenAccount (int array[50][2], int amount);
int Money (int arr[50][2], int acc);
int Update (int arr[50][2],int acc, int new);
int Withdraw (int arr[50][2],int acc,int amount);
int Close (int arr[50][2],int acc);
int Interest (int arr[50][2], int rate);
int Print (int arr[50][2]);
int Exit (int b);