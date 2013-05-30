def items_by_quality_short(weights, values):
    return sorted([(float(v)/w, w, v) for w, v in zip(weights, values)], reverse=True)
