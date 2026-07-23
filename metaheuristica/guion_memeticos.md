# GUIÓN - Algoritmos Meméticos
**Fuente: "A Gentle Introduction to Memetic Algorithms" - Moscato & Cotta (2003)**

---

## 1. INTRODUCCIÓN Y NOTAS HISTÓRICAS

### Guion

Los algoritmos meméticos, o MAs por sus siglas en inglés, son una amplia clase de metaheurísticas. A diferencia de los métodos tradicionales de computación evolutiva, los MAs se caracterizan por explotar todo el conocimiento disponible sobre el problema que se está estudiando.

La incorporación de conocimiento del dominio del problema no es un mecanismo opcional, sino una característica fundamental que define a los MAs. Esta filosofía de funcionamiento está perfectamente ilustrada por el término "memético".

El término "meme" fue acuñado por Richard Dawkins en su libro "The Selfish Gene" (1976). Un meme denota un análogo al gen en el contexto de la evolución cultural. Como dice Dawkins: "Los memes se propagan en el pool de memes saltando de cerebro a cerebro mediante un proceso que, en un sentido amplio, puede llamarse imitación."

Esta caracterización sugiere que en los procesos de evolución cultural, la información no se transmite sin cambios entre individuos. En contraste, es procesada y mejorada por las partes comunicantes. Esta mejora se logra en los MAs incorporando heurísticas, algoritmos de aproximación, técnicas de búsqueda local, operadores de recombinación especializados, métodos exactos truncados, etc.

El primer algoritmo al que se le asignó la etiqueta de MA data de 1988, y fue considerado por muchos como un híbrido de algoritmos genéticos tradicionales (GAs) y simulated annealing (SA). La motivación inicial fue encontrar una salida a las limitaciones de ambas técnicas en un problema de optimización combinatoria bien estudiado: el problema del vendedor viajero euclidiano mínimo (Min ETSP).

En 1989, Moscato y Norman identificaron a varios autores que también estaban introduciendo heurísticas para mejorar las soluciones antes de recombinarlas. En ese momento se introdujo por primera vez la denominación de "algoritmos meméticos". También se sugirió que la evolución cultural puede ser una mejor metáfora de trabajo para estas metaheurísticas.

### Palabras clave
- **Algoritmos meméticos (MAs)**: Clase amplia de metaheurísticas basadas en poblaciones que explotan conocimiento del problema.
- **Metaheurística**: Método general-purpose diseñado para guiar una heurística subyacente.
- **Meme**: Unidad de información cultural que se propaga por imitación, análogo al gen en la evolución cultural.
- **The Selfish Gene**: Libro de Richard Dawkins (1976) donde se acuña el término "meme".
- **Richard Dawkins**: Biólogo y escritor que creó el concepto de meme.
- **Pablo Moscato**: Investigador que acuñó el término "Algoritmo Memético" en 1989.
- **Colin Norman**: Colaborador de Moscato en el desarrollo del primer algoritmo memético.
- **Computación evolutiva (EC)**: Métodos de búsqueda inspirados en la evolución natural.
- **Algoritmo genético (GA)**: Algoritmo de búsqueda basado en poblaciones y selección natural.
- **Simulated annealing (SA)**: Algoritmo de búsqueda local inspirado en el enfriamiento de metales.
- **Hibridación (Hybridization)**: Proceso de incorporar conocimiento del problema a un algoritmo.
- **No-Free-Lunch Theorem (NFL)**: Teorema que establece que no existe un algoritmo universalmente superior.
- **Min ETSP**: Problema del vendedor viajero euclidiano mínimo, problema de optimización combinatoria.
- **Evolución cultural**: Proceso donde la información se transmite y mejora entre individuos.
- **Heurística**: Técnica de búsqueda que busca soluciones "suficientemente buenas".
- **Operador de recombinación**: Mecanismo que combina información de múltiples soluciones.
- **Búsqueda local**: Técnica que mejora una solución modificándola localmente.

### Notas por viñeta
- Los algoritmos meméticos, o MAs por sus siglas en inglés, son una amplia clase de metaheurísticas.
  > **Nota:** El paper define los MAs como "general purpose methods aimed to guide an underlying heuristic". Son métodos de propósito general.

- A diferencia de los métodos tradicionales de computación evolutiva, los MAs se caracterizan por explotar todo el conocimiento disponible sobre el problema que se está estudiando.
  > **Nota:** Esta es la diferencia clave con otros métodos evolutivos. Los MAs no son genéricos; incorporan información específica del problema.

- La incorporación de conocimiento del dominio del problema no es un mecanismo opcional, sino una característica fundamental que define a los MAs.
  > **Nota:** Según el paper, esto es lo que distingue a los MAs de otros enfoques. El conocimiento del problema es esencial, no opcional.

- Esta filosofía de funcionamiento está perfectamente ilustrada por el término "memético".
  > **Nota:** El nombre "memético" viene de los memes de Dawkins, que son unidades culturales que evolucionan.

- El término "meme" fue acuñado por Richard Dawkins en su libro "The Selfish Gene" (1976).
  > **Nota:** El paper cita directamente a Dawkins: "Los memes se propagan saltando de cerebro a cerebro mediante imitación."

- Un meme denota un análogo al gen en el contexto de la evolución cultural.
  > **Nota:** La analogía es: genes → evolución biológica, memes → evolución cultural. Los MAs aplican esta idea a la búsqueda de soluciones.

