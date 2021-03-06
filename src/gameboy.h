#pragma once

#include "cpu/cpu.h"
#include "debugger.h"
#include "video/screen.h"
#include "video/video.h"
#include "util/cli.h"

#include <memory>

class Gameboy {
public:
    Gameboy(std::shared_ptr<Screen> inScreen, Cartridge& cartridge, Options& options);

    void run();

private:
    std::shared_ptr<Screen> screen;
    CPU cpu;
    Video video;
    MMU mmu;

    Debugger debugger;

    friend class Debugger;
};
