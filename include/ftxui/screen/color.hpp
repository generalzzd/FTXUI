#ifndef FTXUI_SCREEN_COLOR
#define FTXUI_SCREEN_COLOR

#include <cstdint>

namespace ftxui {

enum class Color : uint8_t {
  // --- Transparent -----
  Default = 39,

  // --- Grayscale -----
  Black = 30,
  GrayDark = 90,
  GrayLight = 37,
  White = 97,

  // --- Hue -----
  Blue = 34,
  BlueLight = 94,

  Cyan = 36,
  CyanLight = 96,

  Green = 32,
  GreenLight = 92,

  Magenta = 35,
  MagentaLight = 95,

  Red = 31,
  RedLight = 91,

  Yellow = 33,
  YellowLight = 93,
};

} // namespace ftxui

#endif /* end of include guard: FTXUI_COLOR_H_ */
