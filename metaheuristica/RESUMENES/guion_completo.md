# Guion por Diapositiva — Algoritmos Meméticos
**Basado en:** A Gentle Introduction to Memetic Algorithms

---

## Diapositiva 1: Portada

**No requiere guion.**

---

## Diapositiva 2: Introducción

**Palabras clave:** Algoritmos Meméticos, metaheurísticas, introducción

**Viñetas:**
- Título: Algoritmos Meméticos

**Guion:**
> Hoy hablaremos sobre los Algoritmos Meméticos, una clase de metaheurísticas muy poderosas para resolver problemas de optimización difíciles.

---

## Diapositiva 3: ¿Qué son los Algoritmos Meméticos?

**Palabras clave:** metaheurísticas, población de agentes, optimización NP, conocimiento del dominio

**Viñetas:**
- Los algoritmos meméticos (AMs) abarcan una amplia clase de metaheurísticas diseñadas para guiar una heurística subyacente
- Se basa en una población de agentes y tiene un gran éxito demostrable en problemas de optimización NP
- A diferencia del Computo Evolutivo tradicional, los AMs buscan específicamente explotar todo el conocimiento disponible sobre el problema

**Guion por viñeta:**

**Viñeta 1:** "Los AMs abarcan una amplia clase de metaheurísticas..."
> Los Algoritmos Meméticos son una clase amplia de metaheurísticas. Esto significa que son métodos de propósito general, no diseñados para un solo problema, sino que pueden guiarse para resolver muchos tipos diferentes de problemas difíciles.

**Viñeta 2:** "Se basa en una población de agentes..."
> Funcionan con una población de agentes, es decir, múltiples soluciones que evolucionan al mismo tiempo. Han demostrado ser muy efectivos para resolver problemas de optimización NP, que son aquellos que no se pueden resolver de manera exacta en tiempo razonable.

**Viñeta 3:** "A diferencia del Computo Evolutivo tradicional..."
> Lo que los distingue de los métodos tradicionales es que no tratan el conocimiento del problema como algo opcional. Los MAs incorporan todo el conocimiento disponible del dominio como parte fundamental de su diseño.

---

## Diapositiva 4: Origen del término "Meme"

**Palabras clave:** Dawkins, The Selfish Gene, meme, evolución cultural, imitación

**Viñetas:**
- El término fue acuñado por R. Dawkins en su famoso libro "El Gen Egoísta" (1976)
- Así como los genes se propagan saltando de cuerpo a cuerpo... los memes se propagan saltando de cerebro en cerebro mediante un proceso de imitación

**Guion por viñeta:**

**Viñeta 1:** "El término fue acuñado por R. Dawkins..."
> El término "meme" fue acuñado por el biólogo Richard Dawkins en 1976 en su famoso libro *The Selfish Gene*. Dawkins propuso el meme como un análogo al gen, pero en el ámbito de la evolución cultural en lugar de la biológica.

**Viñeta 2:** "Así como los genes se propagan..."
> Para Dawkins, los memes son unidades de información cultural: melodías, ideas, frases célebres, modas. Y así como los genes se propagan de cuerpo en cuerpo, los memes se propagan de cerebro a cerebro mediante un proceso que podemos llamar imitación.

---

## Diapositiva 5: Evolución Biológica vs. Cultural

**Palabras clave:** genes, memes, transmisión de información, procesamiento, mejora

**Viñetas:**
- Evolución Biológica (Genes): La información genética se transmite biológicamente de manera casi inalterada
- Evolución Cultural (Memes): La información no viaja inalterada. Es procesada, adaptada y mejorada activamente

**Guion por viñeta:**

**Viñeta 1:** "Evolución Biológica (Genes)..."
> En la evolución biológica, los genes se copian casi tal cual de un individuo a otro. La información genética se transmite sin cambios significativos. Este es el modelo que usan los Algoritmos Genéticos tradicionales.

