#include "pixul.h"
#include <unistd.h>

int main()
{
  // Create the initial window
  P_Window window;

  P_Create("Smiley", &window, 800, 800, 10, 10);

  // Fill the image with white
  P_Clear(&window, (P_Color){0, 0, 0, 255});

  // Set a few specific pixels for a smiley face :)
  P_Set(&window, 2, 2, (P_Color){255, 255, 255, 255});

  P_Set(&window, 4, 2, (P_Color){255, 255, 255, 255});

  P_Set(&window, 1, 4, (P_Color){255, 255, 255, 255});
  P_Set(&window, 2, 5, (P_Color){255, 255, 255, 255});
  P_Set(&window, 3, 5, (P_Color){255, 255, 255, 255});
  P_Set(&window, 4, 5, (P_Color){255, 255, 255, 255});
  P_Set(&window, 5, 4, (P_Color){255, 255, 255, 255});

  // Draw the updated image to the screen (must be called each time a change is made)
  P_Update(&window);

  // Sleep for a few seconds so the window is not immediately closed
  // Note that not using a loop with P_Done() means attempting to close the window manually is likely to fail
  sleep(3);

  // Safely destroy the window and free relevant memory
  P_Destroy(&window);

  return 0;
}
