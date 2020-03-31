#include <iostream>

using namespace std;
int main()
{
	int jml;
	cout<<"masukkan jumlah laptop yang dibeli = ";
	cin>> jml;
	string type_laptop[100] = {};
	for (int i = 0; i < jml; i++)
	{
		cout<<"masukkan type laptop ke "<<i +1<< " = ";
		cin>> type_laptop[i];
	}
	for (int j = 0; j < jml; j++)
	{
		cout<<"type laptop ke "<< j + 1 << " adalah "<< type_laptop[j]<<endl;
		
	}
	system("pause");
	return 0;
}