**Viñeta 2:** "Evolución Cultural (Memes)..."
> Pero en la evolución cultural, la información no se copia tal cual. Se procesa, se adapta y se mejora activamente por los individuos. Los Algoritmos Meméticos emulan este proceso avanzado: cuando una solución se transmite de un agente a otro, no solo se copia sino que se enriquece con heurísticas y búsqueda local.

---

## Diapositiva 6: Filosofía de Funcionamiento

**Palabras clave:** cooperación, competencia, mejora local, sinergia, estrategia de búsqueda

**Viñetas:**
- Agentes en cooperación: una población de agentes optimizadores interactúan, cooperan y compiten
- Mejora local: las soluciones se perfeccionan localmente con heurísticas y métodos especializados
- Sinergia de búsqueda: el éxito proviene de la combinación de múltiples estrategias

**Guion por viñeta:**

**Viñeta 1:** "Agentes en cooperación..."
> Los MAs se interpretan como una estrategia de búsqueda donde una población de agentes optimizadores no solo compiten, sino que también cooperan entre sí para encontrar mejores soluciones.

**Viñeta 2:** "Mejora local..."
> Cada solución se perfecciona localmente incorporando heurísticas específicas del problema, algoritmos de aproximación y métodos especializados para refinar el conocimiento adquirido.

**Viñeta 3:** "Sinergia de búsqueda..."
> El éxito de los MAs se explica por la sinergia que surge al combinar diferentes estrategias de exploración global y explotación de datos. No es que un solo método sea superior, sino que la combinación inteligente produce mejores resultados.

---

## Diapositiva 7: Fundamentos Teóricos

**Palabras clave:** No-Free-Lunch, Hart y Belew, Wolpert y Macready, conocimiento del problema, hibridación

**Viñetas:**
- Hart y Belew: rendimiento depende del conocimiento del problema
- Wolpert y Macready (1997): Popularizaron el NFL
- NFL: no existe algoritmo universalmente superior
- Sin conocimiento todos rinden igual

**Guion por viñeta:**

**Viñeta 1:** "Hart y Belew: rendimiento depende del conocimiento..."
> Hart y Belew fueron los primeros en demostrar que el rendimiento de un algoritmo de búsqueda depende directamente de la cantidad y calidad del conocimiento del problema que incorpora. Sin conocimiento, el rendimiento es igual para todos.

**Viñeta 2:** "Wolpert y Macready (1997)..."
> Wolpert y Macready popularizaron esta idea en 1997 bajo el nombre del Teorema de No-Free-Lunch, publicándolo en IEEE Transactions on Evolutionary Computation.

**Viñeta 3:** "NFL: no existe algoritmo universalmente superior..."
> El NFL nos dice que no existe un algoritmo de búsqueda que sea universalmente superior a todos los demás. Sin conocimiento del problema, todos los algoritmos rinden igual en promedio.

**Viñeta 4:** "Sin conocimiento todos rinden igual..."
> Este resultado teórico respalda directamente la filosofía de los MAs, que desde su concepción se diseñaron para explotar al máximo el conocimiento específico del dominio.

---

## Diapositiva 8: Línea de Tiempo

**Palabras clave:** 1976, 1988, 1989, 1990s, 2003, Dawkins, Moscato, Norman

**Viñetas:**
- 1976: Dawkins acuña "meme" en The Selfish Gene
- 1988: Moscato y Norman crean híbrido GA + SA
- 1989: Moscato acuña "Algoritmo Memético"
- 1990s: Consolidación como metaheurística
- 2003: Publicación de "A Gentle Introduction"

**Guion por viñeta:**

**Viñeta 1:** "1976: Dawkins acuña 'meme'..."
> La historia comienza en 1976, cuando Richard Dawkins publicó *The Selfish Gene* y acuñó el término "meme" como unidad de evolución cultural.

**Viñeta 2:** "1988: Moscato y Norman crean híbrido GA + SA..."
> En 1988, Moscato y Norman desarrollaron uno de los primeros algoritmos meméticos. Era un híbrido que combinaba Algoritmos Genéticos con Recocido Simulado, aplicado al Problema del Viajante Euclidiano.

