//Call-by-value : 값을 인자로 전달하는 함수의 호출방식
//Call-by-reference : 주소 값을 인자로 전달하는 함수의 호출방식

#include<iostream>
using namespace std;

void Co(int n)//이렇게 함수에 값을 넣는 방식이 Call-by-value다.
{
	n += 1;
}

int main()
{
	int num = 1;//외부에서 1로 선언.
	Co(num);//내부에서 +1하려 했지만
	cout << num << endl;//출력은 1로 된다. 즉, Call-by-value 방식은 외부 변수에 대한 접근이 불가하다.
	return 0;
}