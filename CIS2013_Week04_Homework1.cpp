//Purpose of the program is to use functions in the calculator program.

#include <iostream>

void get_input (int& num_1, int& num_2, char& operat);
void add (int& num_1, int& num_2, char& operat);
void subtract (int& num_1, int& num_2, char& operat);
void multiply (int& num_1, int& num_2, char& operat);
void divide (int& num_1, int& num_2, char& operat);
void question (char answer);
void bye ();

int main () {
	using namespace std;
	int num_1, num_2;
	char operat;
	char answer;
	
	//do
	//{
	get_input (num_1, num_2, operat);
	add (num_1, num_2, operat);
	subtract (num_1, num_2, operat);
	multiply (num_1, num_2, operat);
	divide (num_1, num_2, operat);
	question (answer);
	
		// cout << "Give me two numbers \n";
		// cin >> num_1;
		// cin >> num_2;
		// cout << "What calculations do you want to make?\n";
		// cout << "Enter one of the operators: '+', '-', '*', '/' \n";
		// cin >> operat;
		// if(operat == '+') {
		// cout << " If you add them you get " << num_1 + num_2 << endl;	
	
	// } else {
		// if(operat == '-') {
		// cout << " If you subtract them you get " << num_1 - num_2 << endl;	
	
	// } else {
		// if(operat == '*') {
		// cout << " If you multiply them you get " << num_1 * num_2 << endl;
	
	// } else {
		// if(operat == '/'){
		// cout << " If you divide them you get " << num_1 / num_2 << endl;
	// }
		
	// }
	// }
	// }
	// cout << "Do you want to make another calculation? ('y'/'n')" << endl;
		// cin >> question;
	// }
	//while (question == 'y');

	//cout << "Good bye..";
	void bye ();	
	
return 0;

}

void get_input (int& num_1, int& num_2, char& operat) {
	
	using namespace std;
	cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		cout << "What calculations do you want to make?\n";
		cout << "Enter one of the operators: '+', '-', '*', '/' \n";
		cin >> operat;
}
void add (int& num_1, int& num_2, char& operat) {
	using namespace std;
	int result;
	if(operat == '+') {
		result = num_1 + num_2;
		cout << " If you add them you get " << result << endl;	
	
	}
}
void subtract (int& num_1, int& num_2, char& operat) {
	using namespace std;
	int result;
	if(operat == '-') {
		result = num_1 - num_2;
		cout << " If you subtract them you get " << result << endl;
	}	
}
void multiply (int& num_1, int& num_2, char& operat) {
	using namespace std;
	int result;
	if(operat == '*') {
		result = num_1 * num_2;
		cout << " If you multiply them you get " << result << endl;
	
	}
}
void divide (int& num_1, int& num_2, char& operat) {
	using namespace std;
	int result;
	if(operat == '/'){
		result = num_1 / num_2;
		cout << " If you divide them you get " << result << endl;
	}
}
void question (char answer) {
	using namespace std;
	cout << "Do you want to make another calculation? ('y'/'n')" << endl;
		cin >> answer;
}
void bye () {
	using namespace std;
	cout << "Good bye.."<< endl;
}