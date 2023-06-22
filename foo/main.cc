#include <iostream>
#include <glog/logging.h>
#include "gflags/gflags.h"

DEFINE_bool(verbose, false, "Display program name before message");
DEFINE_string(message, "Hello world!", "Message to print");
DEFINE_string(param, "Show me the money!", "Message to show");

static bool IsNonEmptyMessage(const char *flagname, const std::string &value){
    return value[0] != '\0';
}
DEFINE_validator(message, &IsNonEmptyMessage);

int main(int argc, char *argv[]) {
    gflags::SetUsageMessage("some usage message");
    gflags::SetVersionString("1.0.0");
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    if (FLAGS_verbose) {
        std::cout << gflags::ProgramInvocationShortName() << ": ";
    }
    std::cout << FLAGS_message << std::endl;
    std::cout << FLAGS_param << std::endl;
    gflags::ShutDownCommandLineFlags();

    // FLAGS_alsologtostderr = 1; // It will dump to console
    // google::InitGoogleLogging("test");
    // LOG(INFO) << "Dump log test";

    return 0;
}
