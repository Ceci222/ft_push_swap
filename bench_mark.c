#include "push_swap.h"

/* El modo benchmark (--bench) es opcional, y mostrará tras la ordenación lo si-
guiente:
◦ El índice de desorden ( % con dos decimales).
◦ El nombre de la estrategia usada y su clase de complejidad teórica.
◦ El número total de operaciones empleadas.
◦ El número de operaciones de cada tipo (sa, sb, ss, pa, pb, ra, rb, rr, rra,
rrb, rrr) empleadas durante la ordenación.
La salida del modo benchmark debe enviarse a la salida stderr y solo se mostrará
cuando la flag esté presente. */

/* function compute_disorder(stack a):
mistakes = 0
total_pairs = 0
for i from 0 to size(a)-1:
for j from i+1 to size(a)-1:
total_pairs += 1
if a[i] > a[j]:
mistakes += 1
return mistakes / total_pairs */
