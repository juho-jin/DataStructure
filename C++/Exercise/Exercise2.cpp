#include<iostream>
#include<stack>
using namespace std;

int read(FILE*fp,string& tag);

int main(int argc, char* argv[])//파일이 사용법 설명
{
	stack<string> C;
	if (argc != 2)
	{
		cout << "usage : stack.exe filename" << endl;
		return 1;
	}
	FILE* fp = fopen(argv[1], "rt");//파일 오픈

	if (!fp)//파일오픈실패일 경우
	{
		cout << "fail to open File : " << argv[1] << endl;
		return 1;
	}
	try
	{
		char* ch;
		while ((*ch = fgetc(fp)) != EOF)
		{
			if (*ch == '<' && *(ch + 1) == 'h' * (ch + 2) == 't')C.push(ch);

		}
	}
	
}

void read(FILE* fp, string& tag)
{
	tag = "";
	int ret = 0;
	char ch;
	int idx = 0;
	while (ch = fgetc(fp) != EOF)
	{
		if(ch == '>')

	}
}