# Guion por Diapositiva — Mi Parte (Participante 2)
**Basado en:** A Gentle Introduction to Memetic Algorithms

---

## Diapositiva 1: Título — Fundamentos, Historia y Conceptos

**Palabras clave:** fundamentos, historia, conceptos, Algoritmos Meméticos

**Guion:**
> Voy a explicar los fundamentos teóricos, la evolución histórica y los conceptos básicos de los Algoritmos Meméticos.

---

## Diapositiva 2: Fundamentos Teóricos

**Palabras clave:** No-Free-Lunch, Hart y Belew, Wolpert y Macready, conocimiento del problema, hibridación

**Viñetas:**
- Hart y Belew: rendimiento depende del conocimiento del problema
- Wolpert y Macready (1997): Popularizaron el NFL
- NFL: no existe algoritmo universalmente superior
- Sin conocimiento todos rinden igual

**Guion por viñeta:**

**Viñeta 1:** "Hart y Belew: rendimiento depende del conocimiento del problema..."
> Hart y Belew fueron los primeros en demostrar que el rendimiento de un algoritmo de búsqueda depende directamente de la cantidad y calidad del conocimiento del problema que incorpora. Sin conocimiento, el rendimiento es igual para todos.

**Viñeta 2:** "Wolpert y Macready (1997)..."
> Wolpert y Macready popularizaron esta idea en 1997 bajo el nombre del Teorema de No-Free-Lunch, publicándolo en IEEE Transactions on Evolutionary Computation.

**Viñeta 3:** "NFL: no existe algoritmo universalmente superior..."
> El NFL nos dice que no existe un algoritmo de búsqueda que sea universalmente superior a todos los demás. Sin conocimiento del problema, todos los algoritmos rinden igual en promedio.

**Viñeta 4:** "Sin conocimiento todos rinden igual..."
> Este resultado teórico respalda directamente la filosofía de los MAs, que desde su concepción se diseñaron para explotar al máximo el conocimiento específico del dominio.

---

## Diapositiva 3: Línea de Tiempo

**Palabras clave:** 1976, 1988, 1989, 1990s, 2003, Dawkins, Moscato, Norman, evolución cultural

**Viñetas:**
- 1976: Dawkins acuña "meme" en The Selfish Gene
- 1988: Moscato y Norman crean híbrido GA + SA
- 1989: Moscato acuña "Algoritmo Memético"
- 1990s: Consolidación como metaheurística
- 2003: Publicación de "A Gentle Introduction"

**Guion por viñeta:**

**Viñeta 1:** "1976: Dawkins acuña 'meme' en The Selfish Gene..."
> La historia comienza en 1976, cuando Richard Dawkins publicó *The Selfish Gene* y acuñó el término "meme" como unidad de evolución cultural. Este concepto sería la base filosófica de los Algoritmos Meméticos.

**Viñeta 2:** "1988: Moscato y Norman crean híbrido GA + SA..."
> En 1988, Moscato y Norman desarrollaron uno de los primeros algoritmos meméticos. Era un híbrido que combinaba Algoritmos Genéticos con Recocido Simulado, y lo aplicaron al Problema del Viajante Euclidiano. Una innovación clave fue la estructuración espacial con una red toroidal bidimensional.

**Viñeta 3:** "1989: Moscato acuña 'Algoritmo Memético'..."
> En 1989, Moscato formalizó el término "Algoritmo Memético". Su propuesta fue usar la evolución cultural como metáfora en lugar de la biológica, porque en la evolución cultural la información no solo se copia, sino que se procesa y mejora al transmitirse.

**Viñeta 4:** "1990s: Consolidación como metaheurística..."
> Durante los años 90, los MAs crecieron rápidamente y se consolidaron como una de las metaheurísticas más importantes, con éxitos en problemas NP-hard clásicos como TSP, coloración de grafos y knapsack.

**Viñeta 5:** "2003: Publicación de 'A Gentle Introduction'..."
> En 2003 se publicó el artículo "A Gentle Introduction to Memetic Algorithms" de Moscato y Cotta, que es la fuente principal de esta presentación.

---

## Diapositiva 4: Hitos

**Palabras clave:** primer MA, red toroidal, modelos de islas, estructuración espacial, competencia, cooperación

**Viñetas:**
- Primer algoritmo memético (1988)
- Red toroidal bidimensional
- Modelos de islas

**Guion por viñeta:**

**Viñeta 1:** "Primer algoritmo memético (1988)..."
> El primer algoritmo memético data de 1988 y fue considerado un híbrido de AGs y Recocido Simulado. Se aplicó al Problema del Viajante Euclidiano, buscando superar las limitaciones de ambas técnicas por separado.

**Viñeta 2:** "Red toroidal bidimensional..."
> Los agentes se organizaban en una topología de red toroidal bidimensional, donde cada uno se conectaba con sus vecinos en una estructura de malla circular con conexiones envolventes.

