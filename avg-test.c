
#include "utst.h"

int avg( int x, int y )
{
 printf(" x = %d, y = %d\n", x, y);
  int sum = x + y;
 printf("sum = %d\n", sum);
  return sum / 2;
}

int main()
{
  UTST_ASSERT_INT_EQ( avg(10,20), 15 );
  return 0;
}

