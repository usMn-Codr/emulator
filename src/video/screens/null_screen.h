#pragma once

#include "../screen.h"

class NullScreen : public Screen {
public:
    ~NullScreen() override = default;

    void draw(const FrameBuffer& buffer, const uint scrollx, const uint scrolly, const BGPalette& bg_palette) override;
    bool is_open() override;
};
