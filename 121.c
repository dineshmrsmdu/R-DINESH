#include <stdio.h>
void main()
{
    char str[50];
    scanf("%[^\n]s",str);
    int l=strlen(str),i;
    int hash[l+1];
    for(i=0;i<l+1;i++){
        hash[i]=0;
    }
    hash[0]=1;
    hash[1]=1;
    for(i=2;i<=l;i++){
        if(str[i-1]>'0'){
            hash[i]=hash[i-1];
        }
        if((str[i-2]=='2'&&str[i-1]<'7')||str[i-2]<'2'){
            hash[i]=hash[i]+hash[i-2];
        }
       
    }
    printf("%d",hash[l]);
 
}