- Esta caracterización sugiere que en los procesos de evolución cultural, la información no se transmite sin cambios entre individuos.
  > **Nota:** A diferencia de los genes que se copian exactamente, los memes se modifican y mejoran al transmitirse.

- En contraste, es procesada y mejorada por las partes comunicantes.
  > **Nota:** En los MAs, las soluciones se mejoran durante el proceso de transmisión (recombinación).

- Esta mejora se logra en los MAs incorporando heurísticas, algoritmos de aproximación, técnicas de búsqueda local, operadores de recombinación especializados, métodos exactos truncados, etc.
  > **Nota:** Estas son las herramientas que usan los MAs para mejorar las soluciones. La búsqueda local es especialmente importante.

- El primer algoritmo al que se le asignó la etiqueta de MA data de 1988, y fue considerado por muchos como un híbrido de algoritmos genéticos tradicionales (GAs) y simulated annealing (SA).
  > **Nota:** El paper menciona que este algoritmo fue desarrollado para resolver el problema del vendedor viajero euclidiano mínimo.

- La motivación inicial fue encontrar una salida a las limitaciones de ambas técnicas en un problema de optimización combinatoria bien estudiado: el problema del vendedor viajero euclidiano mínimo (Min ETSP).
  > **Nota:** El problema del vendedor viajero es un problema NP-difícil clásico donde los MAs han tenido mucho éxito.

- En 1989, Moscato y Norman identificaron a varios autores que también estaban introduciendo heurísticas para mejorar las soluciones antes de recombinarlas.
  > **Nota:** Este fue el momento en que se reconoció que muchos investigadores estaban haciendo lo mismo: mejorar soluciones antes de combinarlas.

- En ese momento se introdujo por primera vez la denominación de "algoritmos meméticos".
  > **Nota:** El término fue introducido formalmente en 1989 por Moscato y Norman.

- También se sugirió que la evolución cultural puede ser una mejor metáfora de trabajo para estas metaheurísticas.
  > **Nota:** La metáfora cultural es mejor que la biológica porque permite incorporar conocimiento y mejora de soluciones.

---

## 2. CONCEPTOS BÁSICOS

### Guion

Un algoritmo es un procedimiento detallado paso a paso para resolver un problema computacional. Un problema computacional P denota una clase de tareas algorítmicamente realizables, y tiene un dominio de entrada de instancias denotado IP. Para cada instancia x ∈ IP, hay un conjunto asociado solP(x) que denota las soluciones factibles para el problema P dada la instancia x.

Se espera que entreguemos un algoritmo que resuelva el problema P; esto significa que nuestro algoritmo, dada una instancia x ∈ IP, debe devolver al menos un elemento y de un conjunto de respuestas ansP(x) que satisfaga los requisitos del problema.

Dependiendo del tipo de respuestas esperadas, los problemas computacionales pueden clasificarse en diferentes categorías:
- Encontrar todas las soluciones en solP(x), es decir, problemas de enumeración.
- Contar cuántas soluciones existen en solP(x), es decir, problemas de conteo.
- Determinar si el conjunto solP(x) está vacío o no, es decir, problemas de decisión.
- Encontrar una solución en solP(x) que maximice o minimice una función dada, es decir, problemas de optimización.

Nos enfocaremos en el último caso: un problema se considera resuelto encontrando una cierta solución factible, es decir, encontrando un óptimo y ∈ solP(x) o indicando que no existe tal solución factible.

Para identificar si una solución y ∈ ansP(x) es aceptable para una instancia x ∈ IP de un problema computacional P, es conveniente definir una función de factibilidad booleana feasibleP(x, y), que verifica si y ∈ solP(x).

Los problemas de optimización combinatoria constituyen una subclase especial de problemas computacionales en los que, para cada instancia x ∈ IP:
- La cardinalidad de solP(x) es finita.
- Cada solución y ∈ solP(x) tiene un valor de bondad entero mP(y, x), obtenido mediante una función objetivo asociada mP.
- Se define un orden parcial ≺P sobre el conjunto de valores de bondad devueltos por la función objetivo.

Una instancia x ∈ IP de un problema de optimización combinatoria P se resuelve encontrando la mejor solución y* ∈ solP(x), es decir, encontrando una solución y* tal que no existe otra solución y ≺P y*.

### Palabras clave
- **Algoritmo**: Procedimiento detallado paso a paso para resolver un problema computacional.
- **Problema computacional (P)**: Clase de tareas algorítmicamente realizables con un dominio de entrada y conjunto de soluciones.
- **Instancia (x)**: Caso específico del problema con valores concretos para sus parámetros.
- **Dominio de entrada (IP)**: Conjunto de todas las instancias posibles del problema.
- **Soluciones factibles (solP(x))**: Soluciones que cumplen con todas las restricciones del problema.
- **Conjunto de respuestas (ansP(x))**: Conjunto de todas las soluciones posibles (factibles o no).
- **Problemas de enumeración**: Problemas que requieren encontrar todas las soluciones posibles.
- **Problemas de conteo**: Problemas que requieren contar cuántas soluciones existen.
- **Problemas de decisión**: Problemas que determinan si existe al menos una solución que cumpla ciertas condiciones.
- **Problemas de optimización**: Problemas que buscan la mejor solución según una función objetivo.
- **Función de factibilidad (feasibleP(x, y))**: Función booleana que verifica si una solución es aceptable.
- **Optimización combinatoria**: Subclase de problemas con conjunto finito de soluciones y función objetivo.
- **Valor de bondad (mP(y, x))**: Valor numérico asignado a cada solución por la función objetivo.
- **Función objetivo (mP)**: Función que asigna un valor de bondad a cada solución.
- **Orden parcial (≺P)**: Relación que permite comparar soluciones y determinar cuál es preferible.
- **Solución óptima (y*)**: Mejor solución según el orden parcial definido.

