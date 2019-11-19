#include <stdio.h>

int OpenAccount (int array[50][2], int amount){
    int b=0;
    for (int i=0; i<50; i++){
        if  (array[i][0]== 0){
            b=1;
            if (i==0){
                array [i][0]= 901;
                array [i][1]= amount;
            } else{
                array [i][0]= array[i-1][0] + 1;
                array [i][1]= amount;
            }
            printf ("New have %d$ in acount number %d\n", array[i][1], array[i][0]);
            break;
        } else {
            printf ("No more avilable accounts");
        }
    }
    return 0;
}

int Money (int arr[50][2], int acc){
    int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            int temp= arr [i][1];
            printf ("You have %d$ in your account \n", temp);
            b=1;
            break;
        }
    }
            if (b==0){
            printf ("You have no account in this bank\n");
        }
        return 0;
    
}

int Update (int arr[50][2],int acc, int new){
    int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            arr[i][1]= new;
            printf ("You have %d$ in account number %d\n", arr[i][1], arr[i][0]);
            b=1;
            break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank");
    }
    return 0;
}

int Withdraw (int arr[50][2],int acc,int amount){
    int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            arr[i][1]= arr[i][1]- amount;
            printf ("You have %d$ in account number %d\n", arr[i][1], arr[i][0]);
            b=1;
            break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank\n");
    }
    return 0;
}

int Close (int arr[50][2],int acc){
    int b=0; int temp= acc;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            arr[i][0]= 0;
            arr[i][1]= 0;
            printf ("Account number %d is deleted\n", temp);
            b=1;
            break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank\n");
    }
    return 0;
}

int Interest (int arr[50][2], int rate){
    double The_rate= rate*0.01;
    for (int i=0; i<50; i++){
        arr[i][1]= arr[i][1] + arr[i][1]* The_rate;
    }
    printf ("All acounts has been updated and grew by %d%\n", rate);
    return 0;
}

int Print (int arr[50][2]){
    printf ("All accounts in the banks are:\n");
    for (int i=0; i<50; i++){
        if (arr[i][0]!=0){
            printf ("Acount number: %d, Money in account: %d$\n", arr[i][0], arr[i][1]);
        }
    }
    return 0;
}
int Exit (int b){
   return b=0;
}