**Viñeta 3:** "1989: Moscato acuña 'Algoritmo Memético'..."
> En 1989, Moscato formalizó el término "Algoritmo Memético", proponiendo que la evolución cultural es una metáfora más adecuada que la biológica para estos algoritmos.

**Viñeta 4:** "1990s: Consolidación..."
> Durante los años 90, los MAs crecieron rápidamente y se consolidaron como una de las metaheurísticas más importantes y efectivas.

**Viñeta 5:** "2003: Publicación..."
> En 2003 se publicó "A Gentle Introduction to Memetic Algorithms", el artículo que estamos estudiando.

---

## Diapositiva 9: Hitos

**Palabras clave:** primer MA, red toroidal, modelos de islas, estructuración espacial

**Viñetas:**
- Primer algoritmo memético (1988)
- Red toroidal bidimensional
- Modelos de islas

**Guion por viñeta:**

**Viñeta 1:** "Primer algoritmo memético..."
> El primer algoritmo memético data de 1988 y fue considerado un híbrido de AGs y Recocido Simulado.

**Viñeta 2:** "Red toroidal bidimensional..."
> Los agentes se organizaban en una topología de red toroidal bidimensional, donde cada uno se conectaba con sus vecinos en una estructura de malla circular.

**Viñeta 3:** "Modelos de islas..."
> Esta estructura anticipó los llamados "modelos de islas" que se usan mucho hoy en día en algoritmos evolutivos paralelos.

---

## Diapositiva 10: Conceptos Básicos

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
> Un algoritmo es un procedimiento detallado paso a paso para resolver un problema computacional. Es como una receta de cocina: tiene instrucciones claras que nos llevan al resultado.

**Viñeta 2:** "Problema computacional..."
> Un problema computacional tiene un dominio de entrada con instancias (casos específicos) y un conjunto de soluciones para cada instancia.

**Viñeta 3:** "Una instancia es un caso específico..."
> Una instancia es un caso particular del problema. Por ejemplo, si el problema es ordenar una lista, cada lista particular es una instancia.

**Viñeta 4:** "Soluciones factibles..."
> Las soluciones factibles son aquellas que cumplen con todas las restricciones del problema. No toda solución posible es aceptable.

**Viñeta 5:** "Tipos: enumeración, conteo, decisión y optimización..."
> Los problemas se clasifican en enumeración (encontrar todas), conteo (contar cuántas), decisión (sí o no) y optimización (encontrar la mejor).

**Viñeta 6:** "Los MAs se enfocan en optimización combinatoria..."
> Los MAs se enfocan en optimización combinatoria, donde buscamos la mejor solución posible dentro de un conjunto finito.

---

## Diapositiva 11: Optimización Combinatoria

**Palabras clave:** cardinalidad finita, función objetivo, valor de bondad, orden parcial, 0-1 MKP, vector binario

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
> En optimización combinatoria, el conjunto de soluciones es finito, no infinito.

**Viñeta 2:** "Función objetivo..."
> Cada solución tiene un valor numérico asignado por una función objetivo, que nos dice qué tan buena es.

**Viñeta 3:** "Valor de bondad..."
> El valor de bondad es el resultado de aplicar la función objetivo a una solución específica.

**Viñeta 4:** "Orden parcial..."
> Se define un orden que permite comparar soluciones y determinar cuál es mejor.

**Viñeta 5:** "Ejemplo: 0-1 Multiple Knapsack Problem..."
> Un ejemplo clásico es el Multiple Knapsack: seleccionar objetos para maximizar la ganancia sin exceder la capacidad de las mochilas.

**Viñeta 6:** "Objetivo: maximizar ganancia..."
> El objetivo es elegir los objetos más valiosos sin pasarse de peso en ninguna mochila.

**Viñeta 7:** "Representación: vector binario..."
> Se representa con vectores binarios donde 1 indica que un objeto está seleccionado y 0 que no.

