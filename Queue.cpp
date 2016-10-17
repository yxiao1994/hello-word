#include "Queue.h"
using std::cout;
Queue::Queue(int qs) :qsize(qs){
	front = rear = NULL;
	item_num = 0;
}
Queue::~Queue() {
	Node * temp;
	while (front!=NULL) {
		temp = front;
		front = front->next;
		delete temp;
	}
}
bool Queue::isempty() {
	return item_num == 0;
}
bool Queue::isfull() {
	return item_num == qsize;
}
int Queue::queuecount() {
	return item_num;
}
bool Queue::enqueue(const Item & item) {
	if (isfull())
		return false;
	Node *add = new Node;
	add->item = item;
	add->next = NULL;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	item_num++;
	return true;
}
bool Queue::dequeue(Item & item) {
	if (isempty())
		return false;
	item = front->item;
	Node * temp = front->next;
	delete front;
	front = temp;
	if (--item_num == 0)
		rear = NULL;
	return true;
}
Customer::Customer(int arr_v, int pro_v) {
	arrival = arr_v;
	processtime = pro_v;
}
void Customer::display() {
	cout << "arrival time:" << arrival << "  "
		<< "process time" << processtime << std::endl;
}