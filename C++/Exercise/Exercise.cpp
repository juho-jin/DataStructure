#include<iostream>
#include<stack>
using namespace std;

int main()
{
	// 스택변수를 선언
	stack<char>mystack;
	
	// 파일을 연다
	FILE* fp = fopen("inout 1.c", "rt");
	if(!fp)
	{
		printf("Error to create File!\n");
		return 1;
	}
	// 한글자씩 읽어서 처리
	char cat;
	while (cat = fgetc(fp) != EOF)
	{
		if (cat == '(' || cat == '{') mystack.push(cat);
		if (cat == ')' || cat == '}') mystack.pop();
	}
	// 파일 닫기
	fclose(fp);

	// 만약 스택에 데이터가 남아 있으면 에러
	if (mystack.size() != 0)
	{
		cout << "Error to Match!" << endl;
	}
}
