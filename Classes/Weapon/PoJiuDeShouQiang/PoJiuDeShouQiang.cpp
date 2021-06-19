#include "Weapon/PoJiuDeShouQiang/PoJiuDeShouQiang.h"
USING_NS_CC;

PoJiuDeShouQiang* PoJiuDeShouQiang::create(const std::string& filename)
{
	PoJiuDeShouQiang* sprite = new PoJiuDeShouQiang();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		sprite->initWeapon();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}



void PoJiuDeShouQiang::initWeapon()
{
	//this->bulletLayer = Layer::create();
	this->_bullet = CommonBullet::create("Bullet/CommonBullet.png");
	this->_bulletSpeed = _bullet->getSpeed();
	this->_bulletDamage = _bullet->getDamage();
	this->_blueConsumption = _bullet->getBlueComsumption();
	//_bullet->initBullet(this->_bulletSpeed, this->_bulletAttack);
	//不用设置了，create的时候自动更新好了，因为一把武器只对应一种子弹类
}

//void PoJiuDeShouQiang::createBulletToLayer(cocos2d::Vec2 startPosition, cocos2d::Vec2 endPosition)
//{
//	BasicBullet* bullet = CommonBullet::create("Bullet/CommonBullet.png");
//	bullet->setMoveVector(startPosition, endPosition);
//	bullet->setPosition(startPosition);
//	bullet->setAnchorPoint(Vec2::ZERO);
//	//this->bulletLayer->addChild(bullet);
//	//this->vecOfLayerBullet.push_back(bullet);
//}

BasicBullet* PoJiuDeShouQiang::createBullet()
{
	return CommonBullet::create("Bullet/CommonBullet.png");
}

//void PoJiuDeShouQiang::moveBullet()
//{
//	for (std::vector<BasicBullet*>::iterator iterBullet = vecOfLayerBullet.begin(); iterBullet != vecOfLayerBullet.end(); iterBullet++)
//	{
//		Vec2 nextPosition = (*iterBullet)->getPosition();
//		nextPosition += (*iterBullet)->getMoveVector();
//		(*iterBullet)->setPosition(nextPosition);
//	}
//}
