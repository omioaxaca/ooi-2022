# Trucos útiles para la olimpiada

## Optimizar el uso de `cin`
La función `cin` es muy útil y práctica para leer la entrada, sin embargo cuando la cantidad de datos es muy grande, puede causar problemas.

Para evitarlo, se recomienda agregar las siguientes 2 líneas al principio de todos los programas (justo después del main).

Es importante que se memoricen la sintaxis.

```c++
std::ios_base::sync_with_stdio(0); 
std::cin.tie(0);
```

Ejemplo:

```c++
#include <iostream>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // Resto de su codigo

    return 0;
}
```

## Leer toda una línea como un string
Para esto se usa la función `getline`.
Ejemplo:
```c++
string linea;
getline(cin, linea);
```

## Leer todos los valores cuando no se sabe cuantos existen
Al utilizar la función `cin` esto es muy sencillo, ya que esta nos devuelve un valor verdadero siempre que sea posible leer datos.
Ejemplo, leer todos los datos enteros hasta que ya no haya más.
```c++
int numero;
while(cin >> numero) {
    // Operaciones
}
```

## Leer línea por línea hasta que no haya más valores
Esta es una combinación de los 2 puntos anteriores.
```c++
strng linea;
while(getline(cin, linea)) {
    // Operaciones
}
```