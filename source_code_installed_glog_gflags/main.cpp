#include <iostream>
#include "gflags/gflags.h"
#include "glog/logging.h"

using namespace std;

DEFINE_string(source_code, "source code installed", "installed");

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    FLAGS_logtostderr = true;
    FLAGS_minloglevel = 1;

    cout << "Hello World!" << endl;
    int b = 0;
    if (!b) {
        LOG(ERROR) << "b != 0";
    }

    cout << FLAGS_source_code << endl;

    google::ShutDownCommandLineFlags();
    google::ShutdownGoogleLogging();
    return 0;
}