---

## Diapositiva 12: Espacio de Búsqueda

**Palabras clave:** espacio de búsqueda, configuración, función de crecimiento, genotipo, fenotipo, soluciones factibles

**Viñetas:**
- Espacio de búsqueda: conjunto SP(X)
- Cada elemento s representa al menos una respuesta posible
- Configuración: elementos del espacio de búsqueda
- ansP(X): respuestas posibles
- solP(X): soluciones factibles o válidas

**Guion por viñeta:**

**Viñeta 1:** "Espacio de búsqueda: conjunto SP(X)..."
> El espacio de búsqueda es el conjunto de todas las configuraciones posibles que representan soluciones al problema.

**Viñeta 2:** "Cada elemento s representa al menos una respuesta posible..."
> Cada configuración en el espacio debe representar al menos una respuesta posible del problema.

**Viñeta 3:** "Configuración: elementos del espacio..."
> Cada elemento del espacio de búsqueda se denomina configuración, que es la forma matemática de una solución.

**Viñeta 4:** "ansP(X) y solP(X)..."
> Tenemos dos tipos de conjuntos: ansP(X) con todas las respuestas posibles, y solP(X) con solo las soluciones factibles que cumplen las restricciones.

---

## Diapositiva 13: Vecindario

**Palabras clave:** vecindario, movimientos, ergodicidad, accesibilidad, localidad

**Viñetas:**
- Movimientos: cambios a configuraciones para obtener otra
- Ergodicidad: desde cualquier configuración se puede llegar a otra

**Guion por viñeta:**

**Viñeta 1:** "Movimientos: cambios a configuraciones..."
> Los movimientos son modificaciones locales de una configuración para obtener otra. Estos definen qué configuraciones son vecinas entre sí.

**Viñeta 2:** "Ergodicidad: desde cualquier configuración..."
> La ergodicidad es la propiedad que garantiza que, partiendo de cualquier punto del espacio, se puede llegar a cualquier otro mediante una secuencia de movimientos. Esto asegura que al menos una solución óptima sea accesible.

---

## Diapositiva 14: Función Guía

**Palabras clave:** función guía, fitness, evaluación, calidad

**Viñetas:**
- Asigna fitness a cada configuración

**Guion por viñeta:**

**Viñeta 1:** "Asigna fitness a cada configuración..."
> La función guía evalúa la calidad de cada configuración asignándole un valor de fitness. Este valor guía la búsqueda hacia las mejores configuraciones del espacio.

---

## Diapositiva 15: Búsqueda Local

**Palabras clave:** búsqueda local, hill climbing, vecinos, criterio de parada, estancamiento

**Viñetas:**
- Comienza con una solución inicial
- Si encuentra un vecino mejor se mueve a él
- Si no es mejor se queda donde está
- Criterio de parada: máximo de iteraciones o estancado

**Guion por viñeta:**

**Viñeta 1:** "Comienza con una solución inicial..."
> La búsqueda local parte de una configuración inicial y busca mejorarla iterativamente.

**Viñeta 2:** "Si encuentra un vecino mejor se mueve a él..."
> En cada paso, genera un vecino. Si es mejor según la función guía, se mueve a esa configuración.

**Viñeta 3:** "Si no es mejor se queda donde está..."
> Si el vecino no es mejor, la configuración actual se mantiene y se busca otro vecino.

**Viñeta 4:** "Criterio de parada..."
> El proceso se detiene cuando se alcanza un máximo de iteraciones o cuando la búsqueda se estanca sin mejoras.

---

## Diapositiva 16: Búsqueda Basada en Poblaciones

**Palabras clave:** población, múltiples soluciones, diversidad, exploración

**Viñetas:**
- Búsqueda local: una sola solución a la vez
- Búsqueda basada en poblaciones: varias soluciones a la vez

**Guion por viñeta:**

