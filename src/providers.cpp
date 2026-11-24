// providers.cpp — part of email-suite-x.

#include "emailsuitex/providers.h"

#include <cstdio>

namespace emailsuitex {

Providers::Providers(const std::string& config_path)
    : config_path_(config_path) {}

void Providers::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Providers::run() {
    if (verbose_) std::fprintf(stderr, "[email-suite-x] providers: run\n");
    // core logic lives here
    return true;
}

}  // namespace emailsuitex
