//Purpose of the program is to use functions in the calculator program.

#include <iostream>
#include <cmath>
//Get two numbers from the user 
void get_input (double& num_1, double& num_2, char& operat);
// addition function
void add (double& num_1, double& num_2, char& operat);
// subtraction function
void subtract (double& num_1, double& num_2, char& operat);
// multiplication function
void multiply (double& num_1, double& num_2, char& operat);
// division function
void divide (double& num_1, double& num_2, char& operat);
// square root function
void sqroot (double num, char operat);
// modulus function: shows if the number is even or odd
void modulo(int num, char operat);
// Ask user if he wants to continue
void question (char& answer);
// Good-bye
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
	modulo(num_1, operat);
	modulo(num_2, operat);
	question (answer);
	
	 }
	while (answer == 'y');
		
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
		cout << " Square root of the number " << num << " is " << result << endl;
	}
}
void modulo(int num, char operat) {
	using namespace std;
	
	if(operat == 'm'){
		
		if(num % 2 == 0) {
		cout << num << " is even " << endl;
		}
		else {
		cout << num << " is odd "<< endl;
		}
	}
}