#include <iostream>
#include "include/task.h"

using namespace std;

int main() {

	string task_name = "Homework";
	Task task = Task(task_name);

	cout << "Task Name: " << task_name << endl;
	return 0; 
}