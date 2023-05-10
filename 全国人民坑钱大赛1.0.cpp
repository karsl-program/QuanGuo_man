#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
	int d;
	int high = 1;
	bool runing = false;
	long long money = 100;
	string s, moneyformat = "美元", id;
	cout << "--------------------全国人民坑钱大赛（1.0）--------------------" << endl;
	cout << "请登录：";
	cin >> id;
	cout << "\n" << id << "，你好！欢迎进入全国人民坑钱大赛1.0版。\n您初始的钱数有：" << money << moneyformat;
	while (s != "j") {
		cout << "（按n更换钱币单位，k自定义钱数，按j开始）：" << endl;

		cin >> s;
		if (s == "n" or s == "N") {
			cout << "1.中国 人民币" << endl;
			cout << "2.美国 美元" << endl;
			cout << "3.英国 英镑" << endl;
			cout << "4.欧洲欧元区 欧元" << endl;
			cout << "5.日本 日元" << endl;
			cout << "6.俄罗斯 卢布" << endl;
			cout << "请选择钱币单位：";
			cin >> moneyformat;
			if (moneyformat == "1") {
				moneyformat = "人民币";
			} else if (moneyformat == "2") {
				moneyformat = "美元";
			} else if (moneyformat == "3") {
				moneyformat = "英镑";
			} else if (moneyformat == "4") {
				moneyformat = "欧元";
			} else if (moneyformat == "5") {
				moneyformat = "日元";
			} else if (moneyformat == "6") {
				moneyformat = "卢布";
			} else {
				cout << "无此单位";
			}
			cout << "你已选择" << moneyformat << "，你目前有" << money << moneyformat << endl;
		}

		if (s == "k" or s == "K") {
			cout << "请输入自定义的钱数：";
			cin >> money;
			cout << "你目前有" << money << moneyformat << endl;
		}
	}
	runing = true;
	while (runing) {
		cout << endl << "你现在等级是" << high << "级\n钱数：" << money << moneyformat << endl;
		cout << "选择要去哪？" << endl << "1.彩票中心" << endl << "2.银行慈善捐献" << endl << "3.坑别人的钱" << endl << "4.商店"
		     << endl << "0.回家" << endl;
		cin >> d;
		if (d == 1) {
			int x, y, z, randomx, randomy, randomz;
			int yorn;
			while (1) {
				cout << "是否买彩票？(1/0)";
				scanf("%d", &yorn);
				if (yorn == 1) {
					high += 2;
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
			int money_cishan;
			cout << "欢迎来到慈善基金会，请选择要捐的钱：";
			scanf("%ld", &money_cishan);
			cout << "\n谢谢你的捐助，欢迎再来！(等级+8)";
			high += 8;
			money -= money_cishan;
		} else if (d == 3) {
			long long s;
			string sl;
			cout << "对方：哎，今天真倒霉，又要被坑了，说吧，要多少？";
			cin>>s;
			if (s >= 1000000) {
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
				runing = false;
			} else if (s <= 10) {
				cout << "路人1：他好可怜啊！\n路人2：是啊是啊！\n富翁：现在可怜人可真多！\n";
				cout << "对方给了你10" << moneyformat << "\n路人1给了你100万\n路人2给了你500万\n路人3给了你300万\n富翁给了你2亿" <<
				     endl;
				high += 1;
				money += 10;
				money += 6000000;
				money += 200000000;
			} else {
				cout << "\n给你，走开！(等级-10)" << endl;
				high -= 10;
				money += s;
			}
		} else if (d == 4) {
			int a;
			cout << "欢迎来到商店！" << endl << "1.等级+1 50" << moneyformat << "      " << "2.等级+50 3000" << moneyformat <<
			     "      " << "3.等级+1000 5000万" << moneyformat << endl;
			scanf("%d", &a);
			if (a == 1) {
				money -= 50;
				high += 1;
				cout << "购买成功！" << endl;
			} else if (a == 2) {
				money -= 3000;
				high += 50;
				cout << "购买成功！" << endl;
			} else if (a == 3) {
				money -= 50000000;
				high += 1000;
				cout << "购买成功！" << endl;
			}
		} else {
			string u;
			cout << id << "，你还剩下" << money << moneyformat << "，圆满地完成了本次全国人民坑钱大赛，欢迎下次再来！";
			cout << "\n按任意键退出游戏...";
			cin >> u;
			runing = false;
		}
	}

	return 0;
}

