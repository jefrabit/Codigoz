# Guía de Contenido — Participante 2
**Tema:** Algoritmos Meméticos — Fundamentos Teóricos, Historia y Conceptos Básicos  
**Tiempo estimado:** 5 minutos (~40-50 s por diapositiva)  
**Fuente:** Moscato, P. & Cotta, C. — *A Gentle Introduction to Memetic Algorithms*

---

## Diapositiva 1: Fundamentos Teóricos — No Free Lunch Theorem

**Elementos visuales sugeridos:**
- **Teorema de No Free Lunch:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/No_free_lunch_theorem.svg/330px-No_free_lunch_theorem.svg.png`
  - Fuente: Wikimedia Commons
- **Efectos del NFL:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/4/45/Effects_of_NFL_Therorem.PNG/330px-Effects_of_NFL_Therorem.PNG`
  - Fuente: Wikimedia Commons
- **Descripción:** Diagramas que ilustran el teorema y sus implicancias

**Contenido de la diapositiva (viñetas):**
- Hart y Belew establecieron que un algoritmo de búsqueda rinde **en proporción a la cantidad y calidad del conocimiento** del problema que incorpora
- Wolpert y Macready (1997) lo popularizaron como el **Teorema de No-Free-Lunch (NFL)**
- El NFL implica: no existe un algoritmo universalmente superior; sin conocimiento del problema, todos rinden igual en promedio
- Este resultado teórico **respalda directamente** la filosofía de los MAs de explotar el conocimiento del dominio

**Guion del expositor:**
> Los fundamentos teóricos de los MAs se sustentan en el Teorema de No-Free-Lunch. Hart y Belew fueron los primeros en establecer que un algoritmo de búsqueda rinde estrictamente en función de la cantidad y calidad del conocimiento del problema que incorpora. Más tarde, Wolpert y Macready popularizaron esta idea en 1997 bajo el nombre del Teorema de No-Free-Lunch, o "No hay almuerzo gratis". Lo que este teorema nos dice es que no existe un algoritmo de búsqueda que sea universalmente superior a todos los demás: sin conocimiento del problema, todos los algoritmos rinden igual en promedio. Este resultado teórico respalda directamente la filosofía de los MAs, que desde su concepción se diseñaron para explotar al máximo el conocimiento específico del dominio.

---

## Diapositiva 2: Evolución Histórica

**Elementos visuales sugeridos:**
- **Línea de tiempo:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/3/3c/Evolutionary_Algorithm.svg/330px-Evolutionary_Algorithm.svg.png`
  - Fuente: Wikimedia Commons
- **Descripción:** Diagrama que muestra la evolución de los algoritmos evolutivos

**Contenido de la diapositiva (viñetas):**
- **1988:** Moscato y Norman crean un híbrido de GA + Recocido Simulado (SA) para el Problema del Viajante Euclidiano
- Los agentes se organizaban en una **red toroidal bidimensional**, anticipando los "modelos de islas"
- **1989:** Moscato acuña formalmente el término **"Algoritmo Memético"**, proponiendo la evolución cultural como metáfora
- Durante la década de 1990, los MAs se consolidaron como metaheurística importante

**Guion del expositor:**
> Veamos la evolución histórica de los MAs. En 1988, Moscato y Norman desarrollaron uno de los primeros algoritmos que recibiría la etiqueta de memético. Era un híbrido que combinaba Algoritmos Genéticos con Recocido Simulado, y lo aplicaron al Problema del Viajante Euclidiano. Una innovación clave fue la estructuración espacial: los agentes se organizaban en una topología de red toroidal bidimensional, lo que anticipó los llamados "modelos de islas". Solo un año después, en 1989, Moscato introdujo formalmente el nombre de "Algoritmo Memético", sugiriendo que la evolución cultural es una metáfora más adecuada que la biológica. Durante los años 90, los MAs se consolidaron como una metaheurística importante con éxitos en problemas NP-hard clásicos.

---

## Diapositiva 3: Conceptos Básicos — Algoritmos y Problemas

**Elementos visuales sugeridos:**
- **Diagrama de algoritmo evolutivo:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/5/58/Evolutionary_algorithm.svg/250px-Evolutionary_algorithm.svg.png`
  - Fuente: Wikimedia Commons
- **Descripción:** Diagrama que muestra el flujo de un algoritmo

**Contenido de la diapositiva (viñetas):**
- Un **algoritmo** es un procedimiento detallado paso a paso para resolver un problema computacional
- Un **problema computacional** P tiene un dominio de entrada IP y un conjunto de soluciones solP(x)
- Los **problemas de optimización combinatoria** buscan encontrar la mejor solución y^* ∈ solP(x)
- Tipos de problemas: enumeración, conteo, decisión y optimización

