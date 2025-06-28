

#include <iostream>
using namespace std;

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}


void rot,ateOuterClockwise(int mat[3][3]) {
    
    int temp[8] = {
        mat[0][0], mat[0][1], mat[0][2],
        mat[1][2], mat[2][2], mat[2][1],
        mat[2][0], mat[1][0]
    };

    int rotated[8];
    rotated[0] = temp[7];
    for (int i = 1; i < 8; ++i)
        rotated[i] = temp[i - 1];

    mat[0][0] = rotated[0];
    mat[0][1] = rotated[1];
    mat[0][2] = rotated[2];
    mat[1][2] = rotated[3];
    mat[2][2] = rotated[4];
    mat[2][1] = rotated[5];
    mat[2][0] = rotated[6];
    mat[1][0] = rotated[7];
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateOuterClockwise(mat);

    cout << "After 90° Clockwise Rotation (Center 5 fixed):\n";
    printMatrix(mat);

    return 0;
}