**Viñeta 1:** "Búsqueda local: una sola solución..."
> La búsqueda local trabaja con una sola configuración a la vez, lo que limita su capacidad de exploración.

**Viñeta 2:** "Búsqueda basada en poblaciones: varias soluciones..."
> La búsqueda poblacional mantiene múltiples soluciones simultáneamente, permitiendo mayor diversidad y mejor exploración del espacio de búsqueda.

---

## Diapositiva 17: Recombinación

**Palabras clave:** recombinación, padres, descendientes, combinación

**Viñetas:**
- Operadores de recombinación

**Guion por viñeta:**

**Viñeta 1:** "Operadores de recombinación..."
> La recombinación es un proceso donde un conjunto de configuraciones padre se manipula para crear nuevos descendientes, combinando características extraídas de los padres.

---

## Diapositiva 18: Propiedades Clave

**Palabras clave:** respeto, explotación, assortment, exploración, transmisión

**Viñetas:**
1. Respeto (Explotación)
2. Mezcla / Assortment (Exploración)
3. Transmisión

**Guion por viñeta:**

**Viñeta 1:** "Respeto (Explotación)..."
> El respeto es la propiedad que garantiza que las buenas características de los padres se preserven en los descendientes. Representa el lado explotador.

**Viñeta 2:** "Mezcla / Assortment (Exploración)..."
> El assortment permite generar descendientes con diferentes combinaciones de características de los padres. Representa el lado explorador.

**Viñeta 3:** "Transmisión..."
> La transmisión asegura que la información de los padres pase a los hijos sin perderse. Es el rol intuitivo de la recombinación.

---

## Diapositiva 19: Tipos de Operadores

**Palabras clave:** operadores ciegos, operadores heurísticos, conocimiento del dominio

**Viñetas:**
1. Ciegos
2. Heurísticos o Híbridos (Clave en AMs)

**Guion por viñeta:**

**Viñeta 1:** "Ciegos..."
> Los operadores ciegos no usan información del problema. Son genéricos y no aprovechan el conocimiento del dominio.

**Viñeta 2:** "Heurísticos o Híbridos..."
> Los operadores heurísticos son la clave de los MAs. Aprovechan el conocimiento del dominio para guiar la construcción de nuevos individuos, produciendo mejores resultados.

---

## Diapositiva 20: Diseño de un AM

**Palabras clave:** población inicial, generación, selección, recombinación, mutación, búsqueda local, actualización, reinicio, Plus, Comma

**Viñetas:**
- A. Generación de población inicial: no se empieza con soluciones aleatorias
- B. Generación de nueva población: elección, recombinación, búsqueda local, mutación, búsqueda local post-mutación
- C. Actualización de población: Plus (pop ∪ newpop) o Comma (newpop)
- D. Criterios de reinicio: Inmigrante-Aleatorio o Mutación Pesada

**Guion por viñeta:**

**Viñeta 1:** "Generación de población inicial..."
> La población inicial no se crea aleatoriamente, sino usando heurísticas o construcciones para inyectar soluciones de calidad desde el inicio.

**Viñeta 2:** "Generación de nueva población..."
> El proceso incluye selección de padres, recombinación para crear hijos, mutación para introducir diversidad, y búsqueda local para refinar cada solución.

**Viñeta 3:** "Actualización de población..."
> La actualización puede usar la estrategia Plus (mejores de ambas poblaciones) o Comma (solo las nuevas), según el caso.

**Viñeta 4:** "Criterios de reinicio..."
> Cuando la población pierde diversidad, se puede reiniciar con inmigrantes aleatorios o aplicar mutación fuerte para explorar nuevas zonas.

---

## Diapositiva 21: Cierre

**Palabras clave:** resumen, conclusión

**Viñetas:**
- Fin

**Guion por viñeta:**

**Viñeta 1:** "Fin..."
> Esto concluye nuestra exposición sobre los Algoritmos Meméticos. Espero que les haya quedado claro cómo funcionan y por qué son tan efectivos para resolver problemas difíciles.

