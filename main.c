#include "pixul.h"
#include <unistd.h>

int main()
{
  // Create the initial window
  P_Create("Smiley", 800, 800, 10, 10);

  // Fill the image with white
  P_Clear((P_Color){0, 0, 0, 255});

  // Set a few specific pixels for a smiley face :)
  P_Set(2, 2, (P_Color){255, 255, 255, 255});

  P_Set(4, 2, (P_Color){255, 255, 255, 255});

  P_Set(1, 4, (P_Color){255, 255, 255, 255});
  P_Set(2, 5, (P_Color){255, 255, 255, 255});
  P_Set(3, 5, (P_Color){255, 255, 255, 255});
  P_Set(4, 5, (P_Color){255, 255, 255, 255});
  P_Set(5, 4, (P_Color){255, 255, 255, 255});

  // Draw the updated image to the screen (must be called each time a change is made)
  P_Update(&window);

  // Sleep for a few seconds so the window is not immediately closed
  // Note that not using a loop with P_Done() means attempting to close the window manually is likely to fail
  sleep(3);

  // Safely destroy the window and free relevant memory
  P_Destroy(&window);

  return 0;
}
