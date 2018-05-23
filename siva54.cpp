using namespace std;
int main()
 
{
    char ch;
    unsigned int long linecount;
    int u;
    linecount=1;
    while((ch=getc(stdin))!=EOF)
    {
    	if(ch=='\n')
    	{
    	++linecount;
    	}
    }
    cout<<linecount;
    return 0;
}
