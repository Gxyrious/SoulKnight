
#ifndef __MUSIC_H__
#define __MUSIC_H__

#include "cocos2d.h"
#include "AudioEngine.h"

extern int mainMusicID;
extern float musicVolume;
extern bool musicIfOpen;


void beginMainMusic();
void stopMainMusic();

void playShootMusic();
/*
* �������״̬Ϊ��ͣ���ͼ�������
* �������״̬Ϊ�����У�����ͣ
*/
void musicresumeOrpausePlaying();

void setMusicVolume();


#endif // !__MUSIC_H__