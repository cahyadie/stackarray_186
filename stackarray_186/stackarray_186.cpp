#include <iostream>
using namespace std;

class Stackarray {
private:
	string stack_array[5];
	int top;
public:
	//constructor 
	Stackarray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {//step 1
			cout << "Number of data exeeds the limit." << endl;
			return "";
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " Ditambahkan(pushed) " << endl;

		return element;
	}
	void pop() {
		if (Empty()) { //step 1
			cout << "nStack is empty. cannot pop. " << endl;
			return;
		}
		cout << "\nThe popped emelemt is : " << stack_array[top] << endl;	//step 2
		top--; //step 3decrement
	}
	//method for cheeck if data is empty
	bool Empty() {
		return (top == -1);
	}
	void display() {
		if (Empty()) {
			cout << "\nStack is empty. " << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}

	}
}; 

int main() {
	Stackarray s;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1.push\n";
		cout << "2.Pop\n";
		cout << "3.Display\n";
		cout << "4.Exit\n";
		cout << "\nEnter your choice : ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			cout << "|nEnter a element : ";
			string element;
			getline(cin, element);
			s.push(element);
			break;
		}
		case '2': 
			if (s.Empty()) {
				cout << "n\Stack is empty. " << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;

		case '4':
			return 0;
		}
	}
}
