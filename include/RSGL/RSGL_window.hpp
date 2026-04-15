#pragma once

#include <string>
#include <memory>

#include <cstdint>

namespace RSGL {

namespace priv {
    class GContext;
}

enum Style {
    None = 0,
    TitleBar = 1 << 0,
    Resize   = 1 << 1,
    Close    = 1 << 2,

    Default = TitleBar | Resize | Close
};

enum class State
{
    Windowed,
    Fullscreen
};


using RSGL_WindowFlags = uint64_t;

class Window
{
private:
    std::size_t _ID;
    std::string _title;

    int _x, _y;
    unsigned int _width, _height;

    std::unique_ptr<priv::GContext> _context;

public:
    Window(/* args */) = delete;
    Window(const std::string& title, Style style = Style::Default, State state = State::Windowed);
    ~Window();
};

}
