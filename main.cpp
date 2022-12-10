#include <stdio.h>
#include "microphone.h"

void print_menu() {
  printf("1. Enable microphone\n");
  printf("2. Disable microphone\n");
  printf("3. Check microphone status\n");
  printf("4. Exit\n");
  printf("Enter your choice: ");
}

int main() {
  Microphone mic;

  int nChoice = 0;
  do {
    print_menu();
    scanf("%d", &nChoice);

    switch (nChoice) {
      case 1:
        mic.enable();
        printf("Microphone enabled\n");
        break;
      case 2:
        mic.disable();
        printf("Microphone disabled\n");
        break;
      case 3:
        // print state
        printf("Microphone is %s\n", mic.isEnabled() ? "enabled" : "disabled");
        break;
      case 4:
        printf("Goodbye!\n");
        break;
      default:
        printf("Invalid choice\n");
