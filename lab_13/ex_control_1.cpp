#include <iostream>
#include <vector>

using namespace std;
// polymorphism for teacher and student

class Person {
public:

	Person(string name, string last_name, string second_name) {
		this->name = name;
		this->last_name = last_name;
		this->second_name = second_name;
	}

	virtual void print() {}

protected:
	string name;
	string last_name;
	string second_name;
};

class Student : public Person {
public:

	Student(string last_name, string name, string
		second_name,
		vector<int> scores) : Person(last_name, name, second_name) {
		this->scores = scores;
	}

	float get_average_score()
	{

		unsigned int count = this->scores.size();
		unsigned int sum = 0;
		float average;

		for (int i = 0; i < count; ++i) {
			sum += this->scores[i];
		}
		average = (float)sum / (float)count;
		return average;
	}

	void print() {
		cout << "Student: " << this->last_name << " "
			<< this->name << " "
			<< this->second_name << ". Average score: " << this->get_average_score() << endl;
	}

private:

	vector<int> scores;
};

class Teacher : public Person {
public:
	Teacher(
		string last_name,
		string name,
		string second_name,

		unsigned int work_time
	) : Person(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}

	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void print() {
		cout << "Teacher: " << this->last_name << " "
			<< this->name << " "
			<< this->second_name << ". Working time: " << this->get_work_time() << endl;
	}
private:
	unsigned int work_time;
};

int main()
{
	vector<int> scores;

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* student = new Student("Petrov", "Ivan", "Alekseevich", scores);
	Teacher* teacher = new Teacher("Sergeev", "Dmitriy", "Sergeevich", 40);

	student->print();
	teacher->print();
}
// Student: Ivan Petrov Alekseevich. Average score: 3.66667
// Teacher: Dmitriy Sergeev Sergeevich. Working time : 40