### Notas por viñeta
- Un algoritmo es un procedimiento detallado paso a paso para resolver un problema computacional.
  > **Nota:** El paper enfatiza que debe ser "detallado" y "paso a paso". No puede haber ambigüedad.

- Un problema computacional P denota una clase de tareas algorítmicamente realizables, y tiene un dominio de entrada de instancias denotado IP.
  > **Nota:** El paper usa notación formal: P es el problema, IP es el conjunto de instancias. Esto es importante para la definición rigurosa.

- Para cada instancia x ∈ IP, hay un conjunto asociado solP(x) que denota las soluciones factibles para el problema P dada la instancia x.
  > **Nota:** solP(x) son solo las soluciones que cumplen las restricciones. No todas las soluciones en ansP(x) son factibles.

- Se espera que entreguemos un algoritmo que resuelva el problema P; esto significa que nuestro algoritmo, dada una instancia x ∈ IP, debe devolver al menos un elemento y de un conjunto de respuestas ansP(x) que satisfaga los requisitos del problema.
  > **Nota:** El algoritmo debe funcionar para CUALQUIERA instancia x ∈ IP, no solo para una específica.

- Dependiendo del tipo de respuestas esperadas, los problemas computacionales pueden clasificarse en diferentes categorías.
  > **Nota:** Esta clasificación es fundamental. Los MAs se enfocan en problemas de optimización.

- Encontrar todas las soluciones en solP(x), es decir, problemas de enumeración.
  > **Nota:** En enumeración, queremos TODAS las soluciones. Esto puede ser muy costoso computacionalmente.

- Contar cuántas soluciones existen en solP(x), es decir, problemas de conteo.
  > **Nota:** En conteo, solo importa CUÁNTAS soluciones hay, no cuáles son.

- Determinar si el conjunto solP(x) está vacío o no, es decir, problemas de decisión.
  > **Nota:** En decisión, solo queremos saber SI existe una solución que cumpla ciertas condiciones.

- Encontrar una solución en solP(x) que maximice o minimice una función dada, es decir, problemas de optimización.
  > **Nota:** Los MAs se enfocan aquí. Queremos la MEJOR solución, no todas las soluciones.

- Nos enfocaremos en el último caso: un problema se considera resuelto encontrando una cierta solución factible, es decir, encontrando un óptimo y ∈ solP(x) o indicando que no existe tal solución factible.
  > **Nota:** El paper aclara que "resuelto" significa encontrar la solución óptima, no cualquier solución.

- Para identificar si una solución y ∈ ansP(x) es aceptable para una instancia x ∈ IP de un problema computacional P, es conveniente definir una función de factibilidad booleana feasibleP(x, y).
  > **Nota:** Esta función es útil para verificar rápidamente si una solución cumple las restricciones.

- Los problemas de optimización combinatoria constituyen una subclase especial de problemas computacionales en los que, para cada instancia x ∈ IP.
  > **Nota:** El paper define "optimización combinatoria" como una subclase específica. No todos los problemas de optimización son combinatorios.

- La cardinalidad de solP(x) es finita.
  > **Nota:** El conjunto de soluciones factibles es finito. Esto es clave para la optimización combinatoria.

- Cada solución y ∈ solP(x) tiene un valor de bondad entero mP(y, x), obtenido mediante una función objetivo asociada mP.
  > **Nota:** El paper especifica que el valor de bondad es un entero. Esto simplifica la comparación de soluciones.

- Se define un orden parcial ≺P sobre el conjunto de valores de bondad devueltos por la función objetivo.
  > **Nota:** El orden parcial permite comparar soluciones. No siempre hay una comparación directa (por ejemplo, en problemas multiobjetivo).

- Una instancia x ∈ IP de un problema de optimización combinatoria P se resuelve encontrando la mejor solución y* ∈ solP(x), es decir, encontrando una solución y* tal que no existe otra solución y ≺P y*.
  > **Nota:** La solución óptima y* es aquella que no tiene ninguna solución mejor que ella según el orden parcial.

---

## 3. OPTIMIZACIÓN COMBINATORIA

### Guion

Para ilustrar la noción de optimización combinatoria, consideremos el problema de la mochila 0-1 múltiple (0-1 MKP). Cada instancia x de este problema está definida por un vector de ganancias V = {v0, ..., vn-1}, un vector de capacidades C = {c0, ..., cm-1}, y una matriz de restricciones de capacidad M = {mij : 0 ≤ i < m, 0 ≤ j < n}.

Intuitivamente, el problema consiste en seleccionar un conjunto de objetos de manera que se maximice la ganancia de este conjunto sin violar las restricciones de capacidad.

Si los objetos están indexados con los elementos del conjunto Nn = {0, 1, ..., n-1}, el conjunto de respuestas ansP(x) para una instancia x es simplemente el conjunto potencia de Nn, es decir, cada subconjunto de Nn es una respuesta posible.

Además, el conjunto de respuestas factibles solP(x) está compuesto por aquellos subconjuntos cuyo vector de incidencia B verifica M · B ≤ C. Finalmente, la función objetivo se define como mP(y, x) = Σi∈y vi, es decir, la suma de ganancias de todos los objetos seleccionados, siendo el objetivo maximizar este valor.

