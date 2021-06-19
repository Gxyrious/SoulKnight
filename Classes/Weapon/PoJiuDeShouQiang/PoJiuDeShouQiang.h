#pragma once
#ifndef __POJIUDESHOUQIANG_H__
#define __POJIUDESHOUQIANG_H__

#include "cocos2d.h"
#include "Weapon/BasicWeapon.h"
#include "Bullet/CommonBullet.h"

class PoJiuDeShouQiang :public BasicWeapon
{
public:
	static PoJiuDeShouQiang* create(const std::string& filename);
	//virtual void createBulletToLayer(cocos2d::Vec2 startPosition, cocos2d::Vec2 endPosition);
	virtual BasicBullet* createBullet();
	//virtual void moveBullet();
	//virtual bool init();
protected:
	void initWeapon();
};

#endif // !__POJIUDESHOUQIANG_H__
