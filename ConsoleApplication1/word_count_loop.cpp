#include <ctype.h>
#include <stdio.h>

int �P�ꐔ�𐔂���(const char* p)
{
	bool �P�ꒆ = false; //�t���O�c�ϐ����ɒ��Ӂc���ꂪ�^�ł���Ƃ���\������
	int �P�ꐔ = 0;
	for (;; ++p) {
		if (*p == '\0')
			return �P�ꐔ;
		else {
			if (isspace((unsigned char)*p)) {
				//��
				if (�P�ꒆ)
					�P�ꒆ = false;
			}
			else {
				//���
				if (!�P�ꒆ) {
					�P�ꒆ = true;//�P��̎n�܂�
					++�P�ꐔ;
				}
			}
		}
	}
}

int main()
{
	const int n = �P�ꐔ�𐔂���("   ALPHA   ���� BETA   GAMMA X Y Z");
	printf("�P�ꐔ�F %d\n", n);
}
