#include <iostream>

class Person {
private:
	constexpr static int LIMIT = 25;
	std::string mLastName; // Person's last name
	char mFirstName[LIMIT]; // Person's first name
public:
	Person() {
		mLastName = ""; 
		mFirstName[0] = '\0'; 
	} // #1
	Person(const std::string & ln, const char * fn = "Heyyou") {
		mLastName = ln;
		int i = 0;
		while (i < LIMIT - 1 && fn[i]) {
			mFirstName[i] = fn[i];
			i++;
		}
		mFirstName[i] = '\0';
	}
 // #2
// the following methods display mLastName and mFirstName
	void Show() const // firstname lastname format
	{
		std::cout << mFirstName << ' ' << mLastName << std::endl;
	}
	void FormalShow() const // lastname, firstname format
	{
		std::cout << mLastName << ", " << mFirstName << std::endl;
	}
};