**Viñeta 3:** "Modelos de islas..."
> Esta estructuración espacial anticipó los llamados "modelos de islas" que se usan mucho hoy en día en algoritmos evolutivos paralelos, donde subpoblaciones evolucionan semi-independientemente.

---

## Diapositiva 5: Conceptos Básicos

**Palabras clave:** algoritmo, problema computacional, instancia, soluciones factibles, enumeración, conteo, decisión, optimización, optimización combinatoria

**Viñetas:**
- Algoritmo: procedimiento paso a paso para resolver un problema
- Problema computacional: tiene dominio de entrada (instancias) y conjunto de soluciones
- Una instancia es un caso específico del problema
- Soluciones factibles: las que cumplen todas las restricciones
- Tipos: enumeración, conteo, decisión y optimización
- Los MAs se enfocan en optimización combinatoria

**Guion por viñeta:**

**Viñeta 1:** "Algoritmo: procedimiento paso a paso..."
> Un algoritmo es un procedimiento detallado paso a paso para resolver un problema computacional. Es como una receta de cocina: tiene instrucciones claras que, si las seguimos, nos llevan al resultado deseado.

**Viñeta 2:** "Problema computacional..."
> Un problema computacional tiene un dominio de entrada con instancias (casos específicos del problema) y un conjunto de soluciones para cada instancia.

**Viñeta 3:** "Una instancia es un caso específico..."
> Una instancia es un caso particular del problema con datos concretos. Por ejemplo, si el problema es ordenar una lista, cada lista particular es una instancia.

**Viñeta 4:** "Soluciones factibles..."
> Las soluciones factibles son aquellas que cumplen con todas las restricciones del problema. No toda solución posible es aceptable; solo las que cumplen las reglas.

**Viñeta 5:** "Tipos: enumeración, conteo, decisión y optimización..."
> Los problemas se clasifican en: enumeración (encontrar todas las soluciones), conteo (contar cuántas existen), decisión (responder sí o no) y optimización (encontrar la mejor solución).

**Viñeta 6:** "Los MAs se enfocan en optimización combinatoria..."
> Los MAs se enfocan en optimización combinatoria, donde el objetivo es encontrar la mejor solución posible dentro de un conjunto finito de soluciones.

---

## Diapositiva 6: Optimización Combinatoria

**Palabras clave:** cardinalidad finita, función objetivo, valor de bondad, orden parcial, 0-1 MKP, vector binario, mochila

**Viñetas:**
- Conjunto de soluciones finito
- Función objetivo: asigna valor numérico a cada solución
- Valor de bondad: resultado de la función objetivo
- Orden parcial para comparar soluciones
- Ejemplo: 0-1 Multiple Knapsack Problem
- Objetivo: maximizar ganancia sin exceder capacidad de mochilas
- Representación: vector binario (1 = seleccionado, 0 = no)

**Guion por viñeta:**

**Viñeta 1:** "Conjunto de soluciones finito..."
> En optimización combinatoria, el conjunto de soluciones es finito, no infinito. Esto significa que podemos enumerar todas las posibles soluciones.

**Viñeta 2:** "Función objetivo..."
> Cada solución tiene un valor numérico asignado por una función objetivo. Este valor nos indica qué tan buena es cada solución.

**Viñeta 3:** "Valor de bondad..."
> El valor de bondad es el resultado de aplicar la función objetivo a una solución específica. Es el número que usamos para comparar soluciones.

**Viñeta 4:** "Orden parcial para comparar soluciones..."
> Se define un orden que permite determinar cuál de dos soluciones es preferible según el valor de bondad.

**Viñeta 5:** "Ejemplo: 0-1 Multiple Knapsack Problem..."
> Un ejemplo clásico es el Multiple Knapsack: tenemos varias mochilas con diferentes capacidades y muchos objetos con diferentes valores y pesos. El objetivo es seleccionar qué objetos poner en cada mochila.

**Viñeta 6:** "Objetivo: maximizar ganancia sin exceder capacidad de mochilas..."
> El objetivo es elegir los objetos más valiosos posible sin exceder la capacidad de ninguna mochila.

**Viñeta 7:** "Representación: vector binario..."
> Se representa con vectores binarios donde 1 indica que un objeto está seleccionado para alguna mochila, y 0 indica que no está seleccionado.

---

## CIERRE

**Palabras clave:** resumen, conclusión, fundamentos, historia, conceptos

**Guion:**
> Para resumir: el Teorema NFL nos dice que el conocimiento del problema es clave. Los MAs surgieron en 1988-1989 como híbridos inteligentes. Los conceptos básicos como algoritmo, problema, solución y optimización combinatoria son el fundamento para entender cómo funcionan estos métodos.

