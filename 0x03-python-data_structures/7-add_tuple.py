def add_tuple(tuple_a=(), tuple_b=()):
    x1, y1 = tuple_a + (0, 0)[:2-len(tuple_a)]
    x2, y2 = tuple_b + (0, 0)[:2-len(tuple_b)]
    return (x1 + x2, y1 + y2)
            
