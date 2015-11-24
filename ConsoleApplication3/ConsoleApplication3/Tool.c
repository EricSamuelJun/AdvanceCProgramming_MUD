#include "my_def.h"
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<stdio.h>

void MainMenu() {
	printf("Hello,World!\n");
}
void BattleSystem(int mindex) {
	int temp[10] = 0;
	/*
	1. Getturn
	2. DoTurn
	3. If(monster[mindex].hp){
	}
	*/
	while (mymonster[mindex].hp || myPlayer.hp) {

	}
	printf("전투에서 승리했다!\n");
	Sleep(400);
	printf("%s는 아이템을 루팅했다!\n", myPlayer.name);
	temp[9] = PlayerItemSort();
	{
		if (RR(0, 2)) {
			mymonster[mindex].itembff[0];
			printf("%s를 얻었다!\n", mymonster[mindex].itembff[0]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[0];
		}
		if (RR(0, 2)) {
			mymonster[mindex].itembff[1];
			printf("%s를 얻었다!\n", mymonster[mindex].itembff[1]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[1];
		}
		if (RR(0, 2)) {
			mymonster[mindex].itembff[2];
			printf("%s를 얻었다!\n", mymonster[mindex].itembff[2]->itemname);
			myPlayer.itembff[temp[9] + 1] = mymonster[mindex].itembff[2];
		}
	}
}
void setcolor(int index) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), index);
}
void nobuff() {
	///////////////////문제점. 버퍼를 모두 비우면 입력을 지가 받는다!
	while (getchar() != '\n');
}
int RR(int min, int max) {
	int temp = 0;
	temp = ((double)rand() / RAND_MAX)*(max - min + 1) + min;
	return (int)temp;
}
Player myPlayer = {
	"주인공",10,10,10,10,5,0,2,2,2,{ NULL },{ NULL }
};
ITEM myitem[20] = {
	//{"이름","설명",가격,회복(혹은 데미지 혹은 인덱스),함수}
	{ "HP 회복","HP를 5만큼 회복시킨다",5,5,&(Item_HPHill) },
	{ "HP 회복Ⅱ","HP를 10 회복시킨다",10,10,&(Item_HPHill) },
	{ "MP 회복","MP를 5 회복시킨다",5,5,&(Item_MPHill) },
	{ "MP 회복Ⅱ","MP를 10 회복시킨다",10,10,&(Item_MPHill) },
	{ "힘의 영약","Attack 스텟을 1 상승시킨다",10,1,&(Item_StatUP) },
	{ "지혜의 영약","Wisdom 스텟을 1 상승시킨다",10,2,&(Item_StatUP) },
	{ "속도의 영약","Speed 스텟을 1 상승시킨다",10,3,&(Item_StatUP) },
	{ "체력의 영약","FHP 스텟을 1 상승시킨다",10,4,&(Item_StatUP) },
	{ "마나의 영약","FMP 스텟을 1 상승시킨다",10,5,&(Item_StatUP) }
};
Skill my_skill[7] = {
	//{"스킬 이름",&(함수),대미지, 마나사용량}
	{ "암드블루/스파크칼리버",&(skillfx_0),4,5 },
	{ "익스플로전/션사인노바",&(skillfx_1),4,5 },
	{ "라이트스피드/제로블레이드",&(skillfx_2),4,5 },
	{ "4",0,0,0 },
	{ "5",0,0,0 },
	{ "6",0,0,0 },
	{ "다크플레임마스터/암흑룡 항마창",&(skillfx_6),4,5 }
};
Monster mymonster[5] = {
	{ "컴소과의염모씨",10,10,10,10,5,500,2,2,2,{ &(my_skill[6]),NULL,NULL,NULL },{ &(myitem[0]),&(myitem[0]),NULL } }
};
int PlayerItemSort() {
	ITEM* temp[20];
	int i = 0,j=0;
	for (i = 0;i>=20; i++) {
		if (!(myPlayer.itembff)) {
			temp[j] = myPlayer.itembff[i];
			j++;
		}
	}
	for (i = 0;temp[i] == NULL; i++) {
		myPlayer.itembff[i] = temp[i];
	}
	return i;
}