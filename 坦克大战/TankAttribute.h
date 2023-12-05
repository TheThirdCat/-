#pragma once
#include"reference.h"
class TankAttribute
{
private:
	double attack;//������
	double defend;//������
	uint health;//Ѫ��
	double speed;//�ٶ�
	uint level;//�ȼ�
public:
	/// <summary>
	/// ��Ĭ�ϲ�������̹��
	/// </summary>
	/// <param name="attack">������Ĭ��10</param>
	/// <param name="defend">������Ĭ��0</param>
	/// <param name="health">Ѫ��Ĭ��50</param>
	/// <param name="speed">�ٶ�Ĭ��5</param>
	/// <param name="level">�ȼ�Ĭ��1</param>
	TankAttribute(int attack=10,double defend=0,uint health=50,double speed=5,uint level=1);
	/// <summary>
	/// ̹��������������������
	/// </summary>
	/// <param name="multi">̹�˵���������</param>
	/// <returns></returns>
	int levelup(double multi=1);
	/// <summary>
	/// �ƶ�
	/// </summary>
	void move();
};

