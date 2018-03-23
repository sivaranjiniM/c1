#include <iostream>
using namespace std;
int main()
{
	int min,rem,hr;
	cin>>min;
	hr=min/60;
	rem=min-(60*hr);
	printf("%d:%d",hr,rem);
	return 0;
}
