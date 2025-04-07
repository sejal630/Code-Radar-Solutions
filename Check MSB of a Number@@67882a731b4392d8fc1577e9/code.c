#include <stdio.h>
int main(){
    int num;
    int bit_size=sizeof(int)*8;
    scamf("%d",&num);
    int MSB_check=1<< (bit_size-1);
    if(num & MSB_check){
    printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
    }
