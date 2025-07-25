from jovian.pythondsa import evaluate_test_cases

def locate_card(cards, query):
    # Create a variable position with the value 0
    position = 0

    # Set up a loop for repetition
    while True:
        # Check if element at the current position matche the query
        if cards[position] == query:
            # Answer found! Return and exit ...
            return position

        # Increment the position
        position += 1
        # Check if we have reached the end of the array
        if position == len(cards):
            # Number not found, return -1
            return -1

tests = [
        {
            'input' : {'cards': [13, 11,10,7,4,3,1,0], 'query': 7},
            'output' : 3
        }
]
evaluate_test_cases(locate_card, tests)
