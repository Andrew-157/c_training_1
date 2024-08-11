

def decorator(function):
    def inner(*args, **kwargs):
        print("Before func")
        function(*args, **kwargs)
        print("After func")
    return inner


@decorator
def func(*args, **kwargs):
    print(f"I am doing something, my args are: {args}, my kwargs are: {kwargs}")


func(3, 4, 5, bum="A", dum="B")