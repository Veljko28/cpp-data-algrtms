#include <iostream>
#include <vector>
#include <random>
#include <iterator>
#include <algorithm> 
#include <cctype>

// testing the built in algorithms

namespace {
    void printVec(std::vector<int> v){
        for (int i : v){
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    void test() {

        // count with a condition - filter 
        std::vector<int> v {4, 1, 2, 4, 7, 3, 2, 6};
        int parni = std::count_if(v.begin(),v.end(),[](int i){ return i % 2 == 0; });
        std::cout << "Parni brojevi " << parni << std::endl; 

        // find last occurence of subarray 
        std::vector<int> t {3,2,6};
        auto iter = std::find_end(v.begin(),v.end(),t.begin(),t.end());
        std::cout << "Sub array ends at " << std::distance(v.begin(),iter) << std::endl; 

        // Searching algorithms

        std::string s = "Testing searching";
        std::string toFind = "search";
        auto found = std::search(s.begin(), s.end(), toFind.begin(),toFind.end());
        std::cout << "SubString " << toFind << " found at " << std::distance(s.begin(),found);

        auto f = s.find("chin");
        if (f != std::string::npos){ // checking if f is found ( != -1 ) size_t 
            std::cout << "SubString found at " << f << std::endl;
        }

        // Removing algorithms

        std::string a = " This  String  Has A Lot of spaces";
        a.erase(std::remove_if(a.begin(),a.end(),[](unsigned char c){return std::isspace(c);}));
        std::cout << a << std::endl;

        // Reversing 

        std::vector<int> r {1, 2, 3, 4, 5};
        std::vector<int> rev;
        // std::reverse_copy(r.begin(),r.end(),rev.begin()); // C++ 20 

        std::reverse(r.begin(),r.end()); // works for string as well
        // use std::rotate for similar effect or with upper and lower bound

        printVec(r);
        std::cout << std::endl;

        // using std::unique insted of sets 
        std::vector<int> un {1,1,1,3,4,5,5,5,6,3,4,7};
        un.erase(std::unique(un.begin(),un.end()),un.end());
        printVec(un);   


        // Random

        std::random_device rdev;
        std::mt19937 g(rdev());

        std::shuffle(un.begin(),un.end(),g);
        printVec(un);

        std::random_shuffle(un.begin(),un.end());
        printVec(un);
    }
}