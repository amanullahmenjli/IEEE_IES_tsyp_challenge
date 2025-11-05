#include "controller/controller.h"
#include "energy/energy.h"
#include "modules/module.h"
int main(int argc, char *argv[]) {
  Controller controller;
  Manager energy(controller, std::vector<Module>());

  while (true) {
    energy.poll();
  }
  return 0;
}
