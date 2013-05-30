def seqfilter(input_sequence, allowed_chars):

    good_chars = ''
    bad_chars = ''
    for c in input_sequence:
        if c in allowed_chars: 
            good_chars += c
        else:
            bad_chars += c

    return good_chars, bad_chars
