#!/usr/bin/env python
from seqfilter import seqfilter

test_seq = 'actttacccgattacatgacwgtacgatotacgact'
allowed_chars = 'tgac'

print seqfilter(test_seq, allowed_chars)
