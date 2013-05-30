#!/usr/bin/env python

import random
from pprint import pprint

def items_by_quality(weights, values):

    items = zip(weights, values)

    items_with_quality = []
    for weight, value in items:
        new_item = float(value) / weight, weight, value
        items_with_quality.append(new_item)

    items_with_quality.sort(reverse=True)

    return items_with_quality

def items_by_quality_short(weights, values):
    return sorted([(float(v)/w, w, v) for w, v in zip(weights, values)], reverse=True)

n = 10
weights = [random.randint(1, 1000) for _ in range(0, n)]
values = [random.randint(1, 1000) for _ in range(0, n)]

ibq = items_by_quality(weights, values)
ibq2 = items_by_quality_short(weights, values)
pprint(ibq)
pprint(ibq2)
