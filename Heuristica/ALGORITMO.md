# Heurística Mayor Oferta × Mayor Demanda

Método para obtener una **solución inicial factible** del problema de transporte (minimizar costo de envío entre orígenes y destinos).

---

## Requisitos

1. Matriz de costos \(c_{ij}\) (origen \(i\) → destino \(j\)).
2. Ofertas \(a_i\) y demandas \(b_j\).
3. **Equilibrio:** \(\sum a_i = \sum b_j\).

Si no hay equilibrio, el problema no se resuelve tal cual (hay que balancear con origen/destino ficticio).

---

## Idea general

En cada iteración:

1. Tomar la **mayor oferta** residual y la **mayor demanda** residual.
2. En su cruce (o entre candidatos si hay empate), asignar lo máximo posible.
3. Actualizar residuales y **eliminar** filas/columnas agotadas.
4. Repetir hasta que no quede oferta ni demanda positiva.

---

## Pasos del algoritmo

### Inicialización

- Todas las filas (orígenes) y columnas (destinos) están **activas**.
- Residuales: \(of_i = a_i\), \(dem_j = b_j\).
- Asignaciones \(x_{ij} = 0\).

---

### Paso 1 — Máxima oferta y máxima demanda

Entre las filas **activas**, buscar:

\[
\max O = \max_i \{ of_i \}
\]

Entre las columnas **activas**, buscar:

\[
\max D = \max_j \{ dem_j \}
\]

Guardar **todas** las filas con oferta \(= \max O\) y **todas** las columnas con demanda \(= \max D\) (puede haber empates).

---

### Paso 2 — Elegir la celda (reglas de empate)

| Situación | Regla | Qué hacer |
|-----------|--------|-----------|
| 1 fila máxima y 1 columna máxima | **Regla C** | Ir a la intersección \(O_i\)–\(D_j\). |
| 1 fila máxima y varias columnas máximas | **Regla A** | Entre esas columnas, elegir la de **menor costo** \(c_{ij}\). |
| Varias filas máximas y 1 columna máxima | **Regla B** | Entre esas filas, elegir la de **menor costo** \(c_{ij}\). |
| Varias filas y varias columnas máximas | **Empate cruzado** | Entre todas las intersecciones candidatas, la de **menor costo**. |

La celda elegida es \((i^*, j^*)\).

---

### Paso 3 — Cantidad a asignar

\[
q = \min(of_{i^*},\ dem_{j^*})
\]

Se envía \(q\) unidades de \(O_{i^*}\) a \(D_{j^*}\).

---

### Paso 4 — Actualizar residuales

\[
\begin{align*}
x_{i^*j^*} &\leftarrow x_{i^*j^*} + q \\
of_{i^*} &\leftarrow of_{i^*} - q \\
dem_{j^*} &\leftarrow dem_{j^*} - q
\end{align*}
\]

Costo acumulado:

\[
Z \leftarrow Z + q \cdot c_{i^*j^*}
\]

---

### Paso 5 — Eliminar filas / columnas en cero

| Residual | Acción |
|----------|--------|
| Solo \(of_{i^*} = 0\) | Se elimina **toda la fila** \(O_{i^*}\). |
| Solo \(dem_{j^*} = 0\) | Se elimina **toda la columna** \(D_{j^*}\). |
| **Ambas** en 0 | Caso especial (ver abajo). |

Una fila o columna eliminada **no** participa en el siguiente Paso 1.

#### Caso especial: oferta y demanda se agotan a la vez

Ocurre cuando \(of_{i^*} = dem_{j^*}\) (antes de restar), así que tras asignar \(q\) ambas residuales quedan en 0.

En el programa se **pregunta** qué eliminar:

1. **Fila** \(O_{i^*}\), o  
2. **Columna** \(D_{j^*}\).

Solo se elimina **una** de las dos (la otra queda con residual 0).  
En la práctica el **costo final suele ser el mismo**; la elección es una convención (arbitraria pero conviene ser consistente, p. ej. siempre fila).

---

### Paso 6 — ¿Terminar?

- Si aún hay alguna oferta o demanda residual **> 0** en filas/columnas activas → volver al **Paso 1**.
- Si no → **fin**.

---

## Resultado

- Tabla de asignaciones \(x_{ij}\) (envíos).
- **Costo total:**

\[
Z = \sum_{i,j} x_{ij}\, c_{ij}
\]

Es una solución **factible** (cumple ofertas y demandas).  
No garantiza optimalidad (es heurística, no el método MODI / stepping stone).

---

## Lectura de la tabla en el programa

En cada iteración se muestra algo como:

```text
        D1     D2     D3     of
O1  -(4)  50(2)  -(1)  0
O2  -(3)     x    -(4)  5
dem  40   0[out]  60
```

| Símbolo | Significado |
|---------|-------------|
| `50(2)` | Se asignaron **50** unidades; costo unitario **2**. |
| `-(4)` | Sin asignación aún; costo unitario **4**. |
| `x` / `[out]` | Fila o columna **eliminada**. |
| `of` / `dem` | Residuales actuales. |

---

## Resumen en una línea

> Mientras quede residual: **máx. oferta × máx. demanda** → si hay empate, **menor costo** → asignar el mínimo → actualizar → **sacar** filas/columnas en cero → repetir.

---

## Ejemplo mínimo (esquema)

Datos \(3\times3\), equilibrio OK.

1. \(\max O = 70\) (O2), \(\max D = 65\) (D2) → celda O2–D2 → asignar 65 → D2 queda 0 → **elimina columna D2**.
2. Siguiente \(\max O\), \(\max D\) entre lo que sigue activo…
3. …hasta agotar todo.
4. Sumar \(x_{ij} \cdot c_{ij}\) → costo total.

(Detalle numérico completo: ver corridas en `resultados_BTP.txt` o el programa con `BTP-*.txt`.)

---

## Archivos del proyecto

| Archivo | Uso |
|---------|-----|
| `transporte_heuristica.cpp` | Implementación |
| `BTP-1.txt` … `BTP-12.txt` | Entradas (`m n`, costos, ofertas, demandas) |
| `resultados_BTP.txt` | Salidas de ejemplo |

Formato de entrada:

```text
m n
c11 c12 ... c1n
...
cm1 cm2 ... cmn
of1 of2 ... ofm
dem1 dem2 ... demn
```
