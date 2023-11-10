#include <stdio.h>
#include <raylib.h>

int main(void)
{
  InitAudioDevice;
  Sound sound = LoadSound("summoner.ogg");
  PlaySound(sound);
  return 0;
}
