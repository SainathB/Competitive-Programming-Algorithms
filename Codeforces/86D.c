#include <cstdio>
#include <algorithm>
using namespace std;

#define N 200001
#define A 1000001
#define BLOCK 555 // ~sqrt(N)

long long cnt[A], a[N], ans[N], answer = 0;

struct node {
	long long L, R, i;
}q[N];

bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) {
		// different blocks, so sort by block.
		return x.L/BLOCK < y.L/BLOCK;
	}
	// same block, so sort by R value
	return x.R < y.R;
}

void add(long long position) {
	answer+=(2*cnt[a[position]]+1)*a[position];
	cnt[a[position]]++;
}

void remove(long long position) {
	answer-=(2*cnt[a[position]]-1)*a[position];
	cnt[a[position]]--;
}
int main() {
	long long n, m;
	scanf("%I64d", &n);
	scanf("%I64d", &m);
	for(long long i=0; i<n; i++)
		scanf("%I64d", &a[i]);

	for(long long i=0; i<m; i++) {
		scanf("%I64d%I64d", &q[i].L, &q[i].R);
		q[i].L--; q[i].R--;
		q[i].i = i;
	}

	sort(q, q + m, cmp);

	long long currentL = 0, currentR = 0;
	for(long long i=0; i<m; i++) {
		long long L = q[i].L, R = q[i].R;
		while(currentL < L) {
			remove(currentL);
			currentL++;
		}
		while(currentL > L) {
			add(currentL-1);
			currentL--;
		}
		while(currentR <= R) {
			add(currentR);
			currentR++;
		}
		while(currentR > R+1) {
			remove(currentR-1);
			currentR--;
		}
		ans[q[i].i] = answer;
	}

	for(long long i=0; i<m; i++)
		printf("%I64d\n", ans[i]);
}
