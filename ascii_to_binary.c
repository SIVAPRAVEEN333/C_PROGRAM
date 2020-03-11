
/*
    @Name: ascii_to_binary
    @Author: Sivapraveen S
    @Date: 11.03.2020
*/
/*
first method
#include<stdio.h>
int ascii_to_binary(int ch);
int main()
{
    char ch_l=0,ch_h=0;             //ch_h=highest index,ch_l=lowest index
    printf("\nEnter the character lowest index: ");
    scanf("%c",&ch_l);
    printf("\nEnter the character highest index: ");
    scanf("%c",&ch_h);
    while(ch_l>=ch_h)
    {
        printf("\n%c\t%d",ch_l,ascii_to_binary(ch_l));
        ch_l++;
    }
    return 0;
}
int ascii_to_binary(int ch)
{
    int result=0,i=1,rem;
    while(ch>0)
    {
        rem=ch%2;
        result=result+(i*rem);
        ch=ch/2;
        i=i*10;
    }
    return(result);
}
*/

/*
//second method:
#include <stdio.h>

  int ascii_to_binary(int ch) {
        int result = 0, i = 1, rem;

        // convert decimal to binary format 
        while (ch > 0) {
                rem = ch % 2;
                result = result + (i * rem);
                ch = ch / 2;
                i = i * 10;
        }

        // print the resultant binary value 
        return(result);
  }

  int main() {
        int ch = 'a';
        printf("\tCharacter  ASCII  Binary\n");
        while (ch <= 'z') {
                printf("\t%c\t%d\n", ch,
                     ascii_to_binary(toascii(ch)));
                ch++;
        }
        return 0;
  }
  
*/

