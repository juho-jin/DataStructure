#include<iostream>
#include<stack>
using namespace std;

int main()
{
	// ���ú����� ����
	stack<char>mystack;
	
	// ������ ����
	FILE* fp = fopen("inout 1.c", "rt");
	if(!fp)
	{
		printf("Error to create File!\n");
		return 1;
	}
	// �ѱ��ھ� �о ó��
	char cat;
	while (cat = fgetc(fp) != EOF)
	{
		if (cat == '(' || cat == '{') mystack.push(cat);
		if (cat == ')' || cat == '}') mystack.pop();
	}
	// ���� �ݱ�
	fclose(fp);

	// ���� ���ÿ� �����Ͱ� ���� ������ ����
	if (mystack.size() != 0)
	{
		cout << "Error to Match!" << endl;
	}
}
