#include<bits/stdc++.h>
using namespace std;
#define N 4
bool issafe(int board[N][N],int row,int col)
{
  int i, j;

    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}
bool djikshtra(int graph[N][N],int col)
{
  if (col>=N)
  {
    return true;
  }
  for (int i=0;i<N;i++)
  {
    if (issafe(graph,i,col))
    {
      graph[i][col]=1;
      if (djikshtra(graph,col+1)){
      return true;}
      graph[i][col]=0;
    }

  }
  return false;
}
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}
bool solveNQ()
{
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };

    if (djikshtra(board, 0) == false) {
        printf("Solution does not exist");
        return false;
    }

    printSolution(board);
    return true;
}

// driver program to test above function
int main()
{
    solveNQ();
    return 0;
}
