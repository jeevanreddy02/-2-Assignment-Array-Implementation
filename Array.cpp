#include <iostream>
using namespace std;
int main()
{
    int sparseMat[4][5] = 
    {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    int nonZeroCount = 0;

    // Counting the number of non-zero elements
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < 5; col++)
            if (sparseMat[row][col] != 0)
                nonZeroCount++;

    // Compact Matrix to store non-zero elements
    int compactMat[3][nonZeroCount];
    int index = 0;

    // Filling the compact matrix with non-zero values and their positions
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < 5; col++)
            if (sparseMat[row][col] != 0)
            {
                compactMat[0][index] = row;
                compactMat[1][index] = col;
                compactMat[2][index] = sparseMat[row][col];
                index++;
            }

    // Output the compact matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < nonZeroCount; j++)
            cout << " " << compactMat[i][j];
        cout << "\n";
    }

    return 0;
}