Es importante notar que, asociado con un problema de optimización combinatoria, podemos definir su versión de decisión. Para formular el problema de decisión, se considera un valor de bondad entero K, y en lugar de intentar encontrar la mejor solución de la instancia x, preguntamos si x tiene una solución cuya bondad sea igual o mejor que K.

En el ejemplo anterior, podríamos preguntar si existe una solución factible y cuya ganancia asociada sea igual o mejor que K.

### Palabras clave
- **0-1 Multiple Knapsack Problem (0-1 MKP)**: Problema clásico de optimización combinatoria donde se debe maximizar la ganancia sin exceder la capacidad de las mochilas.
- **Vector de ganancias (V)**: Conjunto de valores que representan la ganancia de cada objeto.
- **Vector de capacidades (C)**: Conjunto de valores que representan la capacidad máxima de cada mochila.
- **Matriz de restricciones (M)**: Matriz que define cuánto ocupa cada objeto en cada mochila.
- **Vector de incidencia (B)**: Representación binaria donde 1 indica que un objeto está seleccionado y 0 que no lo está.
- **Conjunto potencia**: Conjunto de todos los subconjuntos posibles de un conjunto dado.
- **Restricción de capacidad (M · B ≤ C)**: Condición que debe cumplir una solución para ser factible.
- **Función objetivo (mP(y, x))**: Función que calcula la ganancia total de una solución.
- **Ganancia total**: Suma de las ganancias de todos los objetos seleccionados.
- **Problema de decisión**: Versión de un problema que pregunta si existe una solución con bondad igual o mejor que un valor dado K.
- **Valor umbral (K)**: Valor de bondad que se usa en la versión de decisión del problema.

### Notas por viñeta
- Para ilustrar la noción de optimización combinatoria, consideremos el problema de la mochila 0-1 múltiple (0-1 MKP).
  > **Nota:** El paper usa este ejemplo porque es un problema NP-difícil clásico que ilustra bien los conceptos.

- Cada instancia x de este problema está definida por un vector de ganancias V = {v0, ..., vn-1}, un vector de capacidades C = {c0, ..., cm-1}, y una matriz de restricciones de capacidad M = {mij : 0 ≤ i < m, 0 ≤ j < n}.
  > **Nota:** El paper define matemáticamente los componentes del problema. V son las ganancias, C las capacidades, M las restricciones.

- Intuitivamente, el problema consiste en seleccionar un conjunto de objetos de manera que se maximice la ganancia de este conjunto sin violar las restricciones de capacidad.
  > **Nota:** La intuición es simple: queremos ganar lo máximo posible sin pasarnos del peso que soportan las mochilas.

- Si los objetos están indexados con los elementos del conjunto Nn = {0, 1, ..., n-1}, el conjunto de respuestas ansP(x) para una instancia x es simplemente el conjunto potencia de Nn, es decir, cada subconjunto de Nn es una respuesta posible.
  > **Nota:** El conjunto potencia tiene 2^n elementos. Para 30 objetos, serían más de mil millones de posibles soluciones.

- Además, el conjunto de respuestas factibles solP(x) está compuesto por aquellos subconjuntos cuyo vector de incidencia B verifica M · B ≤ C.
  > **Nota:** No todas las soluciones son factibles. Solo aquellas que no exceden la capacidad de ninguna mochila.

- Finalmente, la función objetivo se define como mP(y, x) = Σi∈y vi, es decir, la suma de ganancias de todos los objetos seleccionados, siendo el objetivo maximizar este valor.
  > **Nota:** La función objetivo es simplemente sumar las ganancias de los objetos seleccionados. Queremos maximizar esta suma.

- Es importante notar que, asociado con un problema de optimización combinatoria, podemos definir su versión de decisión.
  > **Nota:** La versión de decisión es útil para problemas de complejidad computacional. Pregunta SI existe una solución con bondad ≥ K.

- Para formular el problema de decisión, se considera un valor de bondad entero K, y en lugar de intentar encontrar la mejor solución de la instancia x, preguntamos si x tiene una solución cuya bondad sea igual o mejor que K.
  > **Nota:** Esta transformación es estándar en teoría de complejidad. Los problemas de decisión son más fáciles de analizar teóricamente.

- En el ejemplo anterior, podríamos preguntar si existe una solución factible y cuya ganancia asociada sea igual o mejor que K.
  > **Nota:** Por ejemplo, "¿Existe una selección de objetos que dé al menos 100 de ganancia sin exceder la capacidad?"

---

## 4. ESPACIO DE BÚSQUEDA Y PAISAJE DE FITNESS

### Guion

Habiendo definido el concepto de problema de optimización combinatoria, el objetivo es encontrar al menos una de las soluciones óptimas para una instancia dada. Para ello, se debe usar un algoritmo de búsqueda. Antes de discutir algoritmos de búsqueda, se deben discutir tres entidades: el espacio de búsqueda, la relación de vecindario y la función guía.

Es importante considerar que, para cualquier problema computacional dado, estas tres entidades pueden instanciarse de varias maneras, dando lugar a diferentes tareas de optimización.

El espacio de búsqueda S para un problema combinatorio P se define como un conjunto cuyos elementos tienen las siguientes propiedades:
- Cada elemento s ∈ S representa al menos una respuesta en ansP(x).
- Para problemas de decisión: al menos un elemento de solP(x) que representa una respuesta "Sí" debe ser representado por un elemento en S.
- Para problemas de optimización: al menos un elemento óptimo y* de solP(x) está representado por un elemento en S.

