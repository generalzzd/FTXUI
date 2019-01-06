#include "ftxui/screen.hpp"
#include "ftxui/dom/elements.hpp"
#include <iostream>

int main(int argc, const char *argv[])
{
  using namespace ftxui::dom;
  auto document =
    vbox(
      hbox(
        text(L"north-west"),
        filler(),
        text(L"north-east")
      ),
      filler(),
      hbox(
        hbox(
          filler(),
          text(L"center"),
          filler()
        )
      ),
      filler(),
      hbox(
        text(L"south-west"),
        filler(),
        text(L"south-east")
      )
    );
  auto screen = ftxui::Screen::TerminalFullscreen();
  Render(screen, document.get());

  std::cout << screen.ToString();

  return 0;
}