**Guion del expositor:**
> Comencemos con los conceptos básicos. Un algoritmo es un procedimiento detallado paso a paso para resolver un problema computacional. Cada problema P tiene un conjunto de instancias IP y para cada instancia x, existe un conjunto de soluciones solP(x). Los problemas se clasifican en: enumeración (encontrar todas las soluciones), conteo (contar cuántas existen), decisión (determinar si la solución existe) y optimización (encontrar la mejor solución). Nos enfocaremos en problemas de optimización combinatoria, donde el objetivo es encontrar la mejor solución que maximice o minimice una función objetivo.

---

## Diapositiva 4: Optimización Combinatoria — Ejemplo MKP

**Elementos visuales sugeridos:**
- **Problema de la Mochila (Knapsack):**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/6/68/Knapsack_Problem_Illustration.svg/250px-Knapsack_Problem_Illustration.svg.png`
  - Fuente: Wikimedia Commons
- **Descripción:** Ilustración del problema de la mochila

**Contenido de la diapositiva (viñetas):**
- En optimización combinatoria, el cardinal de solP(x) es finito
- Cada solución tiene un **valor de bondad** mP(y, x) mediante una función objetivo
- Se define un **orden parcial** ≺P sobre los valores de bondad
- Ejemplo: **0-1 Multiple Knapsack Problem** — maximizar ganancia sin violar restricciones

**Guion del expositor:**
> Los problemas de optimización combinatoria tienen características específicas: el conjunto de soluciones es finito, cada solución tiene un valor de bondad obtenido por una función objetivo, y existe un orden parcial que permite determinar qué solución es preferible. Un ejemplo clásico es el 0-1 Multiple Knapsack Problem, donde debemos seleccionar un conjunto de objetos para maximizar la ganancia total sin violar las restricciones de capacidad de múltiples mochilas. Cada subconjunto de objetos es una posible solución, y la función objetivo suma las ganancias de los objetos seleccionados.

---

## Diapositiva 5: Espacio de Búsqueda

**Elementos visuales sugeridos:**
- **Espacio de búsqueda:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/a/af/Search_space.svg/250px-Search_space.svg.png`
  - Fuente: Wikimedia Commons
- **Descripción:** Diagrama que muestra el concepto de espacio de búsqueda

**Contenido de la diapositiva (viñetas):**
- El **espacio de búsqueda** S es el conjunto de configuraciones que representan soluciones
- La **función de crecimiento** g mapea configuraciones a soluciones ansP(x)
- Cada elemento s ∈ S se denomina **configuración**
- Una **representación válida** garantiza que al menos una solución óptima esté representada

**Guion del expositor:**
> El espacio de búsqueda es fundamental para entender los algoritmos de búsqueda. Es el conjunto S de configuraciones que representan soluciones al problema. La función de crecimiento g mapea cada configuración a una solución en ansP(x). Cada elemento del espacio de búsqueda se denomina configuración. Para que una representación sea válida, debe garantizar que al menos una solución óptima esté representada en el espacio de búsqueda. En el caso del MKP, podemos usar vectores binarios donde cada posición indica si un objeto está seleccionado o no.

---

## Diapositiva 6: Vecindario y Ergodicidad

**Elementos visuales sugeridos:**
- **Máximo local:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/7/7e/Local_maximum.png`
  - Fuente: Wikimedia Commons
- **Operador 2-opt:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/6/62/2-opt_wiki.png/250px-2-opt_wiki.png`
  - Fuente: Wikimedia Commons
- **Descripción:** Visualización de vecindario y operadores de búsqueda

**Contenido de la diapositiva (viñetas):**
- El **vecindario** N(s) define las configuraciones vecinas alcanzables por movimientos locales
- Los **movimientos** son modificaciones locales de una configuración
- La **ergodicidad** garantiza que cualquier configuración sea alcanzable desde cualquier otra
- Diferentes movimientos definen diferentes vecindarios y paisajes de fitness

**Guion del expositor:**
> El vecindario N(s) es crucial para la búsqueda local. Define qué configuraciones son alcanzables desde s mediante movimientos locales, que son modificaciones de alguna parte de la configuración. La ergodicidad es la propiedad que garantiza que, dado cualquier par de configuraciones, exista una secuencia de movimientos que conecte una con otra. Esto es importante porque asegura que al menos una solución óptima sea accesible desde cualquier punto de partida. Diferentes tipos de movimientos definen diferentes vecindarios, y por lo tanto, diferentes paisajes de fitness.

---

