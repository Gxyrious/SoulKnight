#include "Music/Music.h"

USING_NS_CC;

int mainMusicID = 0;
float musicVolume = 1.0f;
bool musicIfOpen = true;

bool ifBGMPlaying = false;

void beginMainMusic()
{
    AudioEngine::preload("Music/BackMusic.mp3");
    if (!ifBGMPlaying)           //ֻ�ڵ�һ�ؿ�ʼ
    {
        mainMusicID = AudioEngine::play2d("Music/BackMusic.mp3", true);		//���true���Ƿ�ѭ��
    }
    ifBGMPlaying = true;
}

void stopMainMusic()
{
    AudioEngine::stop(mainMusicID);
    ifBGMPlaying = false;
}

void playShootMusic()
{
    AudioEngine::preload("music/BulletShot.mp3");
    AudioEngine::play2d("music/BulletShot.mp3", true);
}

void musicresumeOrpausePlaying()
{
    if (AudioEngine::getState(mainMusicID) == AudioEngine::AudioState::PAUSED)  //�����и���ȡ״̬���÷���������ID
    {
        AudioEngine::resume(mainMusicID);   //�����ͣ���ͼ���
    }
    else if (AudioEngine::getState(mainMusicID) == AudioEngine::AudioState::PLAYING)
    {
        AudioEngine::pause(mainMusicID);    //��������У�����ͣ
    }
}

void setMusicVolume()
{
    AudioEngine::setVolume(mainMusicID, musicVolume);
}
