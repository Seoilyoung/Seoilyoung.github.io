#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case, T;
    int N, M;
    int R[100], W[10000];

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N;
        cin >> M;
        for(int n=0 ; n<N ; n++)
        	cin >> R[n];
        for(int m=0 ; m<M ; m++)
        	cin >> W[m];
	}
	return 0;
}