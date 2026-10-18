# Условие задачи

Вычислить сумму ряда Тейлора

$$x - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + \frac{x^9}{9!} - \frac{x^{11}}{11!} + \frac{x^{13}}{13!}$$

# 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. **Ввод данных:** `x` и количество слагаемых `N`
3. **Инициализация:** `sum = 0`, `fact = 1`
4. **Цикл `for` (`n` от `0` до `N - 1`):**
   * Вычисление и прибавление слагаемого: `sum += pow(-1, n) * pow(x, 2*n+1) / fact`
   * Обновление факториала для следующего шага: `fact *= (2*n+2) * (2*n+3)`
5. **Вывод результата:** печать `sum`
6. **Конец**

### Блок-схема

<img width="402" height="643" alt="image" src="https://github.com/user-attachments/assets/1ed11b49-82a4-4402-9628-deaa0877bb05" />

[Ссылка на изображение блок-схемы](https://clck.ru/3WZCpu)

# 2. Реализация программы

```c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    double sum = 0;
    double fact = 1;
    int N;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите количество N: ");
    scanf("%d", &N);
    for (int n = 0; n < N; n++) {
        sum += pow(-1, n) * pow(x, 2*n+1) / fact;
        fact *= (2*n+2) * (2*n+3);
    }
    printf("Сумма ряда: %.6lf\n", sum);
    return 0;
}
```
# 3. Результат работы программы
```text
Введите значение x: 1
Введите количество N: 7
Сумма ряда: 0.841471
```
# 4. Информация

Енгалычев Руслан бОТИ-261
