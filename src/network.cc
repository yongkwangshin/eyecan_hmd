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

using tensorflow::Flag;
using tensorflow::Tensor;
using tensorflow::Status;
using tensorflow::string;
using tensorflow::int32;
using namespace std;

#define OUTPUT_HEIGHT 224
#define OUTPUT_WIDTH 224

//전역변수
float score;//beep음 주기를 계산하기 위한 전역변수
float seg_result[OUTPUT_WIDTH][OUTPUT_HEIGHT]; //세그멘테이션 결과를 저장하는 전역변수 224*224
string GRAPH_PATH = "data/ex1.model.0.h5.pb";//실행파일 및에 data폴더에 파일이 있어야함
string inputLayer = "image_tensor:0";//수정되어야함
string outputLayer = "output_layer:0";//수정되어야함
std::unique_ptr<tensorflow::Session> session;//세션변수

/** Read a model graph definition (xxx.pb) from disk, and creates a session object you can use to run it.
 */
Status loadGraph(const string &graph_file_name,
                 unique_ptr<tensorflow::Session> *session) {
    tensorflow::GraphDef graph_def;
    Status load_graph_status =
    ReadBinaryProto(tensorflow::Env::Default(), graph_file_name, &graph_def);
    if (!load_graph_status.ok()) {
        return tensorflow::errors::NotFound("Failed to load compute graph at '",
                                            graph_file_name, "'");
    }
    session->reset(tensorflow::NewSession(tensorflow::SessionOptions()));
    Status session_create_status = (*session)->Create(graph_def);
    if (!session_create_status.ok()) {
        return session_create_status;
    }
    return Status::OK();
}


//네트워크 초기화
int initNetwork()
{
    score = 0;//스코어 초기화
    Status loadGraphStatus = loadGraph(GRAPH_PATH, &session);
    if (!loadGraphStatus.ok()) {
        cout << "loadGraph(): ERROR" << loadGraphStatus;
        return -1;
    } else
        cout << "loadGraph(): frozen graph loaded" << endl;
    
    
    return 0;
    
}
//세그멘테이션 결과를 결과배열에 저장한다.
void getSegmentation()
{
    
}
//score를 계산하여 전역변수 score에 저장한다.
void caculateScore()
{
    
}
