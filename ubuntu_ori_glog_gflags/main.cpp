#include <gflags/gflags.h>
#include <iostream>
#include "glog/logging.h"

using namespace std;

DEFINE_string(gflags, "ubuntu ori gflags", "to use ubuntu ori gflags");
DEFINE_bool(stayStatic, false, "change or not");

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    FLAGS_logtostderr = true;
    FLAGS_minloglevel = 1;

    cout << "Hello World!" << endl;
    int a = 0;
    if (!a) {
        LOG(ERROR) << "a != 0";
    }

    cout << FLAGS_gflags << endl;

    google::ShutDownCommandLineFlags();
    google::ShutdownGoogleLogging();
    return 0;
}
