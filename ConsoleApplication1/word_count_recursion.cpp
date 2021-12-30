#include <ctype.h>
#include <stdio.h>

int 単語数を数える(const char* p);

int 次の単語から数える(const char* p)
{
	for (;;) {
		if (*p == '\0')
			return 0;
		else if (isspace((unsigned char)*p))
			return 単語数を数える(p + 1);
		else
			++p;
	}
}

int 単語数を数える(const char* p)
{
	for (;;) {
		if (*p == '\0')
			return 0;
		else if (isspace((unsigned char)*p))
			++p;
		else
			return 1 + 次の単語から数える(p + 1);
	}
}

int main()
{
	const int n = 単語数を数える("   ALPHA   ｶﾀｶﾅ BETA   GAMMA DELTA");
	printf("単語数： %d\n", n);
}
