#include "Peterson.cpp"
#include <thread>


int main() {
	int val = 0;
	Peterson p;
	// make two threads for testing the algorithm and call work function
	std::thread t1([&] { work(p, val, 0); });
	std::thread t2([&] { work(p, val, 1); });

	// run the threads
	t1.join();
	t2.join();

	std::cout << "FINAL COUNT IS: " << val << std::endl;
	return 0;
}