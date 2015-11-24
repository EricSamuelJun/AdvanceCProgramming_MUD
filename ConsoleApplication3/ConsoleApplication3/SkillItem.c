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
	printf("%s은(는) %d만큼 HP를 회복했다!\n", myPlayer.name, point);
}
void Item_MPHill(int point) {
	myPlayer.mp += point;
	if (myPlayer.mp > myPlayer.FMP) {
		myPlayer.mp = myPlayer.FMP;
	}
	printf("%s은(는) %d만큼 MP를 회복했다!\n", myPlayer.name, point);
}
void Item_StatUP(int point) {
	switch (point) {
	case 1:
		myPlayer.attack++;
		printf("%s의 Attack 수치가 1 상승했다!\n", myPlayer.name);
		break;
	case 2:
		myPlayer.wisdom++;
		printf("%s의 Wisdom 수치가 1 상승했다!\n", myPlayer.name);
		break;
	case 3:
		myPlayer.speed++;
		printf("%s의 Speed 수치가 1 상승했다!\n", myPlayer.name);
		break;
	case 4:
		myPlayer.FHP++;
		printf("%s의 FHP 수치가 1 상승했다!\n", myPlayer.name);
		break;
	case 5:
		myPlayer.FMP++;
		printf("%s의 FMP 수치가 1 상승했다!\n", myPlayer.name);
		break;
	default:
		break;
	}
}
int skillfx_6(int index) {
	setcolor(8);
	printf("가장 어두운것은 빛을 좀먹는 불꽃\n");
	Sleep(500);
	printf("어두운 불꽃이여 잠식하는 어둠이 되어 세상을 가릴진저\n나의 이름은 %s\n", mymonster[index].name);
	Sleep(100);
	printf("다크플레임마스터<흑염룡>\t암흑룡 항마창<이는 곧 암흑이 될지니>\n");
	setcolor(15);
	return 1;
}
int skillfx_0(int index) {
	setcolor(9);
	printf("빛나는 것은 천둥을 휘감은 성검\n");
	Sleep(500);
	printf("푸르고 잔인한 천둥이여 적을 관통하라--\n");
	Sleep(1000);
	setcolor(3);
	printf("\t<푸른뇌정>\n");
	setcolor(9);
	printf("\t암드블루\n");
	setcolor(3);
	printf("      <꿰뚫어라 성검이여>\n");
	setcolor(9);
	printf("\t스파크 칼리버\n");
	setcolor(15);
}
int skillfx_1() {
	setcolor(5);
	printf("태양처럼 불타오르는 열의 파도\n");
	Sleep(500);
	printf("격정적으로 작열하며 넘실거리는 맹화\n");
	Sleep(1000);
	printf("연옥의 불꽃에 남은 것은 한 주먹의 재 뿐\n");
	Sleep(1000);
	setcolor(12);
	printf("\t<폭염>\n");
	setcolor(5);
	printf("\t익스플로전\n");
	setcolor(12);
	printf("   <불타오르는 용암의 늪>\n");
	setcolor(5);
	printf("\t선샤인 노바\n");
	setcolor(15);
}
int skillfx_2() {
	setcolor(2);
	printf("남아 있는 빛으로 빛을 내는 검\n");
	Sleep(500);
	printf("종말을 알리는 빛의 반짝임\n");
	Sleep(1000);
	printf("지평을 갈라 무의 세계로 돌려보낸다\n");
	Sleep(1000);
	setcolor(10);
	printf("\t<잔광>\n");
	setcolor(2);
	printf("\t라이트스피드\n");
	setcolor(10);
	printf("   <종언의 광인>\n");
	setcolor(2);
	printf("\t제로블레이드\n");
	setcolor(15);
}
int skillfx_3() {
	setcolor(5);
	printf("규합하는 땅들이 폭팔한다\n");
	Sleep(500);
	printf("모든 것을 원하고 갈망할지니\n");
	Sleep(1000);
	printf("파묻고 뒤집혀라 그 탐욕스러운 팔로\n");
	Sleep(1000);
	setcolor(12);
	printf("\t<지계권>\n");
	setcolor(5);
	printf("\t어스퀘이크\n");
	setcolor(12);
	printf("   <초중자폭성>\n");
	setcolor(5);
	printf("\t퀘이사 붕괴\n");
	setcolor(15);
}
