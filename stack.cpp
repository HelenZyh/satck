/*************************************************************************
	> File Name: stack.cpp
	> Author: zyh_helen
	> Mail: zyh_helen@yeah.net 
	> Created Time: Tue 05 Apr 2016 03:13:15 AM EDT
 ************************************************************************/

#include"stack.h"

int main()
{
	Stack stack;
	for(int i = 0;i<10;++i){
		stack.Push(i);
	}

	while(!stack.IsEmpty()){
		cout<<stack.Top()<<" ";
		stack.Pop();
	}
	return 0;
}
