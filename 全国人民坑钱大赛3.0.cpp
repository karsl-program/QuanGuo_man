#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
	short jy = 0, hp = 100;
	int d;
	int high = 1;
	bool runing = false;
	long long money = 100;
	string s, moneyformat = "��Ԫ", id;
	cout << "--------------------ȫ�������Ǯ������3.0��--------------------" << endl;
	cout << "���¼��";
	cin >> id;
	if (id=="ZJL"||id=="CXK") {
		money=10000000000;
		high = 50;
		jy = 1000;
	}
	if (id=="ZJL") hp = 10000;
	cout << "\n" << id << "����ã���ӭ����ȫ�������Ǯ����3.0�档\n����ʼ��Ǯ���У�" << money << moneyformat;
	while (s != "j") {
		cout << "����n����Ǯ�ҵ�λ��k�Զ���Ǯ������j��ʼ����" << endl;
		cin >> s;
		if (s == "n" or s == "N") {
			cout << "1.�й� �����" << endl;
			cout << "2.���� ��Ԫ" << endl;
			cout << "3.Ӣ�� Ӣ��" << endl;
			cout << "4.ŷ��ŷԪ�� ŷԪ" << endl;
			cout << "5.�ձ� ��Ԫ" << endl;
			cout << "6.����˹ ¬��" << endl;
			cout << "��ѡ��Ǯ�ҵ�λ��";
			cin >> moneyformat;
			if (moneyformat == "1") {
				moneyformat = "�����";
			} else if (moneyformat == "2") {
				moneyformat = "��Ԫ";
			} else if (moneyformat == "3") {
				moneyformat = "Ӣ��";
			} else if (moneyformat == "4") {
				moneyformat = "ŷԪ";
			} else if (moneyformat == "5") {
				moneyformat = "��Ԫ";
			} else if (moneyformat == "6") {
				moneyformat = "¬��";
			} else {
				cout << "�޴˵�λ";
			}
			cout << "����ѡ��" << moneyformat << "����Ŀǰ��" << money << moneyformat << endl;
		}

		if (s == "k" or s == "K") {
			cout << "�������Զ����Ǯ����";
			cin >> money;
			cout << "��Ŀǰ��" << money << moneyformat << endl;
		}
	}
	runing = true;
	while (runing) {
		if (high<0) { 
			cout<<id<<"���Բ�����ĵȼ��ѱ�ɸ�������ʵ��̫�����Ǯ�ˣ���ǰ��̭���δ���������";
			Sleep(2000);
			exit(0); 
		} else if (money <= 0) {
			cout<<id<<"�� �����ܱ�Ǹ����ûǮ�ˣ���ǰ��̭����ȫ�������Ǯ����������";
			Sleep(2000);
			exit(0);
		}
		cout << endl << "�����ڵȼ���" << high << "��\nǮ����" << money << moneyformat << endl;
		cout << "ѡ��Ҫȥ�ģ�" << endl << "1.��Ʊ����" << endl << "2.���д��ƾ���" << endl << "3.�ӱ��˵�Ǯ" << endl << "4.�̵�"
		     << endl << "0.׼��" << endl;
		cin >> d;
		if (d == 1) {
			int x, y, z, randomx, randomy, randomz;
			int yorn;
			while (1) {
				cout << "�Ƿ����Ʊ��(1/0)";
				scanf("%d", &yorn);
				if (yorn == 1) {
					high += 2;
					cout << "���Ʊ����5Ԫ" << endl;
					money -= 5;
					cout << "����������������������Ϊ��µĿ������루0-10����";
					scanf("%1d%1d%1d", &x, &y, &z);
					randomx = rand() % 10;
					randomy = rand() % 10;
					randomz = rand() % 10;
					cout << endl << "������..." << endl;
					Sleep(3000);
					cout << "�н�����ֱ��ǣ�" << randomx << " " << randomy << " " << randomz << endl;
					if (x == randomx or y == randomx or z == randomx) {
						cout << "������һ�Ƚ����н�800��" << endl;
						money += 8000000;
					} else if (x == randomy or y == randomy or z == randomy) {
						cout << "�����˶��Ƚ����н�500��" << endl;
						money += 5000000;
					} else if (x == randomz or y == randomz or z == randomz) {
						cout << "���������Ƚ����н�1200" << endl;
						money += 1200;
					} else {
						cout << "��û�н���" << endl;
					}
				} else {
					break;
				}
			}
		} else if (d == 2) {
			double money_cishan;
			cout << "��ӭ�������ƻ���ᣬ��ѡ��Ҫ���Ǯ��";
			cin>>money_cishan;
			cout << "\nлл��ľ�������ӭ������(�ȼ�+8)";
			high += 8;
			money -= money_cishan;
		} else if (d == 3) {
			long long s;
			string sl;
			cout << "�Է������������浹ù����Ҫ�����ˣ�˵�ɣ�Ҫ���٣�";
			cin>>s;
			if (s >= (100000 * high)) {
				cout << "�Է�����������Ҫ" << s << moneyformat << "�������ǻ����ˣ�" << endl;
				cout << "�Է������ƿڴ���ȼ�-8" << endl;
				high -= 8;
				Sleep(500);
				cout << "�Է�����ȭ����ߣ��ȼ�-12" << endl;
				high -= 12;
				Sleep(1000);
				cout << "�����ˣ��������⳥5000��";
				high -= 8;
				money -= 50000000;
				cout << "�㱻�ؽ��˼�����������!";
				Sleep(3000);
				exit(0);
			} else if (s <= 10) {
				if (s < 8){
					cout << "·��1�����ÿ�������\n·��2���ǰ��ǰ���\n���̣����ڿ����˿���࣡\n";
					cout << "�Է�������10" << moneyformat << "\n·��1������100��\n·��2������500��" <<
					     endl;
					money += 6000000;
				} else {
					cout << "·��1�����ÿ�������\n·��2���ǰ��ǰ���\n���̣����ڿ����˿���࣡\n";
					cout << "�Է�������10" << moneyformat << "\n·��1������100��\n·��2������500��\n·��3������300��\n���̸�����ܶ�ܶ��money������" <<
					     endl;
					high += 1;
					money += 10;
					money += 6000000;
					money += (100000000 * high);
				}
			} else {
				cout << "\n���㣬�߿���(�ȼ�-10)" << endl;
				high -= 10;
				money += s;
			}
		} else if (d == 4) {
			int a;
			cout << "��ӭ�����̵꣡" << endl << "1.�ȼ�+1 50" << moneyformat << "      " << "2.�ȼ�+50 3000" << moneyformat <<
			     "      " << "3.�ȼ�+1000 5000��" << moneyformat << endl;
			cout<<"�ȼ������Ż�Ŷ������"<<endl;
			cout<<"��ĵȼ��ǣ�"<<high<<" �����Ż�"<<high*high<<moneyformat<<endl;
			cout<<"�����Ǯ������ί��֪ͨ���ȼ�̫�߸�ԭ��"<<endl;
			cin>>a;
			if (a == 1) {
				if (high*high>=50) {
					money -= 50;
				} else {
					money -= 50;
					money += high * high;
				}
				high += 1;
				cout << "����ɹ���" << endl;
			} else if (a == 2) {
				if (high*high>=3000) {
					money -= 3000;
				} else {
					money -= 3000;
					money += high * high;
				}
				money -= 3000;
				high += 50;
				cout << "����ɹ���" << endl;
			} else if (a == 3) {
				if (high*high>=50000000) {
					money -= 50000000;
				} else {
					money -= 50000000;
					money += high * high;
				}
				high += 1000;
				cout << "����ɹ���" << endl;
			}
		} else {
			cout<<"3..."<<endl;
			Sleep(1500);
			cout<<"2..."<<endl;
			Sleep(1500);
			cout<<"1..."<<endl;
			Sleep(1800);
			cout<<"0............׼��������"<<endl<<endl;
			Sleep(2000); 
			runing = false;
		}
	}
	
	short jie = 100, kaix = 80; 
	bool running = true;
	cout<<"1/6   �ؿ�"<<endl;
	cout<<"��һ�أ�ɭ�֣��������Ҫ��300��"<<endl<<"������飺�����кܶ���Դ��������Ҫ����һ��ԭʼ�ˣ�Ҳ�кܶ�Ұ�ޡ�С�ģ�����"<<endl;
	bool caob = true, putj = false, gaoj = false, wudi = false, huoj = false, huoju = false, bingj = false, citys = false;
	if (id=="ZJL") {
		putj = true, gaoj = true, wudi = true, huoj = true, huoju = true, bingj = true, citys = true;
	}
	string nstr = "�ݰ�";
	short shiyong = 1;
	short fghp = 15;
	short ss = 5;
	while (running) {
		if (hp<=0 || jy<0 || high<0 || money<0 || kaix<0 || jie<=0) {
			cout<<"�����ˣ�ɶ�����ǣ�����";
			Sleep(5000); 
			exit(0);
		}
		if (kaix>100) kaix=100;
		if (jie>100) jie=100;
		if (hp>100&&id!="ZJL") hp=100;
		cout<<endl<<"Ѫ����"<<hp<<"     "<<"����ֵ��"<<jy<<endl<<"�ȼ���"<<high<<"     "<<"Ǯ�ƣ�"<<money<<moneyformat<<endl<<"�����̶ȣ�"<<100-jie<<"%     "<<"���ĳ̶ȣ�"<<kaix<<"%"<<endl;
		cout<<"Ŀǰ�ֳ�������"<<nstr<<endl;
		cout<<"\n����Ѫ����"<<fghp<<endl<<endl;
		cout<<"0.������"<<endl;
		cout<<"1.ȥ�̵�"<<endl;
		cout<<"2.ս��"<<endl;
		cout<<"3.ԭ����Ϣ"<<endl;
		cout<<"4.��һ��"<<endl;
		cout<<"5.ͼ��"<<endl;
		cout<<"ѡ��";
		short iocin, kai; 
		cin>>iocin;
		if (iocin == 4) {
			if (jy < 300) {
				cout<<"����������һ�أ����鲻��������"<<300-jy<<"����"<<endl; 
			} else {
				running = false; 
			}
		} else if (iocin == 0) {
			cout<<"��Ŀǰӵ�У�"<<endl;
			cout<<(caob == true ? "1.�ݰ�," : "");
			cout<<(putj == true ? "2.��ͨ��," : "");
			cout<<(gaoj == true ? "3.�߼���," : "");
			cout<<(wudi == true ? "4.�޵�һ�غϼ���" : "");
			cout<<(huoj == true ? "5.��," : "");
			cout<<(huoju == true ? "6.���," : "");
			cout<<(bingj == true ? "7.����," : "");
			cout<<(citys == true ? "���أ�������ʿ" : "");
			cout<<endl<<endl<<"��Ҫ��ʲô��";
			cin>>kai;
			if (kai == 1&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "�ݰ�";
				shiyong = 1;
				fghp = 15;
				ss = 5;
			} else if (kai == 1&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 2&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "��ͨ��";
				shiyong = 2;
				fghp = 50;
				ss = 15;
			} else if (kai == 2&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 3&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "�߼���";
				shiyong = 3;
				fghp = 50;
				ss = 30;
			} else if (kai == 3&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 4&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "�޵�һ�غϼ���";
				shiyong = 4;
				ss = 9999;
			} else if (kai == 4&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 5&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "��";
				shiyong = 5;
				fghp = 75;
				ss = 25;
			} else if (kai == 5&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 6&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "���";
				shiyong = 6;
				fghp = 20;
				ss = 5;
			} else if (kai == 6&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else if (kai == 7&&caob == true) {
				cout<<"�����ɹ���"<<endl;
				nstr = "����";
				shiyong = 7;
				fghp = 75;
				ss = 30;
			} else if (kai == 7&&caob == false) {
				cout<<"����ʧ�ܣ��㲢û�������⣡����"<<endl;
			} else {
				cout<<"����û�����⣡����"<<endl;
			}
		} else if (iocin == 1) {
			string sio;
			cout<<"����ɶ�����鼮���ȼ���ʳ�������";
			cin>>sio;
			if (sio == "�鼮"){
				cout<<"\n����ɶ�飿\n1.���ֲ��Ĵ󳦸˾���������ֵ+30��150��Ԫ��     2.�����е�֪ʶ��������ֵ+30��180��Ԫ��     3.�����ĳ�����ۡ�������ֵ+250��500��Ԫ�����Ƽ��ض���\n";
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
					cout<<"���250";
				}
				kaix-=10;
				jie-=5;
				cout<<endl;
			} else if (sio == "�ȼ�"){
				cout<<"50Ԫ/��"<<endl;
				int numsum, cntt;
				cin>>numsum;
				cntt = floor(numsum/50);
				cout<<"�㹺����"<<cntt<<"��";
				high+=cntt;
				money-=numsum;
				cout<<endl;
			} else if (sio == "ʳ��") {
				cout<<"1. 500Ԫ/���     2. 800Ԫ/�߼�Ұ��     3. 1200Ԫ/Ҭ֭������";
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
			} else if (sio == "����") {
				cout<<"1.�ݰ�,2.��ͨ��,3.�߼���,4.�޵�һ�غϼ���,5.��,6.���,7.����";
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
			cout<<"ͼ��"<<endl;
			cout<<"�ݰѣ�caob����\n�˺���5     ����Ѫ����15     ���㣺���壨��     ���ڣ���Ȼ��\n\n";
			cout<<"��ͨ����putj����\n�˺���15     ����Ѫ����50     ���㣺���壨�ţ�     ���ڣ�������\n\n";
			cout<<"�߼�����gaoj����\n�˺���30     ����Ѫ����50     ���㣺���壨�ţ�     ���ڣ�������\n\n";
			cout<<"�𽣣�huoj����\n�˺���25     ����Ѫ����75     ���㣺���壨����     ���ڣ���Ȼ��\n\n";
			cout<<"��棨huoju����\n�˺���5     ����Ѫ����20     ���㣺�����壨������     ���ڣ�����\n\n";
			cout<<"������bingj����\n�˺���30     ����Ѫ����75     ���㣺���壨��     ���ڣ�����\n\n";
			cout<<"�����������ٻ�������ʿ��citys����\n�˺���15     ����Ѫ����80     ���㣺�޵�     ���ڣ�����\n\n";
			cout<<"\nע�����������������������ӳ�25%��\n";
			cout<<endl; 
		} else if (iocin == 2) {
			int i = 0;
			bool keyong = false;
			short cinflag;
			int dihp = 30; 
			while(i<1){
				cout<<"��ǰ�ǵ�1���غϡ�"<<endl; 
				short wudinum = 0;
				if (shiyong == 4) {
					keyong = true;
				}
				cout<<"��Ŀǰ����������"<<nstr<<endl<<"�������ؿ��ǣ��ڱ��λغ���ʹ�ø����������𣿣�1/0��";
				char ynkl;
				cin>>ynkl;
				if (ynkl == '0') break;
				cout<<"ͻȻһֻ���������������������ɱ��ֻ���ӣ�������͡�"<<endl;
				Sleep(800);
				cout<<"1.ʹ�������˺�\n2.������\n";
				cin>>cinflag;
				if (cinflag == 1) {
					if (shiyong == 4&&keyong) {
						cout<<"ʹ���޵У��������ˡ�����"<<endl;
						wudinum++;
					} else {
						for (;dihp>0;fghp-=5){ 
							cout<<"����hp-"<<ss<<"������hp-5"<<endl;
							dihp-=ss;
							if (fghp<=0) {
								cout<<"����������ˣ���ϯ������";
								exit(0);
							}
							Sleep(800);
						} 
						cout<<"����ɱ�������ӣ�����+5���ȼ�+3��Ǯ��-30������+15������-20\n";
						jy+=5;
						high+=3;
						money-=30;
						kaix+=15;
						jie+=20;
					}
				} else { 
					cout<<"����ɱ�������ӣ�����+10���ȼ�+1��Ǯ��+50������+8������-20\n";
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

