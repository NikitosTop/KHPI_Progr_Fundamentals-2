/********************************************************/
/*                ������������ ������ �10               */
/*               ��������� � ������� ��������           */
/*              ������ ����������. ������� �30.         */
/********************************************************/
#include <stdio.h>
#include <string.h>
#include <iostream>
/* �������� ���������, ������� ������������ ��������� */
struct mon {
	char name[15]; /* �������� */
	char sc;       /* ����� */
	int cnt;       /* ���������� ������� */
	float sq;      /* ������� */
} mm[10]; /* ����������� ������� ���������� */
int main(void) {
	setlocale(LC_ALL, "ru");
	std::system("chcp 1251");
	struct mon x; /* ������� ���������� */
	int n;    /* ���������� ��������� � ������� */
	int i, j; /* ������� ������� � ������� */
	int m;    /* ������ ������������ �������� */
	float sqx;/* ������� ���������� */
	 /* ���� ������ */
	 /*	�������� � 220 368,8
		�������� � 50 54,7
		�������� � 10 12,2 */
	for (n = 0; n < 10; n++) {
		printf("%d. �������: ��������, �����, ����������, ������� >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));
		if (!strcmp(mm[n].name, "***")) break;
		scanf_s("%s", &mm[n].sc, sizeof(mm[n].name));
		scanf_s("%d", &mm[n].cnt);
		/* ��������! �� ������� ������ � ������� ���������������� */
		scanf_s("%f", &mm[n].sq); //mm[n].sq = sqx;
	}
	/* ����� ������� */
	printf("---------------------------------------------\n");
	printf("|���������� ��������� ������ ������� ����    |\n");
	printf("|--------------------------------------------|\n");
	printf("| ��������  | ����� |����������|   �������   |\n");
	printf("|           |       |  ������� | ������(��)  |\n");
	printf("|-----------|-------|----------|-------------|\n");
	/* ����� ����� ����������� ������ */
	for (i = 0; i < n; i++)
		printf("| %9s |   %c   | %8d | %-11.1f |\n",
			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
	printf("---------------------------------------------\n");
	/* ���������� ������� */
	for (i = 0; i < n - 1; i++) {
		m = i; /* ����������� ������� - ������ */
		for (j = i + 1; j < n; j++)
			/* ���� ������� ������� > ������������,
			   �� ���������� ����������� */
			if (strcmp(mm[m].name, mm[j].name) > 0) m = j;
		if (m > i) {
			/* ������������ ������� � ������������ ��������� */
			/*strcpy_s(x.name, mm[i].name); x.sc = mm[i].sc;
			x.cnt = mm[i].cnt; x.sq = mm[i].sq;
			strcpy_s(mm[i].name, mm[m].name); mm[i].sc = mm[m].sc;
			mm[i].cnt = mm[m].cnt; mm[i].sq = mm[m].sq;
			strcpy_s(mm[m].name, x.name); mm[m].sc = x.sc;
			mm[m].cnt = x.cnt; mm[m].sq = x.sq;*/
			// ����� ��� �� ������� ���:
			x = mm[i];
			mm[i] = mm[m];
			mm[m] = x;
		}
	}
	/* ����� ������� */
	printf("---------------------------------------------\n");
	printf("|���������� ��������� ������ ������� ����    |\n");
	printf("|--------------------------------------------|\n");
	printf("| ��������  | ����� |����������|   �������   |\n");
	printf("|           |       |  ������� | ������(��)  |\n");
	printf("|-----------|-------|----------|-------------|\n");
	for (i = 0; i < n; i++)
		printf("| %9s |   %c   | %8d | %-11.1f |\n",
			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
	printf("---------------------------------------------\n");
	return 0;
}