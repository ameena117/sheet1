#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (char c : alphabet) {
        std::string filename = std::string(1, c) + ".txt";
        std::ofstream file(filename);

        if (file.is_open()) {
            file << "This is file " << filename << std::endl;
            file.close();
            std::cout << "Created file: " << filename << std::endl;
        }
        else {
            std::cout << "Unable to create file: " << filename << std::endl;
        }
    }

    return 0;
}

//A 
//#include <iostream>
//using namespace std;
//
//int main() {
//	string name = "";
//	cin >> name;
//	cout << "Hello, ";
//	cout << name;
//}

//B
//#include <iostream>
//using namespace std;
////B
//int main() {
//	int myInt = 0;
//	long long myLong = 0;
//	char myChar = ' ';
//	float myFloat = 0;
//	double myDouble = 0;
//
//	cin >> myInt >> myLong >> myChar >> myFloat >> myDouble;
//	cout << myInt << "\n" << myLong << "\n" << myChar << "\n" << myFloat << "\n" << myDouble;
//}

//C
//#include <iostream>
//using namespace std;
//
//int main() {
//	long long int firstNum = 0;
//	long long int secondNum = 0;
//	cin >> firstNum >> secondNum;
//	cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << "\n";
//	cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << "\n";
//	cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << "\n";
//}

//D
//#include <iostream>
//using namespace std;
//
//int main() {
//	long long int a,
//		b,
//		c,
//		d;
//	cin >> a >> b >> c >> d;
//	/* (A * B) - (C * D)*/
//	cout << "Difference = " << (a * b) - (c * d);
//}

//E
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	cout << fixed << setprecision(9);
//	double input = 0;
//	double pi = 3.141592653;
//
//	cin >> input;
//	double area = pi * input * input;
//	cout << area;
//}


//F
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	long long int n, m;
//	cin >> n >> m;
//	cout << n % 10 + m % 10;
//}

//G
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	long long int num;
//	cin >> num;
//	cout << num * (num + 1) / 2;
//}

//H
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	float firstNum, secondNum;
//	cin >> firstNum >> secondNum;
//	/*
//	floor 10 / 3 = 3
//	ceil 10 / 3 = 4
//	round 10 / 3 = 3
//	*/
//	cout << "floor " << firstNum << " / " << secondNum << " = " << floor(firstNum / secondNum) << "\n";
//	cout << "ceil " << firstNum << " / " << secondNum << " = " << ceil(firstNum / secondNum) << "\n";
//	cout << "round " << firstNum << " / " << secondNum << " = " << round(firstNum / secondNum) << "\n";
//}


//I
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int A, B;
//	cin >> A >> B;
//	if (A >= B)
//	{
//		cout << "Yes";
//	}
//	else
//	{
//		cout << "No";
//	}
//}

////J
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int A = 0;
//	int B = 0;
//	cin >> A >> B;
//
//	if (!(A % B) || !( B % A ))
//	{
//		cout << "Multiples";
//	}
//	else
//	{
//		cout << "No Multiples";
//	}
//}

//K
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	cin >> A >> B >> C;
//
//	cout << min(min(min(A, B), min(A, C)), min(B, C)) << " " << max(max(max(A, B), max(A, C)), max(B, C));
//}

//L
//#include <iostream>
//using namespace std;
//
//int main() {
//	string firstName, lastName;
//	cin >> firstName >> lastName;
//
//	string firstName2, lastName2;
//	cin >> firstName2 >> lastName2;
//
//	if (lastName == lastName2)
//	{
//		cout << "ARE Brothers";
//	}
//	else
//	{
//	cout << "NOT";
//	}
//}

////M
//#include <iostream>
//using namespace std;
//
//int main() {
//	char ch;
//
//	cin >> ch;
//	//cout << (int)(ch);
//	if ('0' <= ch && ch < 'A')
//	{
//		cout << "IS DIGIT";
//	}
//	else
//	{
//		cout << "ALPHA\n";
//		if ('A' <= ch && ch <= 'Z')
//		{
//			cout << "IS CAPITAL";
//		}
//		else
//		{
//			cout << "IS SMALL";
//		}
//	}
//
//
//}

//N
//#include <iostream>
//using namespace std;
//
//int main() {
//	char ch;
//
//	cin >> ch;
//	//cout << (int)(ch);
//	if ('a' <= ch && ch <= 'z')
//	{
//		cout << char(ch - 32);
//	}
//	else
//	{
//		cout << char(ch + 32);
//	}
//}

////O
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	char ch;
//	short num1, num2;
//
//	cin >> num1 >> ch >> num2;
//	if ('+' == ch)
//	{
//		cout << num1+num2;
//	}
//	if ('-' == ch)
//	{
//		cout << num1 - num2;
//	}
//	if ('*' == ch)
//	{
//		cout << num1 * num2;
//	}
//	if ('/' == ch)
//	{
//		cout << num1 / num2;
//	}
//
//}


////P
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	short num;
//
//	cin >> num;
//	if (num/1000 %2 == 0)
//	{
//		cout << "EVEN";
//	}
//	else
//	{
//		cout << "ODD";
//	}
//
//}


