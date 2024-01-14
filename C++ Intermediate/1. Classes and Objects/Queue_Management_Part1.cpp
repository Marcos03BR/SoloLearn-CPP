// Need to create the class to hold the queue data, which are customer IDs (integers).

#include <iostream>
using namespace std; 

class Queue { 

	int size; 
	int* queue; 
	
	public:
	Queue() {
		size = 0;
		queue = new int[100];
	}

	void remove() { 

		if (size == 0) { 

			cout << "Queue is empty"<<endl; 
			return; 

		} else { 

			for (int i = 0; i < size - 1; i++) { 

				queue[i] = queue[i + 1]; 

			} 

			size--;

		} 

	} 

	void print() { 

		if (size == 0) { 

			cout << "Queue is empty"<<endl; 
			return; 

		} 

		for (int i = 0; i < size; i++) { 

			cout<<queue[i]<<" <- ";

		} 

		cout <<endl;

	}

    void add(int item) {
        
        if (size >= 100) {
            cout << "Queue is full. Cannot add more items." << endl;
            return;

        }

		queue[size] = item;

        size++;

    }
	
}; 

int main() { 

	Queue q; 
	q.add(42); q.add(2); q.add(8); q.add(1); 
	q.print();
	q.remove(); 
	q.add(128); 
	q.print(); 
	q.remove(); 
	q.remove(); 
	q.print(); 

	return 0; 
    
} 