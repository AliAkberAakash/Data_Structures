#include<stdio.h>
#include<vector>

int main()
{
	using namespace std;

	int i,size=100;
	vector <int> my_first_vector(size);

	for(i=0; i<size; i++)
	{
		my_first_vector[i]=i;
		printf("%d ",my_first_vector[i]);

	}



	return 0;
}