////Q
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	float X,Y;
//	cin >> X >> Y ;
//	if (X == 0 && Y == 0) {
//		cout << "Origem";
//	}
//	else if (X == 0 & Y != 0) {
//		cout << "Eixo Y";
//	}
//	else if (Y == 0 & X != 0) {
//		cout << "Eixo X";
//	}
//	else if (abs(X) == X & abs(Y) == Y) {
//		cout << "Q1";
//	}
//	else if (abs(X) == X & abs(Y) != Y) {
//		cout << "Q4";
//	}
//	else if (abs(X) != X & abs(Y) == Y) {
//		cout << "Q2";
//	}
//	else if (abs(X) != X & abs(Y) != Y) {
//		cout << "Q3";
//	}
//}

//R
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int N;
//
//	cin >> N ;
//	cout << N / 365 << " years\n";
//	cout << N % 365 / 30 << " months\n";
//	cout << N % 365 % 30 << " days";
//
//}

//S
//#include <iostream>
///*#include <cmath>
//using namespace std;
//
//int main() {
//	float N;
//	cin >> N;
//	if (0 <= N && N <= 25) {
//	cout <<  "Interval [0,25]";
//	}
//	if (25 < N && N <= 50) {
//		cout << "Interval (25,50]";
//	}
//	if (50 < N && N <= 75) {
//	cout << "Interval (50,75]";
//	}
//	if (75 < N && N <= 100) {
//	cout <<  "Interval (75,100]";
//	}
//	if(N < 0 || N > 100) {
//		cout << "Out of Intervals";
//	}
//}*/

//U
//#include <iostream>
//#include <cmath>
//#include <cfloat>
//using namespace std;
//
//int main() {
//	float N;
//	cin >> N;
//	if (int(N) == float(N))
//	{
//		cout << "int "<< int(N);
//	}
//	else
//	{
//		cout << "float "<< int(N) << " " << N-int(N);
//	}
//	
//}

//V
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	short N1,N2;
//	char op;
//	cin >> N1 >> op >> N2;
//	if (op == '>')
//	{
//		if (N1 > N2) {
//			cout << "Right";
//		}
//		else
//		{
//			cout << "Wrong";
//		}
//	}
//	if (op == '<')
//	{
//		if (N1 < N2) {
//			cout << "Right";
//		}
//		else
//		{
//			cout << "Wrong";
//		}
//	}
//	if (op == '=')
//	{
//		if (N1 == N2) {
//			cout << "Right";
//		}
//		else
//		{
//			cout << "Wrong";
//		}
//	}
//}

//W
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	short N1, N2,N3;
//	char op;
//	char eq = '=';
//	cin >> N1 >> op >> N2 >> eq >> N3;
//	if (op == '+')
//	{
//		if (N1 + N2 == N3) {
//			cout << "Yes";
//		}
//		else
//		{
//			cout << N1+N2;
//		}
//	}
//	if (op == '-')
//	{
//		if (N1 - N2 == N3) {
//			cout << "Yes";
//		}
//		else
//		{
//			cout << N1-N2;
//		}
//	}
//	if (op == '*')
//	{
//		if (N1 * N2 == N3) {
//			cout << "Yes";
//		}
//		else
//		{
//			cout << N1*N2;
//		}
//	}
//}

//X
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int start1, end1, start2, end2;
//	cin >> start1 >> end1 >> start2 >> end2;
//	if (max(start1, start2) <= min(end1, end2)) 
//		cout << max(start1, start2) << " " << min(end1, end2);
//	else {
//				cout << "-1";
//
//	}
//}

//Y
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	long int N1, N2, N3, N4;
//	cin >> N1 >> N2 >> N3 >> N4;
//	int newN1 = N1 % 100;
//	int newN2 = N2 % 100;
//	int newN3 = N3 % 100;
//	int newN4 = N4 % 100;
//	long int res =(newN1 * newN2 * newN3 * newN4)%100;
//	if (res < 10) { cout << 0 << res; }
//	else {cout << res;}
//}

//Z
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	long double A, B, C, D;
//	cin >> A >> B >> C >> D;
//	if (B*log(A) > D*log(C)) { cout << "YES"; }
//	else { cout << "NO"; }
//}

////T
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	long long int A, B, C; //ABC ACB BAC BCA CAB CBA
//	cin >> A >> B >> C;
//	if (A <= B && B <= C) {
//		cout << A << endl << B << endl << C << endl;
//	}
//	else if (A <= C && C <= B) {
//		cout << A << endl << C << endl << B << endl;
//	}
//	else if (B <= A && A <= C) {
//		cout << B << endl << A << endl << C << endl;
//	}
//	else if (B <= C && C <= A) {
//		cout << B << endl << C << endl << A << endl;
//	}
//	else if (C <= A && A <= B) {
//		cout << C << endl << A << endl << B << endl;
//	}
//	else if (C <= B && B <= A) {
//		cout << C << endl << B << endl << A << endl;
//	}
//	cout << endl << A << "\n" << B << "\n" << C;
//}