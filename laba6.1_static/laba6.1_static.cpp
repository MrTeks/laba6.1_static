#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int M, N, K;
    const int A = 10;
    const int B = 10;
    int matrix[A][B];

    cout << "Введите количество строк M: ";
    cin >> M;
    cout << "Введите количество столбцов N: ";
    cin >> N;
    if (M > 10 || N > 10) {
        cout << "Ошибка! Максимальный размер матрицы 10х10";
        return 0;
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Элемент [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Введите номер столбца K (от 1 до " << N << "): ";
    cin >> K;
    if (K > N) {
        cout << "Ошибка! 1 <= K <= N";
        return 0;
    }

    cout << "Элементы " << K << "-го столбца:" << endl;
    for (int i = 0; i < M; i++) {
        cout << matrix[i][K - 1] << endl;
    }
}
