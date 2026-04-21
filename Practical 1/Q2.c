#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int n;
    char *str;

    printf("Enter size for your string : ");
    scanf("%d",&n);

    str = (char*)malloc((n+1)*sizeof(char));

    if(str == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    getchar();

    printf("Enter a string : ");
    fgets(str,n+1,stdin);

    str[strcspn(str,"\n")] = '\0';

    printf("Entered string : %s\n",str);

    printf("Length of the string : %zu",strlen(str));

    free(str);

    return 0;
}