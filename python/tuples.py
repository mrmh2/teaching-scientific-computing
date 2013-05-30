def list_stats(input_list):
    max_val = max(input_list)
    min_val = min(input_list)
    mean = sum(input_list) / len(input_list)
    return min_val, max_val, mean

>>> test_list = range(0, 10)
>>> test_list
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> stats = list_stats(test_list)
>>> stats
(0, 9, 4)
