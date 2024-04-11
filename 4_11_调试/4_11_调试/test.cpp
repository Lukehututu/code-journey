using namespace std;
#include<iostream>
#include<graphics.h>
#include<wingdi.h>

string player_account;//用户账号
string player_password;//用户密码


//void print_Button(int x, int y, int width, int height, string text,int t_height) {
//	
//	//加载字体资源
//	AddFontResourceEx("./像素字体.ttf", FR_PRIVATE, NULL);
//
//	//设置按钮样式
//	setfillcolor(WHITE);
//	setlinecolor(RGB(100, 77, 77));
//
//	//绘制矩形
//	fillrectangle(x, y, x + width, y + height);
//
//	//调整文字字样
//	//背景设置为透明
//	setbkmode(TRANSPARENT);
//	//字体样式
//	settextcolor(BLACK);
//	settextstyle(t_height, 0, "楷体");
//
//	//打印文字
//	int t_x = x + width / 2 - textwidth(text.c_str()) / 2;
//	int t_y = y + height / 2 - textheight(text.c_str()) / 2;
//	
//
//	//打印
//	outtextxy(t_x,t_y,text.c_str());
//
//	//释放字体资源
//	RemoveFontResourceEx("./像素字体.ttf", FR_PRIVATE, NULL);
//}

//按钮结构体
struct Button {
	int B_x;//左上角x坐标
	int B_y;//左上角y坐标
	int B_width;//按钮宽
	int B_height;//按钮高

	Button(int x, int y, int width, int height) {
		B_x = x;
		B_y = y;
		B_width = width;
		B_height = height;
	}

	void Creat_Button(string text, int t_height) {

		//设置按钮样式
		setfillcolor(WHITE);
		setlinecolor(RGB(100, 77, 77));

		//绘制矩形
		fillrectangle(B_x, B_y, B_x + B_width, B_y + B_height);

		//调整文字字样
		//背景设置为透明
		setbkmode(TRANSPARENT);
		//字体样式
		settextcolor(BLACK);
		settextstyle(t_height, 0, "楷体");

		//打印文字
		int t_x = B_x + B_width / 2 - textwidth(text.c_str()) / 2;
		int t_y = B_y + B_height / 2 - textheight(text.c_str()) / 2;


		//打印
		outtextxy(t_x, t_y, text.c_str());

	}

};

void Login_screen();


//注册成功界面
void Successful_reg_screen()
{
	//加载背景
	IMAGE bk;
	loadimage(&bk, "./注册成功.png");
	putimage(0, 0, &bk);

	//打印提示及账号
	string tips = "您的账号为：";
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "楷体");
	outtextxy(200, 450, tips.c_str());
	string account = "114514";
	int accout_width = 220 + textwidth(tips.c_str());
	int raw_height = textheight(tips.c_str());
	settextstyle(40, 0, "楷体");
	outtextxy(accout_width, 450-(textheight(tips.c_str())-raw_height)/2, account.c_str());

	//按钮
	Button back_B(370, 500, 60, 20);
	back_B.Creat_Button("返回主界面", 12);

	ExMessage Suf_msg;
	while (1) {
		if (peekmessage(&Suf_msg, EM_MOUSE)) {
			switch (Suf_msg.message)
			{
			case WM_LBUTTONDOWN:
				//返回
				if (Suf_msg.x >= back_B.B_x && Suf_msg.y >= back_B.B_y && Suf_msg.x <= back_B.B_x + back_B.B_width && Suf_msg.y <= back_B.B_y + back_B.B_height) {
					Login_screen();
				}
			}
		}
	}

}		

//注册界面
void Registration_screen()
{
	//加载背景
	IMAGE bk;
	loadimage(&bk, "./背景.png");
	putimage(0, 0, &bk);

	string name = "名称";
	string password = "密码";


	//设置打印样式
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "楷体");
	setfillcolor(WHITE);
	setlinecolor(RGB(100, 77, 77));

	//打印输入输出提示字及框
	outtextxy(260, 300, name.c_str());
	fillrectangle(260, 330, 540, 350);
	outtextxy(260, 370, password.c_str());
	fillrectangle(260, 400, 540, 420);

	Button su_Re(370, 500, 60, 20);
	su_Re.Creat_Button("注册", 12);
	ExMessage re_msg;

	//设置两个bool检测是否输入了
	bool ac_is_input = false;
	bool pa_is_input = false;
	
	while (1) {
		if (peekmessage(&re_msg, EM_MOUSE))
		{
			//两个输入，一个按钮
			switch (re_msg.message)
			{
				//按下左键
			case WM_LBUTTONDOWN:
				//账号输入
				if (re_msg.x >= 260 && re_msg.y >= 330 && re_msg.x <= 540 && re_msg.y <= 350) {
					char ac[10];
					InputBox(ac, 10, NULL, "请输入名称", NULL, 0, 0, false);
					cout << ac << endl;
					
				}
				//密码输入
				else if (re_msg.x >= 260 && re_msg.y >= 400 && re_msg.x <= 540 && re_msg.y <= 420) {
					char ps[10];
					InputBox(ps, 10, "密码不超过8位", "请输入密码", NULL, 0, 0, false);
					cout << ps << endl;


				}
				//注册
				else if (re_msg.x >= su_Re.B_x && re_msg.y >= su_Re.B_y && re_msg.x <= su_Re.B_x + su_Re.B_width && re_msg.y <= su_Re.B_y + su_Re.B_height) {
				
					//跳转到注册成功
					Successful_reg_screen();
				}


			}




		}

	}

}


