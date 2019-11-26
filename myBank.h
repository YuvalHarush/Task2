#include <stdio.h>

double Bank [50][2]= {{0},{0}};
int OpenAccount (double array[50][2], double amount);
int Money (double arr[50][2], double acc);
int Update (double arr[50][2],double acc, double new);
int Withdraw (double arr[50][2],double acc,double amount);
int Close (double arr[50][2],double acc);
int Interest (double arr[50][2], double rate);
int Print (double arr[50][2]);
int Exit (int b);