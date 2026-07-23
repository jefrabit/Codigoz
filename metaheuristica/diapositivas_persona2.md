# Diapositivas — Participante 2
**Tema:** Algoritmos Meméticos — Fundamentos Teóricos, Historia y Conceptos Básicos

---

## Diapositiva 1: Fundamentos Teóricos — No Free Lunch Theorem

**Temas a abordar:**
- Hart y Belew demostraron que el rendimiento de un algoritmo depende del conocimiento que incorpora
- Wolpert y Macready (1997) lo publicaron y lo hicieron famoso como "No-Free-Lunch"
- NFL dice que no existe algoritmo universalmente superior para todos los problemas
- Sin conocimiento del problema, todos los algoritmos rinden igual en promedio
- Esto justifica que los MAs incorporen conocimiento del dominio desde su diseño

---

## Diapositiva 2: Evolución Histórica

**Línea de tiempo:**

```
1976 ──── Dawkins acuña "meme" en The Selfish Gene
  │
  │       Inspiración: torneos de videojuegos
  │       sobre "evolución de la cooperación"
  │
1988 ──── Moscato y Norman crean híbrido GA + SA
  │       • Para el Problema del Viajante Euclidiano
  │       • Red toroidal bidimensional
  │       • Fase competitiva (batallas + clonación)
  │       • Fase cooperativa (búsqueda local)
  │
1989 ──── Moscato acuña "Algoritmo Memético"
  │       • Evolución cultural como metáfora
  │       • Evita pensamiento biológicamente restringido
  │
1990s ─── Consolidación como metaheurística
  │       • Éxitos en TSP, coloración de grafos, knapsack
  │       • Publicaciones en revistas de primer nivel
  │
2003 ──── Publicación de "A Gentle Introduction"
            Moscato & Cotta
```

**Temas a abordar:**
- Contexto previo: inspiración en videojuegos sobre cooperación
- Primer algoritmo híbrido GA + SA (1988)
- Innovación de la red toroidal y los modelos de islas
- Formalización del término (1989)
- Crecimiento y consolidación en los 90s

---

## Diapositiva 3: Conceptos Básicos — Algoritmos y Problemas

**Temas a abordar:**
- Algoritmo: procedimiento paso a paso para resolver un problema
- Problema computacional: tiene dominio de entrada (instancias) y conjunto de soluciones
- Una instancia es un caso específico del problema
- Soluciones factibles: las que cumplen todas las restricciones
- Tipos: enumeración, conteo, decisión y optimización
- Los MAs se enfocan en optimización combinatoria

---

## Diapositiva 4: Optimización Combinatoria — Ejemplo MKP

**Temas a abordar:**
- Conjunto de soluciones finito
- Función objetivo: asigna valor numérico a cada solución
- Valor de bondad: resultado de la función objetivo
- Orden parcial para comparar soluciones
- Ejemplo: 0-1 Multiple Knapsack Problem
- Objetivo: maximizar ganancia sin exceder capacidad de mochilas
- Representación: vector binario (1 = seleccionado, 0 = no)

---

## Diapositiva 5: Espacio de Búsqueda

**Temas a abordar:**
- Espacio de búsqueda S: conjunto de todas las configuraciones posibles
- Configuración: cada elemento del espacio de búsqueda
- Función de crecimiento: mapea configuraciones a soluciones reales
- Representación válida: garantiza que al menos una solución óptima esté representada

---

## Diapositiva 6: Vecindario y Ergodicidad

**Temas a abordar:**
- Vecindario N(s): conjunto de configuraciones vecinas alcanzables
- Movimientos: modificaciones locales de una configuración
- Ergodicidad: cualquier configuración es alcanzable desde cualquier otra
- Diferentes movimientos definen diferentes vecindarios

---

## Diapositiva 7: Fitness Landscape

**Temas a abordar:**
- Función guía Fg: evalúa la calidad de cada configuración
- Fitness landscape: combina espacio de búsqueda, vecindario y función guía
- Se interpreta como un grafo ponderado (vértices = configuraciones, arcos = vecinos)
- Óptimos locales: configuraciones mejores que todos sus vecinos

---

## Diapositiva 8: Cierre

**Temas a abordar:**
- Resumen de puntos clave
- Conexión con siguiente presentador (Pablo - Paisajes de búsqueda)
