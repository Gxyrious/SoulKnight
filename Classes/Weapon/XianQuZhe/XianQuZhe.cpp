#include "Weapon/XianQuZhe/XianQuZhe.h"
USING_NS_CC;

XianQuZhe* XianQuZhe::create(const std::string& filename)
{
	XianQuZhe* sprite = new XianQuZhe();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		sprite->initWeapon();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

void XianQuZhe::initWeapon()
{
	//this->bulletLayer = Layer::create();
	this->_bullet = CommonBullet::create("Bullet/CommonBullet.png");
	this->_bulletSpeed = _bullet->getSpeed();
	this->_bulletDamage = _bullet->getDamage();
	this->_blueConsumption = _bullet->getBlueComsumption();
}

//void XianQuZhe::createBulletToLayer(Vec2 startPosition,Vec2 endPosition)
//{
//	BasicBullet* bullet = CommonBullet::create("Bullet/CommonBullet.png");
//	bullet->setMoveVector(startPosition, endPosition);
//	bullet->setPosition(startPosition);
//	bullet->setAnchorPoint(Vec2::ZERO);
//	this->bulletLayer->addChild(bullet);
//	this->vecOfLayerBullet.push_back(bullet);
//	//this->addChild(bulletLayer, 4);
//}

BasicBullet* XianQuZhe::createBullet()
{
	return CommonBullet::create("Bullet/CommonBullet.png");
}

//void XianQuZhe::moveBullet()
//{
//	for (std::vector<BasicBullet*>::iterator iterBullet = this->vecOfLayerBullet.begin(); iterBullet != this->vecOfLayerBullet.end(); iterBullet++)
//	{
//		Vec2 nextPosition = (*iterBullet)->getPosition();
//		nextPosition += (*iterBullet)->getMoveVector();
//		(*iterBullet)->setPosition(nextPosition);
//	}
//}