#ifndef CORE_H
#define CORE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

enum State {
  INIT,
  RUNNING,
  EXIT,
  CLEANUP,
};

typedef struct core {
  SDL_Window *window;
  SDL_Renderer *renderer;
  int win_width;
  int win_height;
  int fps;
  enum State state;
} Core;

void core_init(Core* core);
void core_run(Core* core);
void core_exit(Core* core);

#endif
