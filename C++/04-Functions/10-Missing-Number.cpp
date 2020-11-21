#include <iostream>

#define ll long long

int main(void) {
	ll n {0};
	ll total {0};
	ll s {0};

	std::cin >> n;

	ll nums[n-1];
	for (ll i = 0; i < n-1; i++) {
		std::cin >> nums[i];
		s += nums[i];
	}

	total = n*(n+1)/2;

	std::cout << total - s << std::endl;

	return 0;
}