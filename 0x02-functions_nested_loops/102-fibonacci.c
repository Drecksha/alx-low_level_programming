def generate_fibonacci(n):
    fibonacci_sequence = [1, 2]
    while len(fibonacci_sequence) < n:
        next_number = fibonacci_sequence[-1] + fibonacci_sequence[-2]
        fibonacci_sequence.append(next_number)
    return fibonacci_sequence

n = 50
fibonacci_numbers = generate_fibonacci(n)
formatted_numbers = ", ".join(map(str, fibonacci_numbers))

print(formatted_numbers)
