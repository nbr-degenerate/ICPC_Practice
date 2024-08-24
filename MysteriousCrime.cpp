#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

static bool SubsInMatrix(vector<string> s, vector<string> m) {
	int y = s.size(); int x = m.size();
	for (int i = 0; i < (x - y + 1);i++) {
		for (int j = 0; j < y;j++) {
			if (not(s[j] == m[i + j])) {
				break;
			}
			else if (j==y-1) {
				return true;
			}
		}
	}
	return false;
}
static void murder() {
	string inp;
	getline(cin, inp);
	stringstream ss(inp);
	ss >> inp;
	int x = stoi(inp);
	int count = x;
	ss >> inp; 
	int y = stoi(inp);
	vector<vector<string>> matrix1;
	vector<string> matrixL;
	for (int i = 0; i < y; i++) {
		string s;
		char inn[100];
		for (int i = 0;i < x;i++) {
			cin >> inn;
			s = inn;
			matrixL.push_back(s);
		}
		matrix1.push_back(matrixL);
		matrixL = {};
	}
	for (int j = 0; j < x; j++) {
		for (int k = j + 2;k < x + 1; k++) {
			matrixL = {};
			for (int o = j; o < k;o++) {
				matrixL.push_back(matrix1[0][o]);
			}
			bool arg = 1;
			for (int l = 0; l < y;l++) {
				if (l == 0) {
					continue;
				}
				if (SubsInMatrix(matrixL, matrix1[l])) {
					continue;
				}
				arg = 0;break;
			}
			count += arg;
		}
	}
	cout << count;
}

static void murder1() {
	string inp;
	getline(cin, inp);
	stringstream ss(inp);
	ss >> inp;
	int x = stoi(inp);
	int count = x;
	ss >> inp;
	int y = stoi(inp);
	vector<string> matrix1;
	matrix1.reserve(x);
	vector<vector<string>> matrixL;
	matrixL.reserve(y);
	for (int i = 0; i < y; i++) {
		getline(cin, inp);
		ss.str(inp);
		for (int i = 0; i < x;i++) {
			ss >> inp;
			matrix1.push_back(inp);
		}
		cout << "aaaaaaaa"<<endl;
		cout << matrix1[0]<<endl;
		matrixL.push_back(matrix1);
		matrix1 = {};
	}
}

int main() {
	/*string inp, s, e;
	getline(cin, inp);
	int y = inp.length();
	int x = (y / 2) + 1;
	if (inp.length() % 2 == 0) {
		size_t x = (y / 2);
	}
	cout << y << endl << x << endl;
	for (int i = 0; i < x;i++) {
		if (inp[i] == '?') { if (inp[y - i - 1] == '?') { s += 'a'; } else { s += inp[y - i - 1]; } }
		else { s += inp[i]; }
		if (y % 2 == 1) {
			x = 1;
		}
		cout << s << endl << e;
	}*/
	murder();
	return 0;
}
