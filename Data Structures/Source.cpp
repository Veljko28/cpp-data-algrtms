#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>

#define ll long long int
#define vint std::vector<int>


template <typename T>
void vecPrint(std::vector<T> vec) {
	for (T type : vec) {
		std::cout << type.Name;
	}
}

// Test code 

//__interface IPerson {
//public:
//	void sayHello();
//	void howOld();
//};
//
//class Student : public IPerson {
//public:
//	unsigned int id;
//	std::string Name;
//	int Years;
//	std::vector<int> grades;
//
//	Student(std::string Name, int Years, std::vector<int> grades) {
//		this->id = rand() % 10000;
//		this->Name = Name;
//		this->Years = Years;
//		this->grades = grades;
//	}
//
//	Student(unsigned int id,std::string Name, int Years, std::vector<int> grades) {
//		this->id = id;
//		this->Name = Name;
//		this->Years = Years;
//		this->grades = grades;
//	}
//	
//	virtual void sayHello() override
//	{
//		std::cout << "Hello I'm " << Name << std::endl;
//	}
//
//	virtual void howOld() override
//	{
//		std::cout << "I'm " << Years << " years old" << std::endl;
//
//	}
//
//	void getGrades() {
//		for (int grade : grades) {
//			std::cout << grade;
//		}
//	}
//};
//
//class School {
//public:
//	std::string name;
//	int numOfStudets;
//
//	School(std::string name, int numOfStudents)
//	{
//		this->name = name;
//		this->numOfStudets = numOfStudents;
//	}
//
//};
//
//
//__interface Classroom {
//public:
//	Student getStudentById(unsigned int id);
//	std::vector<Student> getAllStudents();
//	void addStudent(Student student);
//};
//
//class StClass : public Classroom {
//public:
//	std::vector<Student> students;
//
//	StClass(std::vector<Student> students)
//	{
//		this->students = students;
//	}
//
//	virtual Student getStudentById(unsigned int id) override
//	{
//		try {
//			for (Student s : students) {
//				if (s.id == id) return s;
//			}
//			throw id;
//		}
//		catch (unsigned int Id) {
//			Student student = { Id ,"New Student",0, {0} };
//			return student;
//		}
//	}
//	virtual std::vector<Student> getAllStudents() override
//	{
//		return students;
//	}
//
//	virtual void addStudent(Student student) override
//	{
//		students.push_back(student);
//	}
//};





// ----- PRIORITY QUEUE CODE ----- //
// ----- Min Heap Template ----- //

template <class T>
class PQueue {
protected:
	std::vector<T> vec;
	std::map<T, std::vector<int>> map;

private:
	int heapSize =  0;
	// Idx kjluca u mapi
	std::vector<int> indexesOf(T k) {
		std::vector<int> idxVec = {};
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == k) idxVec.push_back(i);
		}
		return idxVec;
	}

	void updateIdx(T m) {
		if (map.find(m) == map.end()) {
			map.insert(std::make_pair(m, indexesOf(m)));
		}
		else {
			// Update map idx
			auto it = map.find(m);
			it->second = indexesOf(m);
		}
	}
	void bubbleSort() {
		for (int i = 0; i < heapSize; i++) {
			for (int j = i + 1; j < heapSize; j++)
			{
				T temp;
				if (vec[j] < vec[i]) {
					temp = vec[i];
					vec[i] = vec[j];
					vec[j] = temp;
				}
			}
		}
	}

	// Min heap check
	bool isMinHeap() {
		for (int i = 1; i < heapSize; i++) {
			if (vec[i - 1] > vec[i]) {
				return false;
			}
		}
		return true;
	}

	
public:
	PQueue()
	{
		// classic ctor
	
		vec = { 1 };
		map.insert(std::make_pair(1, indexesOf(1)));
		heapSize = 1;

		if (!isMinHeap()) bubbleSort();
	}

	PQueue(std::vector<T> vec)
	{
		// init ctor
		this->vec = vec;
		for (int i = 0; i < vec.size(); i++) {
			if (map.find(vec[i]) == map.end()) {
				map.insert(std::make_pair(vec[i], indexesOf(vec[i])));
			}
		}
		heapSize = vec.size();
		if (!isMinHeap()) bubbleSort();
	}

	// Empty check
	bool isEmpty() {
		return vec.size() == 0;
	}

	// add node
	void add(T m) {
		vec.push_back(m);
		heapSize++;
		updateIdx(m);
		if (!isMinHeap()) bubbleSort();
	}

	void remove(T m) {
		std::vector<T> rmVec;
		bool skip = false;
		for (T k : vec) {
			if (k != m) {
				rmVec.push_back(k);
			}
			else {
				if (skip) {
					rmVec.push_back(k);
				}
				skip = true;
			}
		}
		vec = rmVec;
		heapSize = vec.size();
		updateIdx(m);
		if (!isMinHeap()) bubbleSort();
	}

	void removeAt(int idx) {
		if (idx > vec.size() || idx < 0) return;

		T key = vec[idx];
		vec.erase(vec.begin()+idx);
		heapSize = vec.size();
		updateIdx(key);
		if (!isMinHeap()) bubbleSort();
	}

	//Izbrisi poslednji node 
	void pop() {
		removeAt(heapSize-1);
	}

	// peek poslednji node u heap-u
	T peek() {
		return vec[vec.size()-1];
	}

	// Top heap-a 
	T top() {
		return vec[0];
	}

	void toString() {
		std::cout << "Heap as Array : " << std::endl;
		std::cout << "[ ";
		for (T key : vec) {

			if (key == vec[heapSize - 1]) {
				std::cout << key;
			}

			else std::cout << key << ", ";
		}
		std::cout << " ]\n";
	}
};

template <typename T>
struct node{
	T data;
	struct node *next;
};

template <typename T>
struct dblnode {
	T data;
	struct dblnode* next;
	struct dblnode* prev;
};

template <class T>
class SinglyLinkedList {
private:
	struct node<T>* head, * tail;
public:
	SinglyLinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void addNode(T n) {
		struct node<T> *temp = new node<T>;
		temp->data = n;
		temp->next = NULL;

		if (head == NULL) {
			tail = temp;
			head = temp;
			head->next = tail;
		}
		else {
			tail->next = temp;
			tail = tail->next;
		}
	}
	void print() {
		struct node<T>* temp = head;
		std::cout << "[ ";
		while (temp != NULL) {
			std::cout << temp->data << ", ";
			temp = temp->next;
		}
		std::cout << "]";
	}
};


template <class T>
class DoublyLinkedList {
private:
	struct dblnode<T> *head, *tail;
	int size;
public:
	DoublyLinkedList()
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void addNode(T n) {
		struct dblnode<T> *temp = new dblnode<T>();
		temp->data = n;
		temp->next = NULL;
		temp->prev = NULL;

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			temp->prev = tail;
			tail->next = temp;
			tail = tail->next;
		}
		size++;
	}
	void multiAdd(std::vector<T> vec) {
		for (T n : vec) {
			addNode(n);
		}
	}

	void print() {
		struct dblnode<T>* temp = head;
		std::cout << "[ ";
		while (temp != NULL) {
			std::cout << temp->data << ", ";
			temp = temp->next;
		}
		std::cout << "]";
	}

	void reversePrint() {
		struct dblnode<T>* temp = tail;
		std::cout << "[ ";
		while (temp != NULL) {
			std::cout << temp->data << ", ";
			temp = temp->prev;
		}
		std::cout << "]";
	}

	void sort() {
		for (int i = 0; i < size; i++) {
			struct dblnode<T>* temp = head;
			
			while (temp->next != NULL) {
				if (temp->data > temp->next->data) {
					T val = temp->data;
					temp->data = temp->next->data;
					temp->next->data = val;
				}
					temp = temp->next;
			}
		}
	}
};


int main() {
	PQueue<int> queue = PQueue<int>(vint{5, 2, 3, 7, 32, 12});
	queue.add(10);
	//queue.toString();
	DoublyLinkedList<int> a;
	a.multiAdd({5,7,19,2,7});
	a.sort();
	a.print();
	return 0;
}