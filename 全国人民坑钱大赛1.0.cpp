#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
	int d;
	int high = 1;
	bool runing = false;
	long long money = 100;
	string s, moneyformat = "��Ԫ", id;
	cout << "--------------------ȫ�������Ǯ������1.0��--------------------" << endl;
	cout << "���¼��";
	cin >> id;
	cout << "\n" << id << "����ã���ӭ����ȫ�������Ǯ����1.0�档\n����ʼ��Ǯ���У�" << money << moneyformat;
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
		cout << endl << "�����ڵȼ���" << high << "��\nǮ����" << money << moneyformat << endl;
		cout << "ѡ��Ҫȥ�ģ�" << endl << "1.��Ʊ����" << endl << "2.���д��ƾ���" << endl << "3.�ӱ��˵�Ǯ" << endl << "4.�̵�"
		     << endl << "0.�ؼ�" << endl;
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
			int money_cishan;
			cout << "��ӭ�������ƻ���ᣬ��ѡ��Ҫ���Ǯ��";
			scanf("%ld", &money_cishan);
			cout << "\nлл��ľ�������ӭ������(�ȼ�+8)";
			high += 8;
			money -= money_cishan;
		} else if (d == 3) {
			long long s;
			string sl;
			cout << "�Է������������浹ù����Ҫ�����ˣ�˵�ɣ�Ҫ���٣�";
			cin>>s;
			if (s >= 1000000) {
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
				runing = false;
			} else if (s <= 10) {
				cout << "·��1�����ÿ�������\n·��2���ǰ��ǰ���\n���̣����ڿ����˿���࣡\n";
				cout << "�Է�������10" << moneyformat << "\n·��1������100��\n·��2������500��\n·��3������300��\n���̸�����2��" <<
				     endl;
				high += 1;
				money += 10;
				money += 6000000;
				money += 200000000;
			} else {
				cout << "\n���㣬�߿���(�ȼ�-10)" << endl;
				high -= 10;
				money += s;
			}
		} else if (d == 4) {
			int a;
			cout << "��ӭ�����̵꣡" << endl << "1.�ȼ�+1 50" << moneyformat << "      " << "2.�ȼ�+50 3000" << moneyformat <<
			     "      " << "3.�ȼ�+1000 5000��" << moneyformat << endl;
			scanf("%d", &a);
			if (a == 1) {
				money -= 50;
				high += 1;
				cout << "����ɹ���" << endl;
			} else if (a == 2) {
				money -= 3000;
				high += 50;
				cout << "����ɹ���" << endl;
			} else if (a == 3) {
				money -= 50000000;
				high += 1000;
				cout << "����ɹ���" << endl;
			}
		} else {
			string u;
			cout << id << "���㻹ʣ��" << money << moneyformat << "��Բ��������˱���ȫ�������Ǯ��������ӭ�´�������";
			cout << "\n��������˳���Ϸ...";
			cin >> u;
			runing = false;
		}
	}

	return 0;
}

