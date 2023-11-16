#include "dincl.h"

double r, i;

main()
{
printf ("Entry of 0 exits.\n");
r=0;
do
{
  i = in();
  r = r + i;
}while (i!=0);
out(r);
}
