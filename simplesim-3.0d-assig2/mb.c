#include <stdio.h>
int main (int argc, char *argv[ ])
{
	/* compiled using -O0 flag in the ssbig-na-sstrix-gcc mbq1.c -O0 -o mbq1*/

	int i = 0, x =0, y =0;

	while (i < 10000)
	{
	  if (i % 2 == 0)
	  { 
	    x = i / 2;
	    for (; x < 1000; x++);
	  }

	  if (x != 0)
	  {
	    y = i + x;
	  }

	  if (x + y < i + y)
	  {
	     i += 2;
	     x = 0;
	  }
	  
	  i++;
	}

return 0;
}
