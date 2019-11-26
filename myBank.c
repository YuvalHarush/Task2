#include <stdio.h>

int OpenAccount (double array[50][2], double amount){
    if (amount<=0){
        return printf("An account can't be opened with 0 or less amount of money\n");
    } else {
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
            printf ("You have %.2lf$ in account number %.0lf\n", array[i][1], array[i][0]);
            break;
        } else {
            printf ("No more avilable accounts\n");
        }
    }
    return 0;   
    }
}

int Money (double arr[50][2], double acc){
    int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            double temp= arr [i][1];
            printf ("You have %.2lf$ in your account \n", temp);
            b=1;
            break;
        }
    }
            if (b==0){
            printf ("You have no account in this bank\n");
        }
        return 0;
    
}

int Update (double arr[50][2],double acc, double new){
    if (new <= 0){
        return printf ("You can't have 0$ or less in your account\n");
    }
    else {
      int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            arr[i][1]= new;
            printf ("You have %.2lf$ in account number %.0lf\n", arr[i][1], arr[i][0]);
            b=1;
            break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank\n");
    }
    return 0;  
    }
}

int Withdraw (double arr[50][2],double acc,double amount){
    int b=0;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
                if (arr[i][1]- amount<=0){
                    return printf ("You cant have 0$ or less in your account\n");
                    
                }
                arr[i][1]= arr[i][1]- amount;
                printf ("You have %.2lf$ in account number %.0lf\n", arr[i][1], arr[i][0]);
                b=1;
                break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank\n");
    }
    return 0;
}

int Close (double arr[50][2],double acc){
    int b=0; double temp= acc;
    for (int i=0; i<50; i++){
        if (arr[i][0]== acc){
            arr[i][0]= 0;
            arr[i][1]= 0;
            printf ("Account number %.0lf has been deleted\n", temp);
            b=1;
            break;
        }
    }
    if (b==0){
        printf ("You have no account in this bank\n");
    }
    return 0;
}

int Interest (double arr[50][2], double rate){
    double The_rate= rate*0.01;
    for (int i=0; i<50; i++){
        arr[i][1]= arr[i][1] + arr[i][1]* The_rate;
    }
    printf ("All acounts has been updated and grew by %.2lf\n", rate);
    return 0;
}

int Print (double arr[50][2]){
    printf ("All accounts in the banks are:\n");
    for (int i=0; i<50; i++){
        if (arr[i][0]!=0){
            printf ("Acount number: %.0lf, Money in account: %.2lf$\n", arr[i][0], arr[i][1]);
        }
    }
    return 0;
}
int Exit (int b){
   return b=0;
}