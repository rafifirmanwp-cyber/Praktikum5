#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

	vector<int> myVector(data, data + 11);

	auto cetakVektor = [](const vector<int> vec, const string& judul)
		{
			cout << judul << endl;
			for (int val : vec)
			{
				cout << val << " | ";
			}
			cout << "\n============================================================\n";
		};
	cetakVektor(myVector, "isi vector awal:");

	sort(myVector.begin(), myVector.end());
	cetakVektor(myVector, "Isi Vector setelah sorting ASC :");

	sort(myVector.begin(), myVector.end(), greater<int>());
	cetakVektor(myVector, "Isi Vector setelah sorting DESC :");

}