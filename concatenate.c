#include <stdio.h>
#include <string.h>

int main(){
    char s1[34];
    char s2[14]="qwertyuioplkj";
    char s3[20]="zxcvbnmlkjhgfdsaqwe";
    
    strcpy(s1,s2);
    printf("S1: %s\n",s1);
    
    strcat(s1,s3);
    printf("S1: %s\n",s1);
}

    
    
