#include "microphone.h"

Microphone::Microphone() {
  // get mic state
  SystemParametersInfo(SPI_GET_MICROPHONE_SWITCH, 0, &m_bMicEnabled, 0);
}

void Microphone::enable() {
  m_bMicEnabled = TRUE;
  SystemParametersInfo(SPI_SET_MICROPHONE_SWITCH, m_bMicEnabled, NULL, 0);
}

void Microphone::disable() {
  m_bMicEnabled = FALSE;
  SystemParametersInfo(SPI_SET_MICROPHONE_SWITCH, m_bMicEnabled, NULL, 0);
}

// return true if enabled, false if disabled
bool Microphone::isEnabled() const {
  return (m_bMicEnabled == TRUE);
}
