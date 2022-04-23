import random


def GetAnswer():
    choices = ["rock", "paper", "scissors"]
    print("If you want to stop game enter 'stop' :)")
    user = input("Please, choose rock, paper, scissors: ").lower()

    if user not in choices and user != "stop":
        print(f"\nYour input {user} is not valid. Please enter rock, paper, or scissors.\n")
        GetAnswer()
    elif user == "stop":
        print("Goodbye, thanks for good game :)")
        exit()
        

    wiki = random.choice(choices)

    print(f"\nYou: {user}")
    print(f"Wiki: {wiki}\n")

    Game(user, wiki)


def Game(user, wiki):
    if user == "stop":
        print("Goodbye, thanks for good game :)\n")
        exit()
    elif user == wiki:
        print("It's a tie!\n")
    elif ((user == "paper" and wiki == "scissors") \
        or (user == "rock" and wiki == "paper")   \
        or (user == "scissors" and wiki == "rock")):
        print("You lose :(\n")
    elif ((user == "paper" and wiki == "rock") \
        or (user == "rock" and wiki == "scissors") \
        or (user == "scissors" and wiki == "paper")):
        print("You win :)\n")
    else:
         print("Something went wrong :(\n")
    GetAnswer()


GetAnswer()
