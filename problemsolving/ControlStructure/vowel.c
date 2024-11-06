// Check whether an alphabet entered by the user is a vowel or a consonant.
#include <stdio.h>
void main(){
    char a;
    printf("Enter the character you want to check: \n");
    scanf("%c",&a);
    if(a=='i' || a=='I' || a=='i' || a=='a' || a=='A' || a=='e' || a=='E' || a=='o' || a=='O' || a=='u' || a=='U')
    {
        printf("%c is a vowel",a);
    }




}
