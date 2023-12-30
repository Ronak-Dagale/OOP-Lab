//============================================================================
// Name        :  PBL Assignment no :- 6
// Author      :  Ronak Sandeep Dagale
// Description :  Matrix Operations 
// Concept     :  Use Concept of Exceptional handling
//============================================================================
#include <iostream>
using namespace std;

#define N 4
int flag = 0;

class Matrix {
private:
  int rows, col;
  int arr[N][N];

public:
  void SetMatrix(int);
  void GetMatrix(int);
  void Addition(Matrix, Matrix);
  void Subtraction(Matrix, Matrix);
  void Multiplication(Matrix, Matrix);
  Matrix() {
    rows = 0;
    col = 0;
  }
  ~Matrix() {
    rows = 0;
    col = 0;
  }
};

void Matrix ::SetMatrix(int k) {
  int i, j;
  flag = 2;
  cout << "\n  Matrix-" << k << " : " << endl;
  cout << "Enter rows : ";
  cin >> rows;
  cout << "Enter columns : ";
  cin >> col;
  try {
    if (rows == 0 || col == 0 || rows > N || col > N) {
      throw 1;
    } else {
      {
        cout << "\n Enter matrix-" << k << " : " << endl;
        for (i = 0; i < rows; i++) {
          for (j = 0; j < col; j++) {
            cout << "Enter [" << i + 1 << "]"
                 << "[" << j + 1 << "]"
                 << " :- ";
            cin >> arr[i][j];
          }
        }
      }
    }
  } catch (int e) {
    cout << "\n* Size Overflow.." << endl;
    flag = 1;
  }
}

void Matrix ::GetMatrix(int k) {
  int i, j;
  cout << "\n  Matrix-" << k << " is: " << endl;
  if (flag == 1 || flag == 0) {
    cout << " Please Enter matrix first " << endl;
  } else {
    for (i = 0; i < rows; i++) {
      for (j = 0; j < col; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }
}
void Matrix ::Addition(Matrix m1, Matrix m2) {
  int i, j;
  if (flag == 1 || flag == 0) {
    cout << "\n Enter Matrix first" << endl;
  } else {
    try {
      if (m1.rows != m2.rows | m1.col != m2.col) {
        throw 1;
      }
      {
        cout << "\n Resultant matrix is: " << endl;
        for (i = 0; i < m1.rows; i++) {
          for (j = 0; j < m1.col; j++) {
            arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            cout << arr[i][j] << " ";
          }
          cout << endl;
        }
      }
    } catch (int e) {
      cout << "\n** Matrix order should be same **" << endl;
    }
  }
}

void Matrix ::Subtraction(Matrix m1, Matrix m2) {
  int i, j;
  if (flag == 1 || flag == 0) {
    cout << "\n** Enter Matrix first **" << endl;
  } else {
    try {
      if (m1.rows != m2.rows | m1.col != m2.col) {
        throw 1;
      }
      {
        cout << "\n Resultant matrix is: " << endl;
        for (i = 0; i < m1.rows; i++) {
          for (j = 0; j < m1.col; j++) {
            arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
            cout << arr[i][j] << " ";
          }
          cout << endl;
        }
      }
    } catch (int e) {
      cout << "\n** Matrix Order should be same **" << endl;
    }
  }
}

void Matrix ::Multiplication(Matrix m1, Matrix m2) {
  int i, j, k, sum;
  if (flag == 1 || flag == 0) {
    cout << "\n** Enter Matrix first **" << endl;
  } else {
    try {
      if (m1.col != m2.rows) {
        throw 1;
      }
      {
        for (i = 0; i < m1.rows; i++) {
          for (j = 0; j < m2.col; j++) {
            sum = 0;
            for (k = 0; k < m1.col; k++) {
              sum = sum + (m1.arr[i][k] * m2.arr[k][j]);
            }
            arr[i][j] = sum;
          }
        }
        cout << "\n Resultant matrix is: \n";
        for (i = 0; i < m1.rows; i++) {
          for (j = 0; j < m2.col; j++) {
            cout << arr[i][j] << " ";
          }
          cout << endl;
        }
      }
    } catch (int e) {
      cout << "\n** You can't Multiply **" << endl;
    }
  }
}

int main() {
  cout << endl;
  Matrix m1, m2, m;
  cout << "\n Welcome to Matrix Arithmetic \n";
  int ch;
  do {
    cout
        << "\n  Menu: \n1.Set Matrix \n2.Get Matrix \n3.Addition "
           "\n4.Subtraction \n5.Multiplication \n6.Exit \nEnter your choice:  ";
    cin >> ch;
    switch (ch) {
    case 1:
      m1.SetMatrix(1);
      m2.SetMatrix(2);
      break;

    case 2:
      m1.GetMatrix(1);
      m2.GetMatrix(2);
      break;

    case 3:
      m.Addition(m1, m2);
      break;

    case 4:
      m.Subtraction(m1, m2);
      break;

    case 5:
      m.Multiplication(m1, m2);
      break;

    case 6:
      cout << "\n Thank You\n";
      cout << endl;
      break;

    default:
      cout << "\n Invalid choice!" << endl;
      break;
    }
  } while (ch != 6);
  return 0;
}
