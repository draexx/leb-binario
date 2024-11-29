Claro, aquí tienes un README en formato Markdown con la explicación del código:

---

# Proyecto de LEDs Binarios

Este proyecto utiliza un Arduino para mostrar los números binarios del 1 al 15 utilizando LEDs.

## Descripción

El código está diseñado para encender y apagar LEDs conectados a un Arduino según los números binarios del 1 al 15. A continuación, se detalla cómo funciona el código.

## Código

```cpp
// C++ code
int leds[] = {2, 3, 4, 5}; // Pines de los LEDs
int time_wait = 1000; // Tiempo de espera en milisegundos

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 1; i <= 15; i++) { // Recorremos los números del 1 al 15
    for (int j = 0; j < 4; j++) { // Recorremos cada bit del número
      digitalWrite(leds[j], (i >> j) & 1); // Encendemos o apagamos los LEDs según el bit
    }
    delay(time_wait); // Esperamos un segundo antes de pasar al siguiente número
  }
}
```

## Explicación del Código

### Definición de Pines y Tiempo de Espera
Primero, definimos los pines a los que están conectados los LEDs y el tiempo de espera entre cada cambio de estado:

```cpp
int leds[] = {2, 3, 4, 5}; // Pines de los LEDs
int time_wait = 1000; // Tiempo de espera en milisegundos
```

### Configuración Inicial
En la función `setup()`, configuramos cada uno de los pines de los LEDs como salida. Esto es necesario para poder encender y apagar los LEDs:

```cpp
void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}
```

### Bucle Principal
En la función `loop()`, utilizamos un bucle `for` para recorrer los números del 1 al 15. Para cada número, otro bucle `for` recorre los 4 bits y determina si cada LED debe estar encendido o apagado:

```cpp
void loop() {
  for (int i = 1; i <= 15; i++) { // Recorremos los números del 1 al 15
    for (int j = 0; j < 4; j++) { // Recorremos cada bit del número
      digitalWrite(leds[j], (i >> j) & 1); // Encendemos o apagamos los LEDs según el bit
    }
    delay(time_wait); // Esperamos un segundo antes de pasar al siguiente número
  }
}
```

### Detalle del Código
- `(i >> j)` desplaza los bits del número `i` a la derecha `j` posiciones.
- `& 1` aísla el bit menos significativo después del desplazamiento.
- `digitalWrite(leds[j], (i >> j) & 1)` enciende (`HIGH`) o apaga (`LOW`) el LED correspondiente según el bit aislado.

### Ejemplo de Funcionamiento
- Para `i = 1` (binario `0001`):
  - `j = 0`: LED en pin 2 se enciende (`1`)
  - `j = 1`: LED en pin 3 se apaga (`0`)
  - `j = 2`: LED en pin 4 se apaga (`0`)
  - `j = 3`: LED en pin 5 se apaga (`0`)

- Para `i = 2` (binario `0010`):
  - `j = 0`: LED en pin 2 se apaga (`0`)
  - `j = 1`: LED en pin 3 se enciende (`1`)
  - `j = 2`: LED en pin 4 se apaga (`0`)
  - `j = 3`: LED en pin 5 se apaga (`0`)

### Conclusión
Este programa es una excelente manera de entender cómo trabajar con operaciones y manejar hardware como LEDs con Arduino.

---

¡Buena suerte con tu proyecto! 🚀💡
