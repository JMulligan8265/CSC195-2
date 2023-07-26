#include <iostream>
using namespace std;

void Double(int* x) {
	*x = *x * 2;
};

void Square(int& x) {
	x = x * x;
};

struct Person
{
	char name[32];
	int id;
};
int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int a = 6;
	// declare a int reference and set it to the int variable above
	int& b = a;
	// output the int variable
	cout << a << endl;
	// set the int reference to some number
	b = 3;
	// output the int variable
	cout << b << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	// The int variable was changed to match the value of the reference.


	// output the address of the int variable
	cout << &a << endl;
	// output the address of the int reference
	cout << &b << endl;
	// are the addresses the same or different? (insert answer)
	// The addresses are exactly the same.


	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
		// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
		// call the Square function with the int variable created in the REFERENCE section
		// output the int variable to the console
		// !! notice how the variable has not changed, this is because we only passed the value to the function !!
		// change the Square function to take a int reference
		// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
		// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	Square(b);
	cout << b << endl;
	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* c = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	c = &a;
	// output the value of the pointer
	cout << c << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// The pointer is pointing to the same address as the int variable


	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *c << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(c);
	// output the dereference pointer
	cout << *c << endl;
	// output the int variable created in the REFERENCE section
	cout << a << endl;
	// did the int variable's value change when using the pointer?
	// Yes


	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* d = new int(3);
	// output the pointer value, this should be the address of the int allocated on the heap
	cout << d << endl;
	// output the dereference pointer
	cout << *d << endl;
	// deallocate the int pointer to free up the memory
	delete(d);
	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4 - 6
	int* e = new int[6];
		// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int i = 0; i < 6; i++) {
		e[i] = rand() % 10;
	}
		// use a for loop and output each of the ints in the array
	for (int i = 0; i < 6; i++) {
		cout << e[i] << endl;
	}
		// use a for loop and output the address of each of the ints in the array
	for (int i = 0; i < 6; i++) {
		cout << &e[i] << endl;
	}
		// deallocate the int pointer to free up the memory block (remember it's an array)
	delete [] e;
		// ** STRUCTURE **
		//
		// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	Person* people = new Person[2];
		// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	for (int i = 0; i < 2; i++) {
		cout << "\nEnter name for person number " << i + 1 << endl;
		cin >> people[i].name;

		cout << "\nEnter id for person number " << i + 1 << endl;
		cin >> people[i].id;
		}
		// use a for loop and output the name and id of each person in the array
	for (int i = 0; i < 2; i++) {
		cout << people[i].name << endl;
		cout << people[i].id << endl;
		}
		// deallocate the person pointer to free up the memory block (remember it's an array)
	delete [] people;
}
