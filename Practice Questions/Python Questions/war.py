from random import shuffle


class Card:
    suits = ["Spades", "Hearts", "Diamonds", "Clubs"]
    values = [None, None, "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]

    def __init__(self, v, s):
        self.value = v
        self.suit = s

    def __lt__(self, c2):
        if self.value < c2.value:
            return True
        elif self.value == c2.value:
            if self.suit < c2.suit:
                return True
            else:
                return False
        else:
            return False

    def __gt__(self, c2):
        if self.value > c2.value:
            return True
        elif self.value == c2.value:
            if self.suit > c2.suit:
                return True
            else:
                return False
        else:
            return False

    def __repr__(self):
        v = self.values[self.value] + " of " + self.suits[self.suit]
        return v


class Deck:
    def __init__(self):
        self.cards = []
        for i in range(2, 15):
            for j in range(4):
                self.cards.append(Card(i, j))
        shuffle(self.cards)

    def rm_card(self):
        if len(self.cards) == 0:
            return
        return self.cards.pop()


class Player:
    def __init__(self, name):
        self.wins = 0
        self.name = name
        self.card = None


class Game:
    def __init__(self):
        name1 = input("Player 1, enter your name.")
        name2 = input("Player 2, enter your name.")
        self.deck = Deck
        self.player1 = Player(name1)
        self.player2 = Player(name2)

    def wins(self, winner=None):
        w = "{} wins this round."
        w = w.format(winner)
        print(w)

    def draw(self, p1n, p1c, p2n, p2c):
        n = "{} drew {} and {} drew {}."
        n = n.format(p1n, p1c, p2n, p2c)
        print(n)

    def play_game(self):
        cards = self.deck.cards
        print("Beginning War.")
        while len(self.cards) >= 2:
            m = input("Press Q to quit. Press any key to continue.")
            if m == "q":
                break
            else:
                p1c = self.deck.rm_card()
                p2c = self.deck.rm_card()
                p1n = self.player1.name()
                p2n = self.player2.name()
                self.draw(p1n, p1c, p2n, p2c)
                if p1c > p2c:
                    self.player1.wins += 1
                    self.wins(self.player1.name)
                else:
                    self.palyer2.wins += 1
                    self.wins(self.player2.name)

        win = self.winner(self.player1, self.player2)
        print("{} wins the game.".format(win))

    def winner(self, p1, p2):
        if p1.wins > p2.wins:
            return p1.name
        if p2.wins > p1.wins:
            return p2.name
        return "It was a tie."


game = Game()
game.play_game()
