def sort_string(s: str) -> str:
    return filter(s, lambda s: s.isdigit(), s.isupper(), s.islower(), s)
