/*
��蕶
3�{�̒������Ԋu�ɕ���ł��܂��B���̍����͍����珇�� a ���[�g��,b ���[�g��,c ���[�g�� �ł��B ���̐�[�����꒼����ɕ���ł��鎞�A�܂� b-a=c-b �𖞂����Ă���Ƃ��A���̒��̕��ѕ���������ƌĂт܂��B
���̕��ѕ������������ǂ����𔻒肵�Ă��������B
*/
#include<iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << (b - a == c - b ? "YES" : "NO") << std::endl;

	return 0;
}