#include <iostream>
#include <math.h>
#include <cmath>

#define  height 5;
#define width 5;

using namespace std;

class array
{
private:
	double arrW[width];
public:
	friend void inputArray(array arrH[]);
	friend void outputArray(array arrH[]);
	friend void sortArray(array arrH[], int height);
	friend void calcArray(array arrH[]);
};

void inputArray(array  arrH[])
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> arrH[i].arrW[j];
		}
}
void outputArray(array  arrH[])
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << arrH[i].arrW[j] << "\t";
		}
		cout << endl;
	}
}
void sortArray(array  arrH[], int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int blockSizeIterator = 1; blockSizeIterator < height; blockSizeIterator *= 2)
		{
			for (int blockIterator = 0; blockIterator < n - blockSizeIterator; blockIterator += 2 * blockSizeIterator)
			{
				int leftBlockIterator = 0;
				int rightBlockIterator = 0;
				int leftBorder = blockIterator;
				int midBorder = blockIterator + blockSizeIterator;
				int RightBorder = blockIterator + 2 * blockSizeIterator;
				rightBorder = (rightBorder < height) ? rightBorder : height;
				int* sortedBlock = new int[rightBorder - leftBorder];
				while (leftBorder + leftBlockIterator < midBorder && midBorder + rightBlockIterator < rightBorder)
				{
					if (arrH[leftBorder + leftBlockIterator].arrW[i] > arrH[midBorder + rightBlockIterator].arrW[i])
					{
						sortedBlock[leftBlockIterator + rightBlockIterator] = arrH[leftBorder + leftBlockIterator].arrW[i];
						leftBlockIterator++;
					}
					else
					{
						sortedBlock[leftBlockIterator + rightBlockIterator] = arrH[midBorder + rightBlockIterator].arrW[i];
						rightBlockIterator++;
					}
				}
				while (leftBorder + leftBlockIterator < midBorder)
				{
					sortedBlock[leftBlockIterator + rightBlockIterator] = arrH[leftBorder + leftBlockIterator].arrW[i];
					leftBlockIterator++;
				}
				while (midBorder + rightBlockIterator < rightBorder)
				{
					sortedBlock[leftBlockIterator + rightBlockIterator] = arrH[midBorder + rightBlockIterator].arrW[i];
					rightBlockIterator++;
				}

				for (int mergeIterator = 0; lergeIterator < leftBlockIterator + rightBlockIterator; mergeIterator++)
				{
					arrH[leftBorder + mergeIterator].arrW[i] = sortedBlock[mergeIterator];
				}
				delete sortedBlock;

			}

		}
	}
}
void calcArray(Array arrH[])
{
	double summ = 0.0;
	int i, j;
	float sum = 0.0;
	
	for (j = 0; j < 5; ++j)
	{
		int minElem = 10000;
		for ( i = 0; i < 5; ++i)
		{
			if (arrH[i].arrW[j] < minElem)
			{
				minElem = arrH[i].arrW[j];	
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
	Array arr[height];
	inputArray(arr);
	cout << "\nYour matrix:\n" << endl;
	outputArray(arr);
	sortArray(arr, 5);
	cout << "\nSorted matrix:\n" << endl;
	outputArray(arr);
	cout << "\nCalculations:\n" << endl;
	calcArray(arr);
	return 0;
}