#include <cstddef>
#include <iostream>
#include <time.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	int lower = 10;
	int upp = 20;
	srand(time(NULL));
	a = rand()%(upp - lower+1)+lower;
	cout<<" rand no. is"<< a;
	return 0;
}