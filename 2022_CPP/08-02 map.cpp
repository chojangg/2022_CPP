#include <iostream>
#include <string>
#include <map>

using namespace std;

// �쿵��: ������
// ����: ���⿵
// �ǹμ�: ������
// ����ȣ: ���¿�

int main(void)
{
	map<string, string> IBW;	// IBW: �̻��� ��ȣ�� �쿵��
	IBW.insert(pair<string, string>("�쿵��", "������"));
	IBW.insert(pair<string, string>("����", "���⿵"));
	IBW.insert(pair<string, string>("�ǹο�", "������"));
	IBW.insert(pair<string, string>("����ȣ", "���¿�"));

	// vector�� ��� ���� ���(�ݺ���)
	for (auto& iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "�� " << iter->second << "��" << endl;

	cout << "����� ���ΰ��� " << IBW["�쿵��"]<< endl;;

}