//登录界面
void Login_screen()
{

	//打印界面
	//initgraph(800, 800);
	//cleardevice();
	HWND hwd;
	hwd = GetHWnd();
	SetWindowText(hwd, "原神之王");

	IMAGE bk;
	loadimage(&bk, "./带字背景.png");
	putimage(0, 0, &bk);
	string ac_text = "账号";
	string pw_text = "密码";

	//设置打印样式
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "楷体");
	setfillcolor(WHITE);
	setlinecolor(RGB(100, 77, 77));

	//打印输入输出提示字及框
	//账号
	outtextxy(260, 300, ac_text.c_str());
	fillrectangle(260, 330, 540, 350);
	//密码
	outtextxy(260, 370, pw_text.c_str());
	fillrectangle(260, 400, 540, 420);

	//三个按钮

	Button SB(260, 480, 60, 20);//Sign_Button
	SB.Creat_Button("注册新账号", 12);
	Button LB(370, 480, 60, 20);//Login_Button
	LB.Creat_Button("登录", 12);
	Button EB(480, 480, 60, 20);//Exit_Button
	EB.Creat_Button("退出游戏", 12);
	
	
	//逻辑判断 -- 接收鼠标信息

	ExMessage Login_msg;
	player_account = "0";
	player_password = "0";
	bool ac_is_input = false;
	bool ps_is_input = false;


	while (1) {
		if (peekmessage(&Login_msg, EM_MOUSE))
		{
			switch (Login_msg.message)
			{
				//如果左键点击
			case WM_LBUTTONDOWN:
				//五个区域，两个输入，三个按钮
				//账号输入
				if (Login_msg.x >= 260 && Login_msg.y >= 330 && Login_msg.x <= 540 && Login_msg.y <= 350) {
					char ac[10];
					InputBox(ac, 10, NULL, "请输入账号", NULL, 0, 0, false);
					cout << ac << endl;
					string emp(ac);
					player_account = emp;
					if (player_account.compare("0")) {
						ac_is_input = true;
					}
				}
				//密码输入
				else if (Login_msg.x >= 260 && Login_msg.y >= 400 && Login_msg.x <= 540 && Login_msg.y <= 420) {
					char ps[10];
					InputBox(ps, 10, "密码不超过8位", "请输入密码", NULL, 0, 0, false);
					cout << ps << endl;
					string emp(ps);
					player_password = emp;
					if (player_password.compare("0")) {
						ps_is_input = true;
					}
				}
				//登录
				else if (Login_msg.x >= LB.B_x && Login_msg.y >= LB.B_y && Login_msg.x <= LB.B_x + LB.B_width && Login_msg.y <= LB.B_y + LB.B_height) {
					//登录
					if (!ac_is_input) {
						MessageBox(hwd, "请输入账号", "提示", MB_OK);
					}
					else if (!ps_is_input) {
						MessageBox(hwd, "请输入密码", "提示", MB_OK);
					}
					else if (!ac_is_input && !ps_is_input) {
						MessageBoxA(hwd, "请输入账号密码", "提示", MB_OK);
					}
					else {
						//Login_is_successful();
						exit(0);
					}
				}
				//退出游戏
				else if (Login_msg.x >= EB.B_x && Login_msg.y >= EB.B_y && Login_msg.x <= EB.B_x + EB.B_width && Login_msg.y <= EB.B_y + EB.B_height) {
					exit(0);
				}
				//注册
				else if (Login_msg.x >= SB.B_x && Login_msg.y >= SB.B_y && Login_msg.x <= SB.B_x + SB.B_width && Login_msg.y <= SB.B_y + SB.B_height) {
					Registration_screen();
				}
				break;
			}
		}
	}

		//closegraph();
}







int main() {


	initgraph(800, 800);
	cleardevice();

	Login_screen();

	getchar();
	closegraph();

}






