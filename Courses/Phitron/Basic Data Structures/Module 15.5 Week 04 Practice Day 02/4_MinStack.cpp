#include <bits/stdc++.h> 
using namespace std;

// Implement class for minStack.
class minStack {

	public:
		stack<int> st, mn;
		// Function to add another element equal to num at the top of stack.
		void push(int num) {
			st.push(num);

			if (mn.empty() || num <= mn.top())
				mn.push(num);
		}
		
		// Remove and return the top element from the stack if present, else return -1.
		int pop() {
			if (st.empty()) return -1;
			int topEl = st.top();
			st.pop();

			if (topEl == mn.top())
				mn.pop();
            return topEl;    
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top() {
			if(st.empty()) return -1;
            return st.top();                
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin() {
			if(mn.empty()) return -1;
			return mn.top();
		}
};