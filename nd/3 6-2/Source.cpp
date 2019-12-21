#include<iostream>
#include<fstream>
#include<string>

using namespace std;

const char skFailas[] = "Duomenys.txt";
const char raFailas[] = "Rezultatai.txt";
const int didzKiekis = 100;

struct sarasas {
	string miestas;
	double kaina;
	int isvykimas, atvykimas;
};

sarasas A[didzKiekis];

int main() {



	int t;
	cin >> t;
	return t;
}

void skaityti(const char sk[], int &n) {
	ifstream fd(sk);
	fd >> n;
	for (int i = 0; i < n; i++) {
		fd >> A[i].miestas >> A[i].kaina >> A[i].isvykimas >> A[i].atvykimas;
	}
	fd.close();
}
/*void rikiuoti(int &n) {
	int mini;
	int b;
	for (int i = 0; i < n - 1; i++) {
		mini = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[i]) {
				mini = j;
				b = A[i];
				A[i] = A[j];
				A[mini] = b;
			}
			else if (A[j] == A[i]) {

			}
		}
	}
}*/
int brangiausias(int &n) {
	int reki=0;
	for (int i = 0; i < n; i++) {
		if (A[i].kaina > A[reki].kaina) {
			reki = i;
		}
	}
	return reki;
}