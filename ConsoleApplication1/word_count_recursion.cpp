#include <ctype.h>
#include <stdio.h>

int �P�ꐔ�𐔂���(const char* p);

int ���̒P�ꂩ�琔����(const char* p)
{
	for (;;) {
		if (*p == '\0')
			return 0;
		else if (isspace((unsigned char)*p))
			return �P�ꐔ�𐔂���(p + 1);
		else
			++p;
	}
}

int �P�ꐔ�𐔂���(const char* p)
{
	for (;;) {
		if (*p == '\0')
			return 0;
		else if (isspace((unsigned char)*p))
			++p;
		else
			return 1 + ���̒P�ꂩ�琔����(p + 1);
	}
}

int main()
{
	const int n = �P�ꐔ�𐔂���("   ALPHA   ���� BETA   GAMMA DELTA");
	printf("�P�ꐔ�F %d\n", n);
}
