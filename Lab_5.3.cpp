#include <iostream>
#include <math.h>
#include <cmath>

const int n = 5;
const int m = 5;

using namespace std;

class Array
{
private:
	double ArrW[m];
public:
	friend void InputArray(Array arrH[]);
	friend void OutputArray(Array arrH[]);
	friend void SortArray(Array arrH[], int n);
	friend void CalcArray(Array arrH[]);
};

void InputArray(Array  arrH[])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> arrH[i].ArrW[j];
		}
}
void OutputArray(Array  ArrH[])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << ArrH[i].ArrW[j] << "\t";
		}
		cout << endl;
	}
}
void SortArray(Array  arrH[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int BlockSizeIterator = 1; BlockSizeIterator < n; BlockSizeIterator *= 2)
		{
			for (int BlockIterator = 0; BlockIterator < n - BlockSizeIterator; BlockIterator += 2 * BlockSizeIterator)
			{
				int LeftBlockIterator = 0;
				int RightBlockIterator = 0;
				int LeftBorder = BlockIterator;
				int MidBorder = BlockIterator + BlockSizeIterator;
				int RightBorder = BlockIterator + 2 * BlockSizeIterator;
				RightBorder = (RightBorder < n) ? RightBorder : n;
				int* SortedBlock = new int[RightBorder - LeftBorder];
				while (LeftBorder + LeftBlockIterator < MidBorder && MidBorder + RightBlockIterator < RightBorder)
				{
					if (arrH[LeftBorder + LeftBlockIterator].ArrW[i] > arrH[MidBorder + RightBlockIterator].ArrW[i])
					{
						SortedBlock[LeftBlockIterator + RightBlockIterator] = arrH[LeftBorder + LeftBlockIterator].ArrW[i];
						LeftBlockIterator++;
					}
					else
					{
						SortedBlock[LeftBlockIterator + RightBlockIterator] = arrH[MidBorder + RightBlockIterator].ArrW[i];
						RightBlockIterator++;
					}
				}
				while (LeftBorder + LeftBlockIterator < MidBorder)
				{
					SortedBlock[LeftBlockIterator + RightBlockIterator] = arrH[LeftBorder + LeftBlockIterator].ArrW[i];
					LeftBlockIterator++;
				}
				while (MidBorder + RightBlockIterator < RightBorder)
				{
					SortedBlock[LeftBlockIterator + RightBlockIterator] = arrH[MidBorder + RightBlockIterator].ArrW[i];
					RightBlockIterator++;
				}

				for (int MergeIterator = 0; MergeIterator < LeftBlockIterator + RightBlockIterator; MergeIterator++)
				{
					arrH[LeftBorder + MergeIterator].ArrW[i] = SortedBlock[MergeIterator];
				}
				delete SortedBlock;

			}

		}
	}
}
void CalcArray(Array arrH[])
{
	double summ = 0.0;
	float f;
	int i, j;
	float sum = 0.0;

	for (j = 0; j < 5; ++j)
	{
		int minElem = 10000;
		for (i = 0; i < 5; ++i)
		{
			if (arrH[i].ArrW[j] < minElem)
			{
				minElem = arrH[i].ArrW[j];
			}
		}
		cout << "min elem";
		cout << "f(" << "[" << j << "]" << ") = " << minElem << "\n";
		sum += minElem;
	}
	f = sum / 5.0;
	cout << "F(" << "[" << j << "]" << ") = " << f << "\n";
}


int main() {
	cout << "Enter elements of matrix:\n" << endl;
	Array arr[n];
	InputArray(arr);
	cout << "\nYour matrix:\n" << endl;
	OutputArray(arr);
	SortArray(arr, 5);
	cout << "\nSorted matrix:\n" << endl;
	OutputArray(arr);
	cout << "\nCalculations:\n" << endl;
	CalcArray(arr);
	return 0;
}