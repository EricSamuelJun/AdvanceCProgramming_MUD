#include "my_def.h"
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<stdio.h>
void Item_HPHill(int point) {
	myPlayer.hp += point;
	if (myPlayer.hp > myPlayer.FHP) {
		myPlayer.hp = myPlayer.FHP;
	}
	printf("%s��(��) %d��ŭ HP�� ȸ���ߴ�!\n", myPlayer.name, point);
}
void Item_MPHill(int point) {
	myPlayer.mp += point;
	if (myPlayer.mp > myPlayer.FMP) {
		myPlayer.mp = myPlayer.FMP;
	}
	printf("%s��(��) %d��ŭ MP�� ȸ���ߴ�!\n", myPlayer.name, point);
}
void Item_StatUP(int point) {
	switch (point) {
	case 1:
		myPlayer.attack++;
		printf("%s�� Attack ��ġ�� 1 ����ߴ�!\n", myPlayer.name);
		break;
	case 2:
		myPlayer.wisdom++;
		printf("%s�� Wisdom ��ġ�� 1 ����ߴ�!\n", myPlayer.name);
		break;
	case 3:
		myPlayer.speed++;
		printf("%s�� Speed ��ġ�� 1 ����ߴ�!\n", myPlayer.name);
		break;
	case 4:
		myPlayer.FHP++;
		printf("%s�� FHP ��ġ�� 1 ����ߴ�!\n", myPlayer.name);
		break;
	case 5:
		myPlayer.FMP++;
		printf("%s�� FMP ��ġ�� 1 ����ߴ�!\n", myPlayer.name);
		break;
	default:
		break;
	}
}
int skillfx_6(int index) {
	setcolor(8);
	printf("���� ��ο���� ���� ���Դ� �Ҳ�\n");
	Sleep(500);
	printf("��ο� �Ҳ��̿� ����ϴ� ����� �Ǿ� ������ ��������\n���� �̸��� %s\n", mymonster[index].name);
	Sleep(100);
	printf("��ũ�÷��Ӹ�����<�濰��>\t����� �׸�â<�̴� �� ������ ������>\n");
	setcolor(15);
	return 1;
}
int skillfx_0(int index) {
	setcolor(9);
	printf("������ ���� õ���� �ְ��� ����\n");
	Sleep(500);
	printf("Ǫ���� ������ õ���̿� ���� �����϶�--\n");
	Sleep(1000);
	setcolor(3);
	printf("\t<Ǫ������>\n");
	setcolor(9);
	printf("\t�ϵ���\n");
	setcolor(3);
	printf("      <��վ�� �����̿�>\n");
	setcolor(9);
	printf("\t����ũ Į����\n");
	setcolor(15);
}
int skillfx_1() {
	setcolor(5);
	printf("�¾�ó�� ��Ÿ������ ���� �ĵ�\n");
	Sleep(500);
	printf("���������� �ۿ��ϸ� �ѽǰŸ��� ��ȭ\n");
	Sleep(1000);
	printf("������ �Ҳɿ� ���� ���� �� �ָ��� �� ��\n");
	Sleep(1000);
	setcolor(12);
	printf("\t<����>\n");
	setcolor(5);
	printf("\t�ͽ��÷���\n");
	setcolor(12);
	printf("   <��Ÿ������ ����� ��>\n");
	setcolor(5);
	printf("\t������ ���\n");
	setcolor(15);
}
int skillfx_2() {
	setcolor(2);
	printf("���� �ִ� ������ ���� ���� ��\n");
	Sleep(500);
	printf("������ �˸��� ���� ��¦��\n");
	Sleep(1000);
	printf("������ ���� ���� ����� ����������\n");
	Sleep(1000);
	setcolor(10);
	printf("\t<�ܱ�>\n");
	setcolor(2);
	printf("\t����Ʈ���ǵ�\n");
	setcolor(10);
	printf("   <������ ����>\n");
	setcolor(2);
	printf("\t���κ��̵�\n");
	setcolor(15);
}
int skillfx_3() {
	setcolor(5);
	printf("�����ϴ� ������ �����Ѵ�\n");
	Sleep(500);
	printf("��� ���� ���ϰ� ����������\n");
	Sleep(1000);
	printf("�Ĺ��� �������� �� Ž�彺���� �ȷ�\n");
	Sleep(1000);
	setcolor(12);
	printf("\t<�����>\n");
	setcolor(5);
	printf("\t�����ũ\n");
	setcolor(12);
	printf("   <����������>\n");
	setcolor(5);
	printf("\t���̻� �ر�\n");
	setcolor(15);
}