Cada elemento de S se denominará configuración, y está relacionado con una respuesta en ansP(x) mediante una función de crecimiento g: S → ansP(x).

La función de vecindario N: S → 2^S asigna a cada elemento s ∈ S un conjunto N(s) ⊆ S de configuraciones vecinas de s. Los elementos de N(s) no necesitan listarse explícitamente; usualmente se definen implícitamente mediante un conjunto de movimientos posibles.

Un rasgo importante es la "ergodicidad": la capacidad, dado cualquier s ∈ S, de encontrar una secuencia de movimientos que pueda alcanzar todas las demás configuraciones s' ∈ S. Esto garantiza que, al menos una solución óptima sea alcanzable desde cualquier solución inicial.

La función guía Fg: S → F asocia a cada configuración s ∈ S un valor Fg(s) que evalúa la calidad de la solución. El comportamiento del algoritmo de búsqueda será "controlado" por estos valores de fitness.

La combinación de una instancia de problema y las tres entidades definidas induce un llamado paisaje de fitness. Esencialmente, un paisaje de fitness se puede definir como un dígrafo ponderado, en el que los vértices son configuraciones del espacio de búsqueda S, y los arcos conectan configuraciones vecinas.

Los pesos son la diferencia de la función guía de las configuraciones extremo. La búsqueda se puede ver como el proceso de "navegar" el paisaje de fitness utilizando la información proporcionada por la función guía.

El óptimo local es un vértice del paisaje de fitness cuyo valor de función guía es mejor que los valores de todos sus vecinos. Diferentes movimientos definen diferentes vecindarios y por lo tanto diferentes paisajes de fitness.

### Palabras clave
- **Espacio de búsqueda (S)**: Conjunto de todas las configuraciones posibles del problema.
- **Configuración (s)**: Cada elemento del espacio de búsqueda.
- **Función de crecimiento (g)**: Función que mapea configuraciones a soluciones reales: g: S → ansP(x).
- **Relación de vecindario (N)**: Función que define las configuraciones vecinas: N: S → 2^S.
- **Vecindario (N(s))**: Conjunto de configuraciones vecinas alcanzables desde una configuración s.
- **Movimientos**: Modificaciones locales de una configuración que definen el vecindario.
- **Ergodicidad**: Capacidad de alcanzar cualquier configuración desde cualquier otra mediante movimientos.
- **Función guía (Fg)**: Función que evalúa la calidad de cada configuración: Fg: S → F.
- **Valores de fitness**: Valores asignados por la función guía a cada configuración.
- **Paisaje de fitness**: Dígrafo ponderado que combina espacio de búsqueda, vecindario y función guía.
- **Óptimo local**: Configuración cuya función guía es mejor que la de todos sus vecinos.
- **Genotype space**: Otro nombre para el espacio de búsqueda (usado en metáforas biológicas).
- **Phenotype space**: Espacio de soluciones reales ansP(x).
- **Distancia de Hamming**: Número de posiciones diferentes entre dos cadenas binarias.

### Notas por viñeta
- Habiendo definido el concepto de problema de optimización combinatoria, el objetivo es encontrar al menos una de las soluciones óptimas para una instancia dada.
  > **Nota:** El paper aclara que buscamos "al menos una" solución óptima, no necesariamente todas.

- Para ello, se debe usar un algoritmo de búsqueda. Antes de discutir algoritmos de búsqueda, se deben discutir tres entidades: el espacio de búsqueda, la relación de vecindario y la función guía.
  > **Nota:** Estas tres entidades son los componentes fundamentales de cualquier algoritmo de búsqueda.

- Es importante considerar que, para cualquier problema computacional dado, estas tres entidades pueden instanciarse de varias maneras, dando lugar a diferentes tareas de optimización.
  > **Nota:** La misma instancia del problema puede tener diferentes espacios de búsqueda, vecindarios y funciones guía.

- El espacio de búsqueda S para un problema combinatorio P se define como un conjunto cuyos elementos tienen las siguientes propiedades.
  > **Nota:** El paper define formalmente el espacio de búsqueda. No es solo el conjunto de soluciones factibles.

- Cada elemento s ∈ S representa al menos una respuesta en ansP(x).
  > **Nota:** Cada configuración debe representar al menos una solución posible (factible o no).

- Para problemas de decisión: al menos un elemento de solP(x) que representa una respuesta "Sí" debe ser representado por un elemento en S.
  > **Nota:** Si el problema tiene solución, debe haber una configuración que la represente.

- Para problemas de optimización: al menos un elemento óptimo y* de solP(x) está representado por un elemento en S.
  > **Nota:** La solución óptima debe estar representada en el espacio de búsqueda.

- Cada elemento de S se denominará configuración, y está relacionado con una respuesta en ansP(x) mediante una función de crecimiento g: S → ansP(x).
  > **Nota:** La función de crecimiento mapea configuraciones a soluciones. Puede ser una función simple o compleja.

- La función de vecindario N: S → 2^S asigna a cada elemento s ∈ S un conjunto N(s) ⊆ S de configuraciones vecinas de s.
  > **Nota:** El vecindario define qué configuraciones se pueden alcanzar desde una dada con un solo movimiento.

- Los elementos de N(s) no necesitan listarse explícitamente; usualmente se definen implícitamente mediante un conjunto de movimientos posibles.
  > **Nota:** Es más eficiente definir movimientos que listar todas las configuraciones vecinas.

