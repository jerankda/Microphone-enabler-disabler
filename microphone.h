#ifndef MICROPHONE_H
#define MICROPHONE_H

#include <windows.h>

class Microphone {
public:

  Microphone();

  void enable();

  void disable();

  bool isEnabled() const;

private:
  BOOL m_bMicEnabled; // stores state of mic
};

#endif