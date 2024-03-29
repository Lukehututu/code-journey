#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
class Solution
{
public:

    void rotateMatrix(int** matrix, int n) {
        // ����һ���µľ����������ת��Ľ��
        int** rotatedMatrix = new int* [n];
        for (int i = 0; i < n; ++i) {
            rotatedMatrix[i] = new int[n];
        }

        // ��ԭ����˳ʱ����ת90�Ȳ���ŵ��¾�����
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                rotatedMatrix[j][n - 1 - i] = matrix[i][j];
            }
        }

        // �����ת��ľ���
        cout << "90����ת��ľ���" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << rotatedMatrix[i][j] << " ";
            }
            cout << endl;
        }

        // �ͷŶ�̬������ڴ�
        for (int i = 0; i < n; ++i) {
            delete[] rotatedMatrix[i];
        }
        delete[] rotatedMatrix;
    }

    


};


int main() {
    int n;
    cout << "���������ı߳���";
    cin >> n;

    // ����ԭ���󲢽�������
    int** matrix = new int* [n];
    cout << "���������" << endl;
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    Solution S;
    // ���ú������о�����ת
    S.rotateMatrix(matrix, n);

    // �ͷŶ�̬������ڴ�
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}