- Un rasgo importante es la "ergodicidad": la capacidad, dado cualquier s ∈ S, de encontrar una secuencia de movimientos que pueda alcanzar todas las demás configuraciones s' ∈ S.
  > **Nota:** La ergodicidad garantiza que podemos llegar a cualquier solución desde cualquier punto de partida.

- Esto garantiza que, al menos una solución óptima sea alcanzable desde cualquier solución inicial.
  > **Nota:** Sin ergodicidad, podríamos quedar atrapados sin poder alcanzar la solución óptima.

- La función guía Fg: S → F asocia a cada configuración s ∈ S un valor Fg(s) que evalúa la calidad de la solución.
  > **Nota:** La función guía es como un "termostato" que nos dice qué tan buena es cada configuración.

- El comportamiento del algoritmo de búsqueda será "controlado" por estos valores de fitness.
  > **Nota:** Los valores de fitness guían la búsqueda hacia mejores configuraciones.

- La combinación de una instancia de problema y las tres entidades definidas induce un llamado paisaje de fitness.
  > **Nota:** El paisaje de fitness es una metáfora poderosa. Imagina montañas (máximos locales) y valles (mínimos locales).

- Esencialmente, un paisaje de fitness se puede definir como un dígrafo ponderado, en el que los vértices son configuraciones del espacio de búsqueda S, y los arcos conectan configuraciones vecinas.
  > **Nota:** El paper formaliza el paisaje de fitness como un grafo dirigido ponderado.

- Los pesos son la diferencia de la función guía de las configuraciones extremo.
  > **Nota:** Los pesos representan cuánto "sube" o "baja" la función guía al pasar de una configuración a otra.

- La búsqueda se puede ver como el proceso de "navegar" el paisaje de fitness utilizando la información proporcionada por la función guía.
  > **Nota:** Esta metáfora de navegación es muy intuitiva. Buscamos el pico más alto del paisaje.

- El óptimo local es un vértice del paisaje de fitness cuyo valor de función guía es mejor que los valores de todos sus vecinos.
  > **Nota:** Un óptimo local es como una montaña pequeña rodeada de valles. No es el pico más alto, pero es mejor que todo lo que está cerca.

- Diferentes movimientos definen diferentes vecindarios y por lo tanto diferentes paisajes de fitness.
  > **Nota:** El mismo problema puede tener muchos paisajes de fitness diferentes según el vecindario elegido.

---

## 5. BÚSQUEDA LOCAL VS. BÚSQUEDA BASADA EN POBLACIONES

### Guion

Las definiciones presentadas en la subsección anterior conducen naturalmente a la noción de algoritmo de búsqueda local. Un algoritmo de búsqueda local comienza con una configuración s0 ∈ S, generada al azar o construida por algún otro algoritmo. Posteriormente, itera usando en cada paso una transición basada en el vecindario de la configuración actual.

Las transiciones que conducen a configuraciones preferibles (según el orden parcial ≺F) son aceptadas, es decir, la configuración recién generada se convierte en la configuración actual en el siguiente paso. De lo contrario, se mantiene la configuración actual. Este proceso se repite hasta que se cumple un cierto criterio de terminación.

Debido a estas características, el enfoque se llama metafóricamente "hill climbing" (escalada de colinas).

La selección del tipo particular de movimientos (también conocidos como mutación en el contexto de GAs) depende de las características específicas del problema y la representación elegida. No hay un consejo general para esto.

La generalización inmediata de este comportamiento es el mantenimiento simultáneo de k, (k ≥ 2) configuraciones. El término algoritmos de búsqueda basados en poblaciones se ha acuñado para denotar técnicas de búsqueda que se comportan así.

La disponibilidad de varias configuraciones a la vez permite el uso de nuevos mecanismos poderosos para traversar el paisaje de fitness además del operador de mutación estándar. El más popular de estos mecanismos, el operador de recombinación, se estudiará con más profundidad en la siguiente sección.

### Palabras clave
- **Búsqueda local**: Algoritmo que mantiene una única configuración y la mejora mediante movimientos locales.
- **Hill climbing**: Nombre metafórico para la búsqueda local, referente a escalar colinas en el paisaje de fitness.
- **Mutación**: Operador que modifica una configuración para generar una nueva (en contexto de búsqueda local).
- **Criterio de terminación**: Condición que determina cuándo se detiene el algoritmo de búsqueda.
- **Búsqueda basada en poblaciones**: Técnicas que mantienen múltiples configuraciones simultáneamente.
- **Operador de recombinación**: Mecanismo que combina información de múltiples configuraciones para crear nuevas.
- **Población**: Conjunto de configuraciones que se mantienen y evolucionan simultáneamente.
- **Transición**: Movimiento de una configuración a otra en el espacio de búsqueda.
- **Configuración actual**: La configuración que el algoritmo está procesando en un momento dado.

### Notas por viñeta
- Las definiciones presentadas en la subsección anterior conducen naturalmente a la noción de algoritmo de búsqueda local.
  > **Nota:** La búsqueda local es la base de los MAs. Es el mecanismo fundamental de mejora.

- Un algoritmo de búsqueda local comienza con una configuración s0 ∈ S, generada al azar o construida por algún otro algoritmo.
  > **Nota:** La inicialización puede ser aleatoria o usar una heurística constructiva para empezar con una buena solución.

- Posteriormente, itera usando en cada paso una transición basada en el vecindario de la configuración actual.
  > **Nota:** En cada paso, el algoritmo genera una configuración vecina y decide si la acepta.

- Las transiciones que conducen a configuraciones preferibles (según el orden parcial ≺F) son aceptadas, es decir, la configuración recién generada se convierte en la configuración actual en el siguiente paso.
  > **Nota:** Solo aceptamos movimientos que mejoran la solución. Esto es greedy.

- De lo contrario, se mantiene la configuración actual. Este proceso se repite hasta que se cumple un cierto criterio de terminación.
  > **Nota:** Si el movimiento no mejora, lo descartamos y probamos otro. El criterio de terminación puede ser un número máximo de iteraciones.

- Debido a estas características, el enfoque se llama metafóricamente "hill climbing" (escalada de colinas).
  > **Nota:** La metáfora es: subimos la colina hasta llegar a la cima (un óptimo local).

- La selección del tipo particular de movimientos (también conocidos como mutación en el contexto de GAs) depende de las características específicas del problema y la representación elegida.
  > **Nota:** No hay una receta universal. Los movimientos dependen del problema específico.

- La generalización inmediata de este comportamiento es el mantenimiento simultáneo de k, (k ≥ 2) configuraciones.
  > **Nota:** En lugar de una solución, mantenemos varias soluciones simultáneamente.

- El término algoritmos de búsqueda basados en poblaciones se ha acuñado para denotar técnicas de búsqueda que se comportan así.
  > **Nota:** Los MAs son algoritmos de búsqueda basados en poblaciones con búsqueda local.

- La disponibilidad de varias configuraciones a la vez permite el uso de nuevos mecanismos poderosos para traversar el paisaje de fitness además del operador de mutación estándar.
  > **Nota:** Con múltiples soluciones, podemos combinarlas para crear mejores soluciones.

- El más popular de estos mecanismos, el operador de recombinación, se estudiará con más profundidad en la siguiente sección.
  > **Nota:** La recombinación es el otro operador fundamental de los MAs, junto con la mutación.

---

## 6. DISEÑO DE UN ALGORITMO MEMÉTICO

### Guion

A la luz de las consideraciones anteriores, es posible proporcionar una plantilla general para un algoritmo memético. Esta plantilla es muy similar a la de un procedimiento de búsqueda local actuando sobre un conjunto de |pop| ≥ 2 configuraciones.

El procedimiento GenerateInitialPopulation es responsable de crear el conjunto inicial de |pop| configuraciones. Esto se puede hacer generando simplemente |pop| configuraciones aleatorias o usando un mecanismo de semillado más sofisticado, por ejemplo, alguna heurística constructiva, mediante la cual se inyectan configuraciones de alta calidad en la población inicial.

Otra posibilidad es usar el Local-Search-Engine para inyectar soluciones de alta calidad en la población inicial.

En cuanto a la función TerminationCriterion, se puede definir de manera muy similar al caso de Búsqueda Local, es decir, estableciendo un límite en el número total de iteraciones, alcanzando un número máximo de iteraciones sin mejora, o habiendo realizado un cierto número de reinicios de población, etc.

El procedimiento GenerateNewPopulation es el núcleo del algoritmo memético. Esencialmente, este procedimiento se puede ver como un proceso en pipeline que comprende nop etapas. Cada una de estas etapas consiste en tomar arityin_j configuraciones de la etapa anterior, generando arityout_j nuevas configuraciones aplicando un operador opj.

En los algoritmos genéticos tradicionales, nop = 3, usando un operador de selección, un operador de recombinación y un operador de mutación. Tradicionalmente, la mutación se aplica después de la recombinación.

En los MAs, es muy común dejar nop = 5, insertando un Local-Search-Engine justo después de aplicar op2 y op4 (recombinación y mutación, respectivamente). Debido a la optimización local realizada después de la mutación, aplicar la última después de la recombinación no es tan problemática como en los GAs.

El procedimiento UpdatePopulation se usa para reconstruir la población actual usando la población antigua pop y la población recién generada newpop. Existen dos posibilidades principales: la estrategia plus y la estrategia comma. En la primera, la población actual se construye tomando las mejores popsize configuraciones de pop ∪ newpop. En la segunda, las mejores popsize configuraciones se toman solo de newpop.

La última componente es el procedimiento de reinicio. Primero, se debe decidir si la población se ha degradado o no. Para ello, se puede usar alguna medida de diversidad de información en la población, como la entropía de Shannon. Si esta medida cae por debajo de un umbral predefinido, la población se considera en un estado degradado.

Una vez que se considera que la población está en un estado degradado, se invoca el procedimiento de reinicio. Una estrategia muy típica es mantener una fracción de la población actual y sustituir las configuraciones restantes con soluciones generadas desde cero.

