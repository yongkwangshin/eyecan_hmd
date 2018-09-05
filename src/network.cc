#include "include/network.h"
#include <fstream>
#include <utility>
#include <vector>
#include <iostream>

#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/image_ops.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/graph/default_device.h"
#include "tensorflow/core/graph/graph_def_builder.h"
#include "tensorflow/core/lib/core/threadpool.h"
#include "tensorflow/core/lib/io/path.h"
#include "tensorflow/core/lib/strings/stringprintf.h"
#include "tensorflow/core/platform/init_main.h"
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/util/command_line_flags.h"

#include "include/camera.h"
float score;
float seg_result[OUTPUT_WIDTH][OUTPUT_HEIGHT]; //세그멘테이션 결과를 저장하는 전역변수 224*224

//네트워크 초기화
void initNetwork()
{
    score = 0;
}
//세그멘테이션 결과를 결과배열에 저장한다.
void getSegmentation()
{
    
}
//score를 계산하여 전역변수 score에 저장한다.
void caculateScore()
{
    
}
