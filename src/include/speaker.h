#ifndef __speaker_h_
#define __speaker_h_

extern int bpm;//분당 비프수를 저장하는 전역변수
extern bool s_busy;//스피커 바쁜지 나타내는 전역변수
void initSpeaker();
void playBeep();
void changeBeep(int b);
void playTTS(char* str);
#endif


