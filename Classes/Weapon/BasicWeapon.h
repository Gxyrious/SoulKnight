#pragma once
#include "cocos2d.h"
#include "Bullet/BasicBullet.h"

#ifndef __BASICWEAPON_H__
#define __BASICWEAPON_H__

class BasicWeapon : public cocos2d::Sprite
{
public:
	BasicBullet* getBullet();////得到子弹的类型，要先在派生类中初始化
	//virtual void createBulletToLayer(cocos2d::Vec2 startPosition,cocos2d::Vec2 endPosition) = 0;
	virtual BasicBullet* createBullet() = 0;
	//cocos2d::Layer* getBulletLayer();
	//virtual void moveBullet() = 0;
	float getBulletSpeed()const;
	int getBulletDamage()const;
	int getBlueConsumption()const;
	//std::vector<BasicBullet*>& getLayerBullets();
protected:
	BasicBullet* _bullet;//武器的子弹
	//std::vector<BasicBullet*> vecOfLayerBullet;
	//cocos2d::Layer* bulletLayer;
	float _bulletSpeed;//子弹速度
	int _bulletDamage;//子弹伤害
	int _blueConsumption;//武器耗蓝量
};

#endif // !__BASICWEAPON_H__