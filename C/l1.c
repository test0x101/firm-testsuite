int printf(const char *str, ...);

struct x {};
struct x a[] = { {}, {} };

int size = sizeof(a);

int main() {
	printf("%u\n", (unsigned) sizeof(a));
}