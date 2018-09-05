#include<iostream>
using namespace std;
//rBuffer[100] 전역버퍼

//통신초기화
void initCurl()
{
    cout<<"initCurl()"<<endl;
}
//버퍼가 비었는지 확인
bool isBufferEmpty()
{
    cout<<"isBufferEmpty()"<<endl;
    return true;
}
//버퍼비우기
void flushBuffer()
{
    cout<<"flushBuffer()"<<endl;
}
//버퍼에 데이터 보내기
void sendData()
{
    cout<<"sendData()"<<endl;
}
