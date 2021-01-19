#include <stdlib.h>
#include "hoofd.h"
#include "sub1.h"
#include "sub2.h"
#include <time.h>
using namespace std;
int main()
{
  hoofd * poly = nullptr;

  srand(time(NULL));

  switch(rand()%2)
  {
  case 0:
      poly = new sub1();
      break;
  case 1:
      poly = new sub2();
      break;
  default:
      break;
  }

  poly->count(3);
  delete poly;

}
