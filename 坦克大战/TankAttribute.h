#pragma once
#include"reference.h"
class TankAttribute
{
private:
	double attack;//攻击力
	double defend;//防御力
	uint health;//血量
	double speed;//速度
	uint level;//等级
public:
	/// <summary>
	/// 以默认参数构造坦克
	/// </summary>
	/// <param name="attack">攻击力默认10</param>
	/// <param name="defend">防御力默认0</param>
	/// <param name="health">血量默认50</param>
	/// <param name="speed">速度默认5</param>
	/// <param name="level">等级默认1</param>
	TankAttribute(int attack=10,double defend=0,uint health=50,double speed=5,uint level=1);
	/// <summary>
	/// 坦克升级各方面属性提升
	/// </summary>
	/// <param name="multi">坦克的升级倍率</param>
	/// <returns></returns>
	int levelup(double multi=1);
	/// <summary>
	/// 移动
	/// </summary>
	void move();
};