## Diapositiva 7: Fitness Landscape

**Elementos visuales sugeridos:**
- **Región factible:**
  - URL: `https://upload.wikimedia.org/wikipedia/commons/thumb/c/c0/Feasible_region.jpg/330px-Feasible_region.jpg`
  - Fuente: Wikimedia Commons
- **Descripción:** Representación visual de un paisaje de fitness

**Contenido de la diapositiva (viñetas):**
- La **función guía** Fg asocia a cada configuración un valor que evalúa su calidad
- El **fitness landscape** combina espacio de búsqueda, vecindario y función guía
- Se interpreta como un grafo ponderado con vértices (configuraciones) y arcos (vecinos)
- Los **óptimos locales** son configuraciones mejores que todos sus vecinos

**Guion del expositor:**
> La función guía Fg evalúa la calidad de cada configuración en el espacio de búsqueda. La combinación del espacio de búsqueda, vecindario y función guía crea el fitness landscape, que puede visualizarse como un terreno tridimensional con picos (óptimos), valles y mesas. Un óptimo local es una configuración cuyo valor de fitness es mejor que el de todos sus vecinos. Es importante notar que diferentes movimientos definen diferentes vecindarios y por lo tanto diferentes paisajes de fitness, incluso para el mismo problema. Esta metáfora topográfica es muy útil para visualizar el progreso de la búsqueda.

---

## Diapositiva 8: Resumen y Transición

**Elementos visuales sugeridos:**
- **Recuadro de resumen:**
  - ✓ NFL respalda la incorporación de conocimiento
  - ✓ Surgieron 1988-1989 como híbridos GA + SA
  - ✓ Conceptos: espacio de búsqueda, vecindario, fitness landscape
  - ✓ Ergodicidad garantiza accesibilidad
- **Flecha de transición:** Indicando continuidad hacia la siguiente presentación

**Contenido de la diapositiva (viñetas):**
- El **Teorema NFL** respalda teóricamente la incorporación de conocimiento del problema
- Los MAs surgieron en **1988-1989** como híbridos que superaron limitaciones de GAs y SA
- Los **conceptos básicos** incluyen espacio de búsqueda, vecindario, función guía y ergodicidad
- El **fitness landscape** permite visualizar el proceso de búsqueda como navegación en un terreno
- A continuación, veremos la búsqueda local, búsqueda basada en población y recombinación...

**Guion del expositor:**
> Para resumir: el Teorema de No-Free-Lunch nos da el respaldo teórico para incorporar conocimiento del problema en los algoritmos. Los MAs surgieron en 1988-1989 como híbridos inteligentes. Los conceptos básicos como espacio de búsqueda, vecindario, función guía y ergodicidad son fundamentales para entender cómo funcionan estos algoritmos. El fitness landscape nos permite visualizar la búsqueda como la navegación de un terreno con picos y valles. Ahora, mi compañero les explicará los detalles de la búsqueda local, la búsqueda basada en población y el operador de recombinación.

---

## Recursos para imágenes y elementos visuales

### Imágenes verificadas de Wikimedia Commons (todas funcionan):

1. **Teorema de No Free Lunch:**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/No_free_lunch_theorem.svg/330px-No_free_lunch_theorem.svg.png`

2. **Efectos del NFL:**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/4/45/Effects_of_NFL_Therorem.PNG/330px-Effects_of_NFL_Therorem.PNG`

3. **Algoritmo Evolutivo (diagrama):**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/3/3c/Evolutionary_Algorithm.svg/330px-Evolutionary_Algorithm.svg.png`

4. **Algoritmo Evolutivo (variante):**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/5/58/Evolutionary_algorithm.svg/250px-Evolutionary_algorithm.svg.png`

5. **Knapsack (Mochila):**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/6/68/Knapsack_Problem_Illustration.svg/250px-Knapsack_Problem_Illustration.svg.png`

6. **Espacio de búsqueda:**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/a/af/Search_space.svg/250px-Search_space.svg.png`

7. **Máximo local:**
   - `https://upload.wikimedia.org/wikipedia/commons/7/7e/Local_maximum.png`

8. **Operador 2-opt:**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/6/62/2-opt_wiki.png/250px-2-opt_wiki.png`

9. **Región factible:**
   - `https://upload.wikimedia.org/wikipedia/commons/thumb/c/c0/Feasible_region.jpg/330px-Feasible_region.jpg`

### Notas para la presentación:
- Todas las imágenes son de Wikimedia Commons (Creative Commons)
- Citar la fuente al pie de cada imagen
- Usar máximo 3-4 imágenes por diapositiva
- Mantener estilo visual consistente
