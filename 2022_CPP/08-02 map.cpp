#include <iostream>
#include <string>
#include <map>

using namespace std;

// �쿵��: ������
// ����: ���⿵
// �ǹμ�: ������
// ����ȣ: ���¿�

void main(void)
{
    map<string, string> IBW;   //IBW : �̻��� ��ȣ�� �쿵��
    IBW["�쿵��"] = "������";
    IBW["����"] = "���⿵";
    IBW["�ǹο�"] = "������";
    IBW["����ȣ"] = "���¿�";


    for (auto& iter : IBW) {
        cout << iter.first << "�� " << iter.second << "��" << endl;
    }

    cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;
}