#include <ctype.h>
#include <stdio.h>

int 単語数を数える(const char* p)
{
	bool 単語中 = false; //フラグ…変数名に注意…それが真であるときを表現する
	int 単語数 = 0;
	for (;; ++p) {
		if (*p == '\0')
			return 単語数;
		else {
			if (isspace((unsigned char)*p)) {
				//空白
				if (単語中)
					単語中 = false;
			}
			else {
				//非空白
				if (!単語中) {
					単語中 = true;//単語の始まり
					++単語数;
				}
			}
		}
	}
}

int main()
{
	const int n = 単語数を数える("   ALPHA   ｶﾀｶﾅ BETA   GAMMA X Y Z");
	printf("単語数： %d\n", n);
}