### Palabras clave
- **Plantilla de algoritmo memético**: Estructura general que define cómo funciona un MA.
- **GenerateInitialPopulation**: Procedimiento que crea la población inicial de configuraciones.
- **Semillado (seeding)**: Mecanismo para inyectar soluciones de alta calidad en la población inicial.
- **Heurística constructiva**: Algoritmo que construye soluciones de manera incremental y greedy.
- **TerminationCriterion**: Criterio que determina cuándo se detiene el algoritmo.
- **GenerateNewPopulation**: Procedimiento central que genera una nueva población a partir de la actual.
- **Pipeline**: Proceso de etapas sucesivas donde cada etapa aplica un operador.
- **Operador de selección**: Mecanismo que elige qué configuraciones serán padres.
- **Operador de recombinación**: Mecanismo que combina información de múltiples padres.
- **Operador de mutación**: Mecanismo que modifica una configuración para introducir diversidad.
- **Local-Search-Engine**: Algoritmo de búsqueda local que mejora configuraciones individualmente.
- **Estrategia plus**: Método de actualización que toma las mejores configuraciones de pop ∪ newpop.
- **Estrategia comma**: Método de actualización que toma las mejores configuraciones solo de newpop.
- **Diversidad de población**: Medida de cuán diferentes son las configuraciones en la población.
- **Entropía de Shannon**: Medida de diversidad basada en la distribución de características.
- **Procedimiento de reinicio**: Mecanismo que reinitializa la población cuando se degrada.
- **Convergencia prematura**: Situación donde todas las configuraciones se vuelven muy similares.
- **Presión selectiva**: Fuerza que favorece las mejores configuraciones sobre las peores.
- **random-immigrant strategy**: Estrategia de reinicio que agrega nuevas soluciones aleatorias.

### Notas por viñeta
- A la luz de las consideraciones anteriores, es posible proporcionar una plantilla general para un algoritmo memético.
  > **Nota:** El paper presenta una plantilla genérica que puede instanciarse de muchas maneras para diferentes problemas.

- Esta plantilla es muy similar a la de un procedimiento de búsqueda local actuando sobre un conjunto de |pop| ≥ 2 configuraciones.
  > **Nota:** La diferencia clave es que los MAs mantienen múltiples configuraciones, no solo una.

- El procedimiento GenerateInitialPopulation es responsable de crear el conjunto inicial de |pop| configuraciones.
  > **Nota:** La calidad de la población inicial puede afectar significativamente el rendimiento del algoritmo.

- Esto se puede hacer generando simplemente |pop| configuraciones aleatorias o usando un mecanismo de semillado más sofisticado, por ejemplo, alguna heurística constructiva, mediante la cual se inyectan configuraciones de alta calidad en la población inicial.
  > **Nota:** El semillado es importante. Empezar con buenas soluciones puede acelerar la convergencia.

- Otra posibilidad es usar el Local-Search-Engine para inyectar soluciones de alta calidad en la población inicial.
  > **Nota:** Aplicar búsqueda local a la población inicial mejora la calidad desde el inicio.

- En cuanto a la función TerminationCriterion, se puede definir de manera muy similar al caso de Búsqueda Local.
  > **Nota:** Los criterios comunes son: número máximo de iteraciones, iteraciones sin mejora, o reinicios de población.

- El procedimiento GenerateNewPopulation es el núcleo del algoritmo memético.
  > **Nota:** Aquí es donde ocurre la magia: selección, recombinación, mutación y búsqueda local.

- Esencialmente, este procedimiento se puede ver como un proceso en pipeline que comprende nop etapas.
  > **Nota:** El pipeline permite combinar múltiples operadores de manera modular.

- En los algoritmos genéticos tradicionales, nop = 3, usando un operador de selección, un operador de recombinación y un operador de mutación.
  > **Nota:** Los GAs usan selección → recombinación → mutación. Los MAs agregan búsqueda local.

- En los MAs, es muy común dejar nop = 5, insertando un Local-Search-Engine justo después de aplicar op2 y op4 (recombinación y mutación, respectivamente).
  > **Nota:** Los MAs agregan búsqueda local después de recombinación y mutación. Esto es lo que los hace "meméticos".

- Debido a la optimización local realizada después de la mutación, aplicar la última después de la recombinación no es tan problemática como en los GAs.
  > **Nota:** En los GAs, la mutación después de recombinación puede ser problemática. En los MAs, la búsqueda local mitiga esto.

- El procedimiento UpdatePopulation se usa para reconstruir la población actual usando la población antigua pop y la población recién generada newpop.
  > **Nota:** Hay diferentes estrategias para actualizar la población, cada una con ventajas y desventajas.

- Existen dos posibilidades principales: la estrategia plus y la estrategia comma.
  > **Nota:** La estrategia plus es más conservadora (mantiene lo mejor de ambas). La comma es más exploratoria.

- En la primera, la población actual se construye tomando las mejores popsize configuraciones de pop ∪ newpop.
  > **Nota:** La estrategia plus puede causar convergencia prematura si no se maneja bien.

- En la segunda, las mejores popsize configuraciones se toman solo de newpop.
  > **Nota:** La estrategia comma requiere que newpop sea más grande que popsize para mantener presión selectiva.

- La última componente es el procedimiento de reinicio.
  > **Nota:** El reinicio es crucial para evitar quedar atrapado en óptimos locales.

- Primero, se debe decidir si la población se ha degradado o no. Para ello, se puede usar alguna medida de diversidad de información en la población, como la entropía de Shannon.
  > **Nota:** La entropía de Shannon mide cuánta información hay en la distribución de características de la población.

- Si esta medida cae por debajo de un umbral predefinido, la población se considera en un estado degradado.
  > **Nota:** Un estado degradado significa que todas las configuraciones son muy similares y la búsqueda se ha estancado.

- Una vez que se considera que la población está en un estado degradado, se invoca el procedimiento de reinicio.
  > **Nota:** El reinicio introduce diversidad para explorar nuevas regiones del espacio de búsqueda.

- Una estrategia muy típica es mantener una fracción de la población actual y sustituir las configuraciones restantes con soluciones generadas desde cero.
  > **Nota:** Esta es la "random-immigrant strategy". Se mantiene lo mejor y se agrega diversidad.
