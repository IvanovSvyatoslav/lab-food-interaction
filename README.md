# Лабораторная №2 по предмету "Инструментальные средства разработки программного обеспечения"
Используется библиотека написанная мною же библиотека FoodLibrary, которая позволяет работать с едой и холодильниками.
### Например:
Следующий код запускает консольное приложение, полностью демонстрирующее работу библиотеки.
```c++
int main() {
  food_containment::FridgeApp::GetInstance().Run();
  return 0;
}
```
