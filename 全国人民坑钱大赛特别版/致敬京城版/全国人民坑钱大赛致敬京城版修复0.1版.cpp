#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
	short jy = 0, hp = 100;
	int d;
	int high = 1;
	bool runing = false;
	long long money = 100;
	long long miyao = 0;
	string s, moneyformat = "京元", id, sid;
	cout << "----------------全国人民坑钱大赛特别版之致敬京城版----------------" << endl;
	cout<<endl<<"***************************help(帮助)***************************"<<endl;
	cout<<"此版本为京城共和国2023官方赞助！";
	cout<<endl;
	cout<<"请输入你的SID号码：";
	cin>>sid;
	cout<<"Hello! 你好啊！\n"; 
	if (sid == "HCY20230011") cout<<"名字：HCY\n性别：男"<<endl; 
	else if (sid == "ZJL20230012") cout<<"名字：ZJL(开发者)\n性别：男"<<endl; 
	else if (sid == "CJR20230013") cout<<"名字：CJR\n性别：男"<<endl; 
	else if (sid == "DZR20230014") cout<<"名字：DZR\n性别：男"<<endl; 
	else if (sid == "HES20230015") cout<<"名字：HES\n性别：男"<<endl; 
	else if (sid == "HLQ20230016") cout<<"名字：HLQ\n性别：男"<<endl; 
	else if (sid == "ZSZ20230017") cout<<"名字：ZSZ\n性别：男"<<endl; 
	else if (sid == "CZY20230018") cout<<"名字：CZY\n性别：男"<<endl;
	else if (sid == "YHD20230019") cout<<"名字：YHD\n性别：男"<<endl; 
	else if (sid == "CBT20230030") cout<<"名字：CBT(主角：草履虫)\n性别：男"<<endl;
	else {
		cout<<"你竟然不是京城人！！！给我gun！";
		exit(0);
	}
	cout<<endl;
	cout << "请设置你的ID：";
	cin >> id;
	cout << "\n" << id << "，你好！欢迎进入全国人民坑钱大赛特别版之致敬京城版。\n您初始的钱数有：" << money << moneyformat;
	while (s != "a" && s != "A") {
		cout << "（按a(A)开始）：" << endl;
		cin >> s;
	}
	runing = true;
	while (runing) {
		if (high<0) { 
			cout<<id<<"，对不起，你的等级已变成负数，你实在太不会坑钱了，提前淘汰本次大赛！！！";
			Sleep(2000);
			exit(0); 
		} else if (money <= 0) {
			cout<<id<<"，不，很抱歉，你没钱了，提前淘汰本次全国人民坑钱大赛！！！";
			Sleep(2000);
			exit(0);
		}
		cout << endl << "你现在等级是" << high << "级\n钱数：" << money << moneyformat << endl;
		cout << "选择要去哪？" << endl << "1.彩票中心" << endl << "2.银行慈善捐献" << endl << "3.坑别人的钱" << endl << "4.商店"
		     << endl << "0.准备" << endl;
		cin >> d;
		if (d == 1) {
			int x, y, z, randomx, randomy, randomz;
			int yorn;
			while (1) {
				cout << "是否买彩票？(1/0)";
				scanf("%d", &yorn);
				if (yorn == 1) {
					high += 2;
					srand(time(NULL));
					cout << "买彩票花费5元" << endl;
					money -= 5;
					cout << "开奖，请输入三个数字作为你猜的开奖号码（0-10）：";
					scanf("%1d%1d%1d", &x, &y, &z);
					randomx = rand() % 10;
					randomy = rand() % 10;
					randomz = rand() % 10;
					cout << endl << "开奖中..." << endl;
					Sleep(3000);
					cout << "中奖号码分别是：" << randomx << " " << randomy << " " << randomz << endl;
					if (x == randomx or y == randomx or z == randomx) {
						cout << "你中了一等奖，中奖800万" << endl;
						money += 8000000;
					} else if (x == randomy or y == randomy or z == randomy) {
						cout << "你中了二等奖，中奖500万" << endl;
						money += 5000000;
					} else if (x == randomz or y == randomz or z == randomz) {
						cout << "你中了三等奖，中奖1200" << endl;
						money += 1200;
					} else {
						cout << "你没中奖！" << endl;
					}
				} else {
					break;
				}
			}
		} else if (d == 2) {
			double money_cishan;
			cout << "欢迎来到慈善基金会，请选择要捐的京币：";
			cin>>money_cishan;
			cout << "\n谢谢你的捐助，欢迎再来！(等级+8)";
			high += 8;
			money -= money_cishan;
		} else if (d == 3) {
			long long s;
			string sl;
			cout << "对方：哎，今天真倒霉，又要被坑了，说吧，要多少？";
			cin>>s;
			if (s >= (100000 * high)) {
				cout << "对方：滚！还想要" << s << moneyformat << "？看你是活腻了！" << endl;
				cout << "对方对你破口大骂，等级-8" << endl;
				high -= 8;
				Sleep(500);
				cout << "对方对你拳打脚踢，等级-12" << endl;
				high -= 12;
				Sleep(1000);
				cout << "你输了！你最终赔偿5000万。";
				high -= 8;
				money -= 50000000;
				cout << "你被关进了监狱，你输了!";
				Sleep(3000);
				exit(0);
			} else if (s <= 10) {
				if (s < 8){
					cout << "路人1：他好可怜啊！\n路人2：是啊是啊！\n富翁：现在可怜人可真多！\n";
					cout << "对方给了你10" << moneyformat << "\n路人1给了你100万\n路人2给了你500万" <<
					     endl;
					money += 6000000;
				} else {
					cout << "路人1：他好可怜啊！\n路人2：是啊是啊！\n富翁：现在可怜人可真多！\n";
					cout << "对方给了你10" << moneyformat << "\n路人1给了你100万\n路人2给了你500万\n路人3给了你300万\n富翁给了你很多很多的money！！！" <<
					     endl;
					high += 1;
					money += 10;
					money += 6000000;
					money += (100000000 * high);
				}
			} else {
				cout << "\n给你，走开！(等级-10)" << endl;
				high -= 10;
				money += s;
			}
		} else if (d == 4) {
			int a;
			cout << "欢迎来到商店！" << endl << "1.等级+1 50" << moneyformat << "      " << "2.等级+50 3000" << moneyformat <<
			     "      " << "3.等级+1000 5000万" << moneyformat << endl;
			cout<<"等级多有优惠哦！！！"<<endl;
			cout<<"你的等级是："<<high<<" 可以优惠"<<high*high<<moneyformat<<endl;
			cout<<"最近坑钱大赛组委会通知：等级太高付原价"<<endl;
			cin>>a;
			if (a == 1) {
				if (high*high>=50) {
					money -= 50;
				} else {
					money -= 50;
					money += high * high;
				}
				high += 1;
				cout << "购买成功！" << endl;
			} else if (a == 2) {
				if (high*high>=3000) {
					money -= 3000;
				} else {
					money -= 3000;
					money += high * high;
				}
				money -= 3000;
				high += 50;
				cout << "购买成功！" << endl;
			} else if (a == 3) {
				if (high*high>=50000000) {
					money -= 50000000;
				} else {
					money -= 50000000;
					money += high * high;
				}
				high += 1000;
				cout << "购买成功！" << endl;
			}
		} else {
			cout << "你来到了草履虫老家，成功完成这次大赛，并斩杀草履虫！！！为他献上诚挚的祝福，默哀-3分钟！";
			Sleep(5000); 
			runing = false;
		}
	}
	return 0;
}

