#include <iostream>
#include "pnc_map.h"
using namespace std;

void mapTest()
{
  cout << "this is pnc_map test" << endl;
  PNC_Map mymap;
  mymap.map_info();
}

int main()
{
  mapTest();
  return 0;
}