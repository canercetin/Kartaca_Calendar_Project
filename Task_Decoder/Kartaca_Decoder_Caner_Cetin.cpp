#include<stdio.h>
#include<stdlib.h>

void decoder(char text[]);
int main()
{
	char text[5000] ="Nrodb jhovlq!"; //Write texts here!
/*

*/	
	
	decoder(text);
	
	return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
void decoder(char text[])
{ 	
	for(int i = 0; i<500; i++)
 	{
 		if((text[i] >= 97 && text[i] <= 99) || (text[i] >= 65 && text[i] <= 67))
 		{
 			printf("%c",(text[i]+23));
		}
		else if((text[i] >= 97 && text[i] <= 122) || (text[i] >= 68 && text[i] <= 90)){
			printf("%c",(text[i]-3));
		}
		else printf("%c",text[i]);
 		
	}
}
