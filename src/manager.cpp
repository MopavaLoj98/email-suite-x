// manager.cpp — part of email-suite-x.

#include "emailsuitex/manager.h"

#include <cstdio>

namespace emailsuitex {

Manager::Manager(const std::string& config_path)
    : config_path_(config_path) {}

void Manager::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Manager::run() {
    if (verbose_) std::fprintf(stderr, "[email-suite-x] manager: run\n");
    // core logic lives here
    return true;
}

}  // namespace emailsuitex
