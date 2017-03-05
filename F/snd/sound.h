#ifndef		SOUND_H
# define	SOUND_H

// Pour (des)activer le son en debug
#ifdef DEBUG
#define SOUND 0
#endif

// En release c'est dans les options de compilation (pour éviter les
// échecs), et avec cette vérification :
#ifndef SOUND
#error "Macro SOUND is not defined! Set it to 1 or 0"
#endif

namespace Sound
{
  void init();
  void play(unsigned a_time = 0);
  void stop();
}

#endif		// SOUND_H
