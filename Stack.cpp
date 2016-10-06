#include <vector>
#include "Stack.h"

using namespace std;
/*
 * Push an integer onto the stack
 */
void Stack::push(int value)
{
	data.push_back(value);
	
}

/*
 * Pop an integer off the stack and return it
 */
int Stack::pop()
{
	int d = data[size()-1];
	data.pop_back();
	return d;

}

/*
 * Return the int that's on top of the stack
 */
int Stack::peek() const
{
	return data[size()-1];
}

/*
 * Return the number of items on the stack
 */
int Stack::size() const
{
	return data.size();
}
