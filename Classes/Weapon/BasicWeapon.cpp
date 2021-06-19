#include "Weapon/BasicWeapon.h"

USING_NS_CC;

BasicBullet* BasicWeapon::getBullet()
{
	return this->_bullet;
}

//cocos2d::Layer* BasicWeapon::getBulletLayer()
//{
//	return this->bulletLayer;
//}

float BasicWeapon::getBulletSpeed() const
{
	return this->_bulletSpeed;
}

int BasicWeapon::getBulletDamage() const
{
	return this->_bulletDamage;
}

int BasicWeapon::getBlueConsumption() const
{
	return this->_blueConsumption;
}

//std::vector<BasicBullet*>& BasicWeapon::getLayerBullets()
//{
//	return this->vecOfLayerBullet;
//	// TODO: 在此处插入 return 语句
//}
