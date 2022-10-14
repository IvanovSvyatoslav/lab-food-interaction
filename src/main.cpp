#include "../lab-food-library/src/food_containment.h"

int main() {
  food_containment::FridgeBuilder builder;
  auto fridge = builder.AddDefaultItems().Build();
  fridge->PrintFridge();
  return 0;
}