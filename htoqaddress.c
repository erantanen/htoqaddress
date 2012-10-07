#include <stdio.h>

// inital experiment with taking hex addresses to pushing
// them to IPv4 quad address.

//Ed Rantanen
// 07 oct 2015
//


void main()
{

int i;

char c[4]  = {0x0A,0x00,0x02,0x0F};

int i_0 = (int) c[0];
int i_1 = (int) c[1];
int i_2 = (int) c[2];
int i_3 = (int) c[3];

   printf("%d.%d.%d.%d", (int)c[0], (int)c[1], (int)c[2], (int)c[3]);

   printf("\n\n");
}
