#include <iostream>
#include <string>
#include <typeinfo>
const int SIZE = 3;
using namespace std;
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----
string print_guest_list(const string guest_list[], size_t size); //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE 
void clear_guest_list(string guest_list[], size_t size);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void event_guest_list();

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----
	int main() {
		event_guest_list();
		return 0;
	}
void event_guest_list() {
	string guest_list[]{ "Larry", "Moe", "Curly" };
	size_t guest_list_size{ SIZE };
	print_guest_list(guest_list, guest_list_size);
	clear_guest_list(guest_list, guest_list_size);
	print_guest_list(guest_list, guest_list_size);
}

string print_guest_list(const string guest_list[], size_t size) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
	size_t i;
	for (i = 0; i < size; i++) {
		cout << guest_list[i] << endl;
	}
	return typeid(guest_list).name();
}
void clear_guest_list(string guest_list[], size_t size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
	size_t i;
	for (i = 0; i < size; i++) {
		guest_list[i] = " ";
	}

}