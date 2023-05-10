#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
	short jy = 0, hp = 100;
	int d;
	int high = 1;
	bool runing = false;
	long long money = 100;
	string s, moneyformat = "美元", id;
	cout << "--------------------全国人民坑钱大赛（3.0）--------------------" << endl;
	cout << "请登录：";
	cin >> id;
	if (id=="ZJL"||id=="CXK") {
		money=10000000000;
		high = 50;
		jy = 1000;
	}
	if (id=="ZJL") hp = 10000;
	cout << "\n" << id << "，你好！欢迎进入全国人民坑钱大赛3.0版。\n您初始的钱数有：" << money << moneyformat;
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
		if (high<0) { 
			cout<<id<<"，对不起，你的等级已变成负数，你实在太不会坑钱了，提前淘汰本次大赛！！！";
			Sleep(2000);
			exit(0); 
		} else if (money <= 0) {
			cout<<id<<"， 不，很抱歉，你没钱了，提前淘汰本次全国人民坑钱大赛！！！";
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
			cout << "欢迎来到慈善基金会，请选择要捐的钱：";
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
			cout<<"3..."<<endl;
			Sleep(1500);
			cout<<"2..."<<endl;
			Sleep(1500);
			cout<<"1..."<<endl;
			Sleep(1800);
			cout<<"0............准备！！！"<<endl<<endl;
			Sleep(2000); 
			runing = false;
		}
	}
	
	short jie = 100, kaix = 80; 
	bool running = true;
	cout<<"1/6   关卡"<<endl;
	cout<<"第一关：森林（经验最低要求：300）"<<endl<<"场景简介：这里有很多资源，但是你要扮演一个原始人，也有很多野兽。小心！！！"<<endl;
	bool caob = true, putj = false, gaoj = false, wudi = false, huoj = false, huoju = false, bingj = false, citys = false;
	if (id=="ZJL") {
		putj = true, gaoj = true, wudi = true, huoj = true, huoju = true, bingj = true, citys = true;
	}
	string nstr = "草把";
	short shiyong = 1;
	short fghp = 15;
	short ss = 5;
	while (running) {
		if (hp<=0 || jy<0 || high<0 || money<0 || kaix<0 || jie<=0) {
			cout<<"你输了，啥都不是！！！";
			Sleep(5000); 
			exit(0);
		}
		if (kaix>100) kaix=100;
		if (jie>100) jie=100;
		if (hp>100&&id!="ZJL") hp=100;
		cout<<endl<<"血量："<<hp<<"     "<<"经验值："<<jy<<endl<<"等级："<<high<<"     "<<"钱财："<<money<<moneyformat<<endl<<"饥饿程度："<<100-jie<<"%     "<<"开心程度："<<kaix<<"%"<<endl;
		cout<<"目前手持武器："<<nstr<<endl;
		cout<<"\n武器血量："<<fghp<<endl<<endl;
		cout<<"0.换武器"<<endl;
		cout<<"1.去商店"<<endl;
		cout<<"2.战斗"<<endl;
		cout<<"3.原地休息"<<endl;
		cout<<"4.下一关"<<endl;
		cout<<"5.图鉴"<<endl;
		cout<<"选择：";
		short iocin, kai; 
		cin>>iocin;
		if (iocin == 4) {
			if (jy < 300) {
				cout<<"滚！别想下一关，经验不够。还差"<<300-jy<<"经验"<<endl; 
			} else {
				running = false; 
			}
		} else if (iocin == 0) {
			cout<<"你目前拥有："<<endl;
			cout<<(caob == true ? "1.草把," : "");
			cout<<(putj == true ? "2.普通剑," : "");
			cout<<(gaoj == true ? "3.高级剑," : "");
			cout<<(wudi == true ? "4.无敌一回合技能" : "");
			cout<<(huoj == true ? "5.火剑," : "");
			cout<<(huoju == true ? "6.火炬," : "");
			cout<<(bingj == true ? "7.冰剑," : "");
			cout<<(citys == true ? "隐藏：磁铁勇士" : "");
			cout<<endl<<endl<<"你要换什么？";
			cin>>kai;
			if (kai == 1&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "草把";
				shiyong = 1;
				fghp = 15;
				ss = 5;
			} else if (kai == 1&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 2&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "普通剑";
				shiyong = 2;
				fghp = 50;
				ss = 15;
			} else if (kai == 2&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 3&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "高级剑";
				shiyong = 3;
				fghp = 50;
				ss = 30;
			} else if (kai == 3&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 4&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "无敌一回合技能";
				shiyong = 4;
				ss = 9999;
			} else if (kai == 4&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 5&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "火剑";
				shiyong = 5;
				fghp = 75;
				ss = 25;
			} else if (kai == 5&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 6&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "火炬";
				shiyong = 6;
				fghp = 20;
				ss = 5;
			} else if (kai == 6&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else if (kai == 7&&caob == true) {
				cout<<"更换成功！"<<endl;
				nstr = "冰剑";
				shiyong = 7;
				fghp = 75;
				ss = 30;
			} else if (kai == 7&&caob == false) {
				cout<<"更换失败！你并没有这玩意！！！"<<endl;
			} else {
				cout<<"根本没这玩意！！！"<<endl;
			}
		} else if (iocin == 1) {
			string sio;
			cout<<"购买啥？（书籍、等级、食物、武器）";
			cin>>sio;
			if (sio == "书籍"){
				cout<<"\n购买啥书？\n1.《恐怖的大肠杆菌》（经验值+30，150万元）     2.《旅行的知识》（经验值+30，180万元）     3.《草履虫进化论》（经验值+250，500万元）（推荐必读）\n";
				cin>>sio;
				if (sio == "1") {
					jy+=30;
					money-=1500000;
				} else if (sio == "2") {
					jy+=30;
					money-=1800000;
				} else {
					jy+=250;
					money-=5000000;
					kaix-=20;
					cout<<"你个250";
				}
				kaix-=10;
				jie-=5;
				cout<<endl;
			} else if (sio == "等级"){
				cout<<"50元/等"<<endl;
				int numsum, cntt;
				cin>>numsum;
				cntt = floor(numsum/50);
				cout<<"你购买了"<<cntt<<"等";
				high+=cntt;
				money-=numsum;
				cout<<endl;
			} else if (sio == "食物") {
				cout<<"1. 500元/面包     2. 800元/高级野果     3. 1200元/椰汁（果）";
				short nnumt;
				cin>>nnumt;
				if (nnumt==1) {
					kaix+=20;
					high+=1;
					jie+=5;
					money-=500;
				} else if (nnumt==2) {
					kaix+=10;
					high+=3;
					jie+=12;
					money-=800;
				} else if (nnumt==3) {
					kaix+=20;
					high+=5;
					jie+=25;
					money-=1200;
				}
				cout<<endl;
			} else if (sio == "武器") {
				cout<<"1.草把,2.普通剑,3.高级剑,4.无敌一回合技能,5.火剑,6.火炬,7.冰剑";
				short jio;
				cin>>jio;
				if(jio==1) caob=true;
				if(jio==2) putj=true;
				if(jio==3) gaoj=true;
				if(jio==4) wudi=true;
				if(jio==5) huoj=true;
				if(jio==6) huoju=true;
				if(jio==7) bingj=true;
				money-=15000;
			} 
		} else if (iocin == 3) {
			hp+=20;
			kaix+=20;
			jie-=5;
			jy+=5;
			high+=1;
			money-=100;
		} else if (iocin == 5) {
			cout<<"图鉴"<<endl;
			cout<<"草把（caob）：\n伤害：5     防具血量：15     弱点：火族（火）     属于：自然族\n\n";
			cout<<"普通剑（putj）：\n伤害：15     防具血量：50     弱点：磁族（磁）     属于：金属族\n\n";
			cout<<"高级剑（gaoj）：\n伤害：30     防具血量：50     弱点：磁族（磁）     属于：金属族\n\n";
			cout<<"火剑（huoj）：\n伤害：25     防具血量：75     弱点：冰族（冰）     属于：自然族\n\n";
			cout<<"火炬（huoju）：\n伤害：5     防具血量：20     弱点：金属族（金属）     属于：火族\n\n";
			cout<<"冰剑（bingj）：\n伤害：30     防具血量：75     弱点：火族（火）     属于：冰族\n\n";
			cout<<"隐藏武器：召唤磁铁勇士（citys）：\n伤害：15     防具血量：80     弱点：无敌     属于：磁族\n\n";
			cout<<"\n注：用弱点武器攻击，攻击加成25%。\n";
			cout<<endl; 
		} else if (iocin == 2) {
			int i = 0;
			bool keyong = false;
			short cinflag;
			int dihp = 30; 
			while(i<1){
				cout<<"当前是第1个回合。"<<endl; 
				short wudinum = 0;
				if (shiyong == 4) {
					keyong = true;
				}
				cout<<"你目前持有武器："<<nstr<<endl<<"请你慎重考虑，在本次回合中使用该武器过关吗？（1/0）";
				char ynkl;
				cin>>ynkl;
				if (ynkl == '0') break;
				cout<<"突然一只兔子跑来，你的任务是猎杀这只兔子，当做晚餐。"<<endl;
				Sleep(800);
				cout<<"1.使用武器伤害\n2.近身攻击\n";
				cin>>cinflag;
				if (cinflag == 1) {
					if (shiyong == 4&&keyong) {
						cout<<"使用无敌，兔子无了。。。"<<endl;
						wudinum++;
					} else {
						for (;dihp>0;fghp-=5){ 
							cout<<"兔子hp-"<<ss<<"，防具hp-5"<<endl;
							dihp-=ss;
							if (fghp<=0) {
								cout<<"你的武器崩了，吃席！！！";
								exit(0);
							}
							Sleep(800);
						} 
						cout<<"你猎杀到了兔子，经验+5，等级+3，钱财-30，开心+15，饥饿-20\n";
						jy+=5;
						high+=3;
						money-=30;
						kaix+=15;
						jie+=20;
					}
				} else { 
					cout<<"你猎杀到了兔子，经验+10，等级+1，钱财+50，开心+8，饥饿-20\n";
					jy+=10;
					high++;
					money+=50;
					kaix+=8;
					jie+=20;
					hp-=20;
				}
				
				i++;
			}
		}
	}
		

	return 0;
}

