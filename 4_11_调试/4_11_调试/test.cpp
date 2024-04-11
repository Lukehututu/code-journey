using namespace std;
#include<iostream>
#include<graphics.h>
#include<wingdi.h>

string player_account;//�û��˺�
string player_password;//�û�����


//void print_Button(int x, int y, int width, int height, string text,int t_height) {
//	
//	//����������Դ
//	AddFontResourceEx("./��������.ttf", FR_PRIVATE, NULL);
//
//	//���ð�ť��ʽ
//	setfillcolor(WHITE);
//	setlinecolor(RGB(100, 77, 77));
//
//	//���ƾ���
//	fillrectangle(x, y, x + width, y + height);
//
//	//������������
//	//��������Ϊ͸��
//	setbkmode(TRANSPARENT);
//	//������ʽ
//	settextcolor(BLACK);
//	settextstyle(t_height, 0, "����");
//
//	//��ӡ����
//	int t_x = x + width / 2 - textwidth(text.c_str()) / 2;
//	int t_y = y + height / 2 - textheight(text.c_str()) / 2;
//	
//
//	//��ӡ
//	outtextxy(t_x,t_y,text.c_str());
//
//	//�ͷ�������Դ
//	RemoveFontResourceEx("./��������.ttf", FR_PRIVATE, NULL);
//}

//��ť�ṹ��
struct Button {
	int B_x;//���Ͻ�x����
	int B_y;//���Ͻ�y����
	int B_width;//��ť��
	int B_height;//��ť��

	Button(int x, int y, int width, int height) {
		B_x = x;
		B_y = y;
		B_width = width;
		B_height = height;
	}

	void Creat_Button(string text, int t_height) {

		//���ð�ť��ʽ
		setfillcolor(WHITE);
		setlinecolor(RGB(100, 77, 77));

		//���ƾ���
		fillrectangle(B_x, B_y, B_x + B_width, B_y + B_height);

		//������������
		//��������Ϊ͸��
		setbkmode(TRANSPARENT);
		//������ʽ
		settextcolor(BLACK);
		settextstyle(t_height, 0, "����");

		//��ӡ����
		int t_x = B_x + B_width / 2 - textwidth(text.c_str()) / 2;
		int t_y = B_y + B_height / 2 - textheight(text.c_str()) / 2;


		//��ӡ
		outtextxy(t_x, t_y, text.c_str());

	}

};

void Login_screen();


//ע��ɹ�����
void Successful_reg_screen()
{
	//���ر���
	IMAGE bk;
	loadimage(&bk, "./ע��ɹ�.png");
	putimage(0, 0, &bk);

	//��ӡ��ʾ���˺�
	string tips = "�����˺�Ϊ��";
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "����");
	outtextxy(200, 450, tips.c_str());
	string account = "114514";
	int accout_width = 220 + textwidth(tips.c_str());
	int raw_height = textheight(tips.c_str());
	settextstyle(40, 0, "����");
	outtextxy(accout_width, 450-(textheight(tips.c_str())-raw_height)/2, account.c_str());

	//��ť
	Button back_B(370, 500, 60, 20);
	back_B.Creat_Button("����������", 12);

	ExMessage Suf_msg;
	while (1) {
		if (peekmessage(&Suf_msg, EM_MOUSE)) {
			switch (Suf_msg.message)
			{
			case WM_LBUTTONDOWN:
				//����
				if (Suf_msg.x >= back_B.B_x && Suf_msg.y >= back_B.B_y && Suf_msg.x <= back_B.B_x + back_B.B_width && Suf_msg.y <= back_B.B_y + back_B.B_height) {
					Login_screen();
				}
			}
		}
	}

}		

//ע�����
void Registration_screen()
{
	//���ر���
	IMAGE bk;
	loadimage(&bk, "./����.png");
	putimage(0, 0, &bk);

	string name = "����";
	string password = "����";


	//���ô�ӡ��ʽ
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "����");
	setfillcolor(WHITE);
	setlinecolor(RGB(100, 77, 77));

	//��ӡ���������ʾ�ּ���
	outtextxy(260, 300, name.c_str());
	fillrectangle(260, 330, 540, 350);
	outtextxy(260, 370, password.c_str());
	fillrectangle(260, 400, 540, 420);

	Button su_Re(370, 500, 60, 20);
	su_Re.Creat_Button("ע��", 12);
	ExMessage re_msg;

	//��������bool����Ƿ�������
	bool ac_is_input = false;
	bool pa_is_input = false;
	
	while (1) {
		if (peekmessage(&re_msg, EM_MOUSE))
		{
			//�������룬һ����ť
			switch (re_msg.message)
			{
				//�������
			case WM_LBUTTONDOWN:
				//�˺�����
				if (re_msg.x >= 260 && re_msg.y >= 330 && re_msg.x <= 540 && re_msg.y <= 350) {
					char ac[10];
					InputBox(ac, 10, NULL, "����������", NULL, 0, 0, false);
					cout << ac << endl;
					
				}
				//��������
				else if (re_msg.x >= 260 && re_msg.y >= 400 && re_msg.x <= 540 && re_msg.y <= 420) {
					char ps[10];
					InputBox(ps, 10, "���벻����8λ", "����������", NULL, 0, 0, false);
					cout << ps << endl;


				}
				//ע��
				else if (re_msg.x >= su_Re.B_x && re_msg.y >= su_Re.B_y && re_msg.x <= su_Re.B_x + su_Re.B_width && re_msg.y <= su_Re.B_y + su_Re.B_height) {
				
					//��ת��ע��ɹ�
					Successful_reg_screen();
				}


			}




		}

	}

}


//��¼����
void Login_screen()
{

	//��ӡ����
	//initgraph(800, 800);
	//cleardevice();
	HWND hwd;
	hwd = GetHWnd();
	SetWindowText(hwd, "ԭ��֮��");

	IMAGE bk;
	loadimage(&bk, "./���ֱ���.png");
	putimage(0, 0, &bk);
	string ac_text = "�˺�";
	string pw_text = "����";

	//���ô�ӡ��ʽ
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(20, 0, "����");
	setfillcolor(WHITE);
	setlinecolor(RGB(100, 77, 77));

	//��ӡ���������ʾ�ּ���
	//�˺�
	outtextxy(260, 300, ac_text.c_str());
	fillrectangle(260, 330, 540, 350);
	//����
	outtextxy(260, 370, pw_text.c_str());
	fillrectangle(260, 400, 540, 420);

	//������ť

	Button SB(260, 480, 60, 20);//Sign_Button
	SB.Creat_Button("ע�����˺�", 12);
	Button LB(370, 480, 60, 20);//Login_Button
	LB.Creat_Button("��¼", 12);
	Button EB(480, 480, 60, 20);//Exit_Button
	EB.Creat_Button("�˳���Ϸ", 12);
	
	
	//�߼��ж� -- ���������Ϣ

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
				//���������
			case WM_LBUTTONDOWN:
				//��������������룬������ť
				//�˺�����
				if (Login_msg.x >= 260 && Login_msg.y >= 330 && Login_msg.x <= 540 && Login_msg.y <= 350) {
					char ac[10];
					InputBox(ac, 10, NULL, "�������˺�", NULL, 0, 0, false);
					cout << ac << endl;
					string emp(ac);
					player_account = emp;
					if (player_account.compare("0")) {
						ac_is_input = true;
					}
				}
				//��������
				else if (Login_msg.x >= 260 && Login_msg.y >= 400 && Login_msg.x <= 540 && Login_msg.y <= 420) {
					char ps[10];
					InputBox(ps, 10, "���벻����8λ", "����������", NULL, 0, 0, false);
					cout << ps << endl;
					string emp(ps);
					player_password = emp;
					if (player_password.compare("0")) {
						ps_is_input = true;
					}
				}
				//��¼
				else if (Login_msg.x >= LB.B_x && Login_msg.y >= LB.B_y && Login_msg.x <= LB.B_x + LB.B_width && Login_msg.y <= LB.B_y + LB.B_height) {
					//��¼
					if (!ac_is_input) {
						MessageBox(hwd, "�������˺�", "��ʾ", MB_OK);
					}
					else if (!ps_is_input) {
						MessageBox(hwd, "����������", "��ʾ", MB_OK);
					}
					else if (!ac_is_input && !ps_is_input) {
						MessageBoxA(hwd, "�������˺�����", "��ʾ", MB_OK);
					}
					else {
						//Login_is_successful();
						exit(0);
					}
				}
				//�˳���Ϸ
				else if (Login_msg.x >= EB.B_x && Login_msg.y >= EB.B_y && Login_msg.x <= EB.B_x + EB.B_width && Login_msg.y <= EB.B_y + EB.B_height) {
					exit(0);
				}
				//ע��
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






