
#include<iostream>
#include <iomanip>
using namespace std;
 float calculateAverage(int marks[] ,int N)
{

    int sum=0;
	for(int i=0; i<N; i++)	{
		sum=sum+marks[i];
	}
	
return float(sum/N);
}
int main()
{
	int N;
	cout<<"enter the number of students"<<endl;
	cin>>N;
	int marks[100];
	cout<<"enter marks of students"<<endl;
	for(int i=0; i<N; i++)
	{
		cin>>marks[i];
	}
	float avg=calculateAverage(marks , N);
    cout << fixed <<setprecision(2);
	cout<< "average =" << avg <<endl;
}
