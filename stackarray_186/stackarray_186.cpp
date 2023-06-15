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
}; 