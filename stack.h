/*************************************************************************
	> File Name: queue.h
	> Author: zyh_helen
	> Mail: zyh_helen@yeah.net 
	> Created Time: Tue 05 Apr 2016 03:15:27 AM EDT
 ************************************************************************/

/*
 *    queue_assist（辅助空间：调整数据顺序）
 *    queue_actual（实际空间：用于数据的pop/push）
 *    插入时操作：
 *    1：实际空间--> 辅助空间
 *    2：新数据  --> 实际空间
 *    3：辅助空间-->实际空间
 *
 * */
#include<queue>
#include<iostream>
using namespace std;

class Stack{
public:
	void Push(const int val){
		int tmp;
		//实际空间--->辅助空间
		while(!queue_actual.empty()){
			tmp = queue_actual.front();
			queue_actual.pop();
			queue_assist.push(tmp);
		}

		//新数据  --->实际空间
		queue_actual.push(val);
		//辅助空间--->实际空间
		while(!queue_assist.empty()){
			tmp = queue_assist.front();
			queue_assist.pop();
			queue_actual.push(tmp);
		}
	}

	void Pop(){
		return queue_actual.pop();
	}

	int Top(){
		return queue_actual.front();
	}

	bool IsEmpty()const{
		return queue_actual.empty();
	}

private:
	queue<int> queue_assist;
	queue<int> queue_actual;
};

