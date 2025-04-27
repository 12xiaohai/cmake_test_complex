#include <iostream>
#include "process.h"
#include "show_result.h"
using namespace std;

int main()
{
  cout << "planing start" << endl;
  Process pro;
  pro.plan_process();
  cout << "planing end" << endl;

  cout << "show result: " << endl;
  ShowResult show;
  show.drawResult();

  return 0;
}