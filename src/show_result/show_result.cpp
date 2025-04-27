#include <iostream>
#include "show_result.h"
#include <graphics.h>
using namespace std;

void ShowResult::drawResult()
{
  initgraph(800, 800);
  setbkcolor(WHITE); // 设置背景颜色为白色
  cleardevice();

  cout << "draw circles: " << endl;
  setlinecolor(RED);         // 设置线条颜色为红色
  setlinestyle(PS_SOLID, 2); // 设置实线，宽度为 4
  circle(400, 400, 100);     // 圆心坐标为 (500, 500)，半径为 200
  circle(400, 400, 200);     // 圆心坐标为 (500, 500)，半径为 400

  system("pause");
  closegraph();
}