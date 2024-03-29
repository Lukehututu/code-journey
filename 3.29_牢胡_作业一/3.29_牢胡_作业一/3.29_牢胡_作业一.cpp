#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
class Solution
{
public:

    void rotateMatrix(int** matrix, int n) {
        // 创建一个新的矩阵来存放旋转后的结果
        int** rotatedMatrix = new int* [n];
        for (int i = 0; i < n; ++i) {
            rotatedMatrix[i] = new int[n];
        }

        // 将原矩阵顺时针旋转90度并存放到新矩阵中
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                rotatedMatrix[j][n - 1 - i] = matrix[i][j];
            }
        }

        // 输出旋转后的矩阵
        cout << "90度旋转后的矩阵：" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << rotatedMatrix[i][j] << " ";
            }
            cout << endl;
        }

        // 释放动态分配的内存
        for (int i = 0; i < n; ++i) {
            delete[] rotatedMatrix[i];
        }
        delete[] rotatedMatrix;
    }

    


};


int main() {
    int n;
    cout << "请输入矩阵的边长：";
    cin >> n;

    // 创建原矩阵并接受输入
    int** matrix = new int* [n];
    cout << "请输入矩阵：" << endl;
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    Solution S;
    // 调用函数进行矩阵旋转
    S.rotateMatrix(matrix, n);

    // 释放动态分配的内存
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}