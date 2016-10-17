#include "Queue.h"
using namespace std;
int main() {
	cout << "Enter the max number of queue:" << endl;
	int max;
	cin >> max;
	Customer customer[5] = {Customer(3,5),Customer(4,6) ,Customer(5,7) ,Customer(6,8),Customer(7,9) };
	Queue q;
	Customer temp;
	q.enqueue(customer[0]);
	q.enqueue(customer[1]);
	q.dequeue(temp);
	temp.display();
	q.dequeue(temp);
	temp.display();
	q.enqueue(customer[4]);
	cout << q.isempty() << endl;
	q.dequeue(temp);
	temp.display();
	cout << q.isempty() << endl;
	system("pause");
	return 0;
}