#include <cstdlib>
#include <iostream>
class Customer {
private:
	int arrival;
	int processtime;
public:
	Customer() {
		arrival = processtime = 0;
	}
	Customer(int arr_v, int pro_v);
	void display();
};
typedef Customer Item;
class Queue {
private:
	struct Node
	{
		Item item;
		struct Node * next;
	};
	enum {Q_SIZE=10};
	Node * front;
	Node * rear;
	int item_num;
	const int qsize;
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty();
	bool isfull();
	int queuecount();
	bool enqueue(const Item & item);
	bool dequeue(Item & item);
};
