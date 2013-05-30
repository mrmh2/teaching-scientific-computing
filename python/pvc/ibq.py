def items_by_quality(weights, values):

    items = zip(weights, values)

    items_with_quality = []
    for weight, value in items:
        new_item = float(value) / weight, weight, value
        items_with_quality.append(new_item)

    items_with_quality.sort(reverse=True)

    return items_with_quality
