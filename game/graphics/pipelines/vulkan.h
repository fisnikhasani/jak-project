#pragma once

#include <mutex>

#include "game/graphics/display.h"
#include "game/graphics/gfx.h"

#include "third-party/SDL/include/SDL3/SDL.h"
#include "third-party/SDL/include/SDL3/SDL_vulkan.h"
#include <vulkan/vulkan.h>

class VKDisplay : public GfxDisplay {
  public:
   VLDisplay(SDL_Window* window, SDL_GLContext vk_context, bool is_main);
   virtual ~VKDisplay();
};
