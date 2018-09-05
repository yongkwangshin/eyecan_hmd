#ifndef __network_h_
#define __network_h_




#define OUTPUT_HEIGHT 224
#define OUTPUT_WIDTH 224

extern float score;//스코어를 저장하는 전역변수

void initNetwork();
void getSegmentation();
void caculateScore();
#endif





