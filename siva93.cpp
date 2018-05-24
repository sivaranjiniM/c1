using namespace std;
int main()
{
	string a;
	int b;
	cin>>a;
	b=a.length();
	if(b%2==0)
	{
	a[b/2]='*';
	a[(b/2)-1]='*';
	}
	else
	{
	a[b/2]='*';
	}
            cout<<a;
	return 0;
}
