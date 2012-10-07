#include <stdio.h>

// inital experiment with taking hex addresses to pushing
// them to IPv4 quad address.

//Ed Rantanen
// 07 oct 2015
//


void main()
{

int i;

//char c[4]  = {0x0A,0x00,0x02,0x0F};
unsigned char c[4]  = {0x0a,0x00,0x02,0xff};


char c_char;

char q_address[16];



printf("-----------------------\n");

  for(i = 0; i < sizeof(c); i++)
   {
     int c_int  = (int) c[i];

      if(c_int < 10 ) {
           c_char = (char) c_int;
       }else{
     
         c_int = c_int % 10;
          c_char = (char) c_int;  
       }   

      printf("%d %d  %c \n", i, (int)c[i], (c_char + 48) );
    }

printf("-----------------------\n\n");


   sprintf(q_address, "%d.%d.%d.%d", (int)c[0], (int)c[1], (int)c[2], (int)c[3]);
   printf("decimals have been concated into a string\n");

   printf("%s -> as a string\n", q_address);
        
   printf("%d.%d.%d.%d -> as . seperated decimals", (int)c[0], (int)c[1], (int)c[2], (int)c[3]);
   printf("\n\n");

}
