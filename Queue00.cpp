#include<bits/stdc++.h>
using namespace std;

int main() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "Last element in Queue: " << q.back() <<endl;

	cout << "Queue elements: ";
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	queue<string> q2;
	q2.push("Asmaa");
	string name = q2.front();

	return 0;
}
