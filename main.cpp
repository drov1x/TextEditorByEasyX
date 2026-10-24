#include "include/App.h"
using namespace std;
int main() {
	initgraph(SCREEN_WIDTH, SCREEN_HEIGHT);	// 基于App.h定义初始化窗口

	setbkcolor(RGB(230, 230, 230));	// 设置背景为浅灰色
	cleardevice();					// 应用颜色

	setfillcolor(RGB(255, 255, 255));								// 设置填充颜色为白色
	solidrectangle(20, 20, SCREEN_WIDTH - 20, SCREEN_HEIGHT - 20);	// 绘制白色矩形

	setlinecolor(RGB(100, 100, 100));		// 设置线条颜色
	rectangle(20, 20, SCREEN_WIDTH - 20, SCREEN_HEIGHT - 20);

	settextcolor(BLACK);
	settextstyle(FONT_SIZE, 0, FONT);
	outtextxy(35, 35, L"在这里输入文字...");

	_getch();
	closegraph();

	return 0;
}