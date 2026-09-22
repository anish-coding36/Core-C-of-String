#include<stdio.h>
#include<string.h>
int main(){
        char a[]="Anish ";
        char b[]="Chakraborty";
        if(strcmp(a,b)==0){
                printf("The String are Same\n");
        }
        else if(strcmp(a,b)>0){
                printf("The 1st String is Big\n");
        }
        else if(strcmp(a,b)<0){
                printf("The 2nd String is Big\n");
        }
        else{
                printf("invalid data\n");
        }
        //strcat(a,b);
        printf("The Concatenate String is:%s\n",strcat(a,b));
        return 0;
}