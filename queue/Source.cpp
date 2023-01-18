#include<iostream>
using namespace std;
#define max  100
class queue {
	int items [max];
	int front, rear;

public:
	queue() {
		front = -1;
		rear = -1;
	}
	void enqueue(int item) {
		if (is_full()) {
			cout << "queue is overflow" << endl;
			exit(-1);
		}
		if (front == -1)
			front = 0;
			items[++rear] = item;
		
	}
	void dequeue() {
		if (is_empty()) {
			cout << "queue is underflow\n";
			exit(-1);
		}
		else{
		int item = items[front++];
		return item;
		}
	
	}
	bool is_empty() {
		if (front == -1 && rear == -1) 
			return true;
			return false;
	}
	bool is_full() {
		if (front == 0 && rear == max - 1)
			return true;
		return false;
	}
	void display() {
		if (is_empty()) {
			cout << "queue is empty\n";
			exit(-1);
		}
		for (int i = front; i <= rear; i++) {
			cout << items[i] << endl;
		}
	}
};
int main() {






	return 0;
}