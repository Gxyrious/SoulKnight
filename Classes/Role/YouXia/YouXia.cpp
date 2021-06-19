#include "Role/YouXia/YouXia.h"
USING_NS_CC;

YouXia* YouXia::create(const std::string& filename)
{
	YouXia* sprite = new YouXia();
	if (sprite && sprite->initWithFile(filename))
	{
		sprite->autorelease();
		sprite->initRole();
		return sprite;
	}
	CC_SAFE_DELETE(sprite);
	return nullptr;
}

void YouXia::useRoleSkill()
{
	this->setSpeed(_normalSpeed);
}

void YouXia::stopRoleSkill()
{
	this->_speed = 10.0f;
}

void YouXia::initRole()
{
	//�趨��ʼλ�ã��м䣻���ó�ʼ������Σ��м�
	BasicRole::initRole();

	this->_timeDelay = 60;
	this->_maxTimeDelay = 60;

	this->_blood = 50;
	this->_blue = 200;
	this->_shield = 100;
	this->_maxBlood = 50;
	this->_maxBlue = 200;
	this->_maxShield = 100;

	this->_speed = 12.0f;
	this->_normalSpeed = 12.0f;

	this->_skillCD = 0.1f;//

	this->_ifRoleCollided = false;
	//���ﴴ����youxia������
	this->_weapon = XianQuZhe::create("Weapon/XianQuZhe/XianQuZhe.png");
}
