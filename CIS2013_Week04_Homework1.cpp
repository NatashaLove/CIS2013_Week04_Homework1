//Purpose of the program is to use functions in the calculator program.

#include <iostream>
#include <cmath>

void get_input (double& num_1, double& num_2, char& operat);
void add (double& num_1, double& num_2, char& operat);
void subtract (double& num_1, double& num_2, char& operat);
void multiply (double& num_1, double& num_2, char& operat);
void divide (double& num_1, double& num_2, char& operat);
void sqroot (double num, char operat);
//void modulus(double& num_1, num_2);
void question (char& answer);
void bye ();

int main () {
	using namespace std;
	double num_1, num_2;
	char operat;
	char answer;
	
	do
	{
	get_input (num_1, num_2, operat);
	add (num_1, num_2, operat);
	subtract (num_1, num_2, operat);
	multiply (num_1, num_2, operat);
	divide (num_1, num_2, operat);
	sqroot(num_1, operat);
	sqroot(num_2, operat);
	
	//modulus(num_1, num_2);
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
	 }
	while (answer == 'y');

	//cout << "Good bye..";
		
	bye ();
return 0;

}


void get_input (double& num_1, double& num_2, char& operat) {
	
	using namespace std;
	cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		cout << "What calculations do you want to make?\n";
		cout << "Enter one of the operators: '+', '-', '*', '/', 's' - for square root or 'm' - for modulus \n";
		cin >> operat;
}
void add (double& num_1, double& num_2, char& operat) {
	using namespace std;
	double result;
	if(operat == '+') {
		result = num_1 + num_2;
		cout << " If you add them you get " << result << endl;	
	
	}
}
void subtract (double& num_1, double& num_2, char& operat) {
	using namespace std;
	double result;
	if(operat == '-') {
		result = num_1 - num_2;
		cout << " If you subtract them you get " << result << endl;
	}	
}
void multiply (double& num_1, double& num_2, char& operat) {
	using namespace std;
	double result;
	if(operat == '*') {
		result = num_1 * num_2;
		cout << " If you multiply them you get " << result << endl;
	
	}
}
void divide (double& num_1, double& num_2, char& operat) {
	using namespace std;
	double result;
	if(operat == '/'){
		result = num_1 / num_2;
		cout << " If you divide them you get " << result << endl;
	}
}
void question (char& answer) {
	using namespace std;
	cout << "Do you want to make another calculation? ('y'/'n')" << endl;
		cin >> answer;
}
void bye () {
	using namespace std;
	
	cout << "Good bye.."<< endl;
}
void sqroot (double num, char operat) {
	using namespace std;
	
	if(operat == 's'){
		double result = sqrt(num);
		cout << " Square root of the corresponding number is " << result << endl;
	}
}