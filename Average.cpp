#include<bits/stdc++.h>
using namespace std;

double calculateAverage(int N, const vector<double>& A) {
    double sum = 0.0;
    for (double num : A) {
        sum += num;
    }
    return sum / N;
}

int main() {
    int N;
    cin >> N;
    
    vector<double> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    double average = calculateAverage(N, A);
    
    cout << fixed << setprecision(6) << average;
    
    return 0;
}