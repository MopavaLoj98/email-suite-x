// main.cpp — entry point. Wires config and subsystems together.

#include "emailsuitex/settings.h"
#include "emailsuitex/providers.h"
#include "emailsuitex/manager.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    emailsuitex::Settings settings = emailsuitex::Settings::load_default();
    emailsuitex::Providers providers(settings.store_path);
    emailsuitex::Manager manager(settings.store_path);
    std::fprintf(stderr, "[email-suite-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
