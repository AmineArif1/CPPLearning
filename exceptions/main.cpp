#include <exception>
#include <iostream>
using namespace std;

class myOWNException : public exception{
	public:

		const char* what() {

	
		return "C++ Exception";
		}




};

int main(){

	try{
	
	//	throw myOWNException(); 
	
	}
	catch(myOWNException& i){
		std::cout << i.what() << endl;
	
	
	}
	try{
	throw out_of_range("shit");

	
	}
	catch(exception& i){
	cout << "out of range error";
	
	}

}
