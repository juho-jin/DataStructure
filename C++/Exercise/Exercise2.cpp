#include<iostream>
#include<stack>
using namespace std;

int read(FILE*fp,string& tag);

int main(int argc, char* argv[])//������ ���� ����
{
	stack<string> C;
	if (argc != 2)
	{
		cout << "usage : stack.exe filename" << endl;
		return 1;
	}
	FILE* fp = fopen(argv[1], "rt");//���� ����

	if (!fp)//���Ͽ��½����� ���
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