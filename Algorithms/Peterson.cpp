// Peterson's algorithm for mutual excution of threads

#include <iostream>
#include <thread>

#include <emmintrin.h> // library for memory fence

namespace {
	class Peterson {
	private:
		volatile int interested[2] = { 0,0 };
		volatile int turn = 0;
	public:
		void lock(int tid) {
			interested[tid] = 1;
			int other = 1 - tid;
			turn = other;

			// insure that all previous writes have been set visible
			// after that the other thread can read the values set by this thread
			_mm_mfence();

			// Wait while the other thread finishes
			while (turn == other && interested[other]);
		}

		void unlock(int tid) {
			interested[tid] = 0;
		}
	};

	void work(Peterson& p, int& val, int tid) {
		for (int i = 0; i < 1000000; i++) {
			p.lock(tid); // lock for the current thread that is using the work function

			val++;

			p.unlock(tid); // unlock for the other thread
		}
	}

	void peterson_test() {
		int val = 0;
		Peterson p;
		// make two threads for testing the algorithm and call work function
		std::thread t1([&] { work(p, val, 0); });
		std::thread t2([&] { work(p, val, 1); });

		// run the threads
		t1.join();
		t2.join();

		std::cout << "FINAL COUNT IS: " << val << std::endl;

	}
}

