#pragma once
#ifndef __XIANQUZHE_H__
#define __XIANQUZHE_H__

#include "cocos2d.h"
#include "Weapon/BasicWeapon.h"
#include "Bullet/CommonBullet.h"

class XianQuZhe :public BasicWeapon
{
public:
	static XianQuZhe* create(const std::string& filename);
	//virtual void createBulletToLayer(cocos2d::Vec2 startPosition, cocos2d::Vec2 endPosition);
	virtual BasicBullet* createBullet();
	//virtual void moveBullet();

protected:
	void initWeapon();
};

#endif // !__XIANQUZHE_H__
