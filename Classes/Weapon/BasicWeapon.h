#pragma once
#include "cocos2d.h"
#include "Bullet/BasicBullet.h"

#ifndef __BASICWEAPON_H__
#define __BASICWEAPON_H__

class BasicWeapon : public cocos2d::Sprite
{
public:
	BasicBullet* getBullet();////�õ��ӵ������ͣ�Ҫ�����������г�ʼ��
	//virtual void createBulletToLayer(cocos2d::Vec2 startPosition,cocos2d::Vec2 endPosition) = 0;
	virtual BasicBullet* createBullet() = 0;
	//cocos2d::Layer* getBulletLayer();
	//virtual void moveBullet() = 0;
	float getBulletSpeed()const;
	int getBulletDamage()const;
	int getBlueConsumption()const;
	//std::vector<BasicBullet*>& getLayerBullets();
protected:
	BasicBullet* _bullet;//�������ӵ�
	//std::vector<BasicBullet*> vecOfLayerBullet;
	//cocos2d::Layer* bulletLayer;
	float _bulletSpeed;//�ӵ��ٶ�
	int _bulletDamage;//�ӵ��˺�
	int _blueConsumption;//����������
};

#endif // !__BASICWEAPON_H__