using namespace std;
#include<iostream>
//
//1. ��������Ҫ��, ʵ��һ�׵�¼����
//��֪��ȫ�ֱ���
int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = { "����", "����", "����", "����" };
char passwords[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum = 4;



//���� ÿ���±��Ӧһ���û�����(id, ����, ����)
//���±�[1]: ��Ӧ10002, ����, bbbbb
//�������µĺ���������ע��, д����Ӧ�ĺ���ʵ��
/*
����: ����id ��ѯ�û��Ƿ����, ������ڷ����û���, ��������ڷ��ؿ�
����:
uid: �û�id
����ֵ:
����û�����, �����û���.
����û�������, ����NULL
*/


char* selectUserById(int uid) {
	int cnt = 0;
	while (uid != ids[cnt]) {
		++cnt;
	}
	if (cnt == 5)
		return nullptr;
	else
		return &names[cnt][0];
}


/*
����: ����id ��ѯ�û�����, ������ڷ����û�����, ��������ڷ��ؿ�
����:
uid: �û�id
����ֵ:
����������, ��������.
������벻����, ����NULL
*/
char* selectPassById(int uid) {
	int cnt = 0;
	while (uid != ids[cnt]){
		++cnt;
	}
	if (cnt == 5)
		return nullptr;
	else
		return &passwords[cnt][0];
}



//----------------------------------------------------
/*
����: �����û�id������, ����������������(selectUserById, selectPassById)����ȡ��Ӧ��
������, ���ж��Ƿ��¼�ɹ�
�����û�id ��ѯ�û����Ƿ����, ����ȡ�û�����
����û����� ���ж������Ƿ���ȷ
����:
uid: �û��˻�
password: �û�����
����ֵ:
����˺Ų�����, ����1
����������, ����2
�����¼�ɹ�, ����0
*/
int login(int uid, char* password) {
	char* correct_password = selectPassById(uid);
	bool isexists = selectUserById(uid) == nullptr ? false : true;
	if (!isexists)
		return 1;
	if (strcmp(correct_password,password))
		return 2;
	else
		return 0;
}


//---------------------------------------------------- -
/*
����: ��ʾ�û������˺�����, ����login�����ж��Ƿ��¼�ɹ�,
�����¼�ɹ���ʾ���ڽ�����ҳ
�����¼ʧ��
�������: ��ʾ�������, �����û����µ�¼
�˺Ų�����: ��ʾ�˺Ų�����, ����ʾ���ڽ���ע�����
����: ��
����ֵ: ��
*/
void showLoginPage() {
	int uid = 0;
	char password[16];
	do {
		cout << "�������˺ţ�" << endl;
		cin >> uid;
		cout << "���������룺" << endl;
		cin >> password;
		if (login(uid, password) == 2)
			cout << "�����������������" << endl;
	} while (login(uid, password) == 2);

	if (login(uid, password) == 1) {
		cout << "�˺Ų����ڣ����ڽ���ע�����" << endl;
		//��ת��ע��ҳ��
	}
	else {
		cout << "���ڽ�����ҳ" << endl;
		//��ת����ҳ
	}

}


//��������:
//10001
//aaaaa
//������� :
//��¼�ɹ�, ���ڽ�����ҳ
//�������� :
//10001
//aaaab
//������� :
//�������, �����µ�¼
//��ʾ : ����������������س�, ���ܻ���ֻس����ű�% s����gets���յ����, ���������޷�������,
//������getchar���ջس������.
//��Ӧ֪ʶ�� : ���̻�����
//2. �����������߽���������Ϊ3��, �����ֺ�������Щ����(���԰ٶȲ�ѯ"����ܹ�").��������˼·
//ʵ��һ��ע�Ṧ��.

int main(){
	showLoginPage();

}