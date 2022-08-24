#ifndef TASK_LIBRARY_TASK_HPP__
#define TASK_LIBRARY_TASK_HPP__

#include <iostream>
using namespace std;

class Task {
public:
	Task(const string& task_name);

private:
	string task_name_;
};

#endif  // TASK_LIBRARY_TASK_HPP__