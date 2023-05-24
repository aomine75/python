import random

def main():
    colors = ["rouge", "bleu", "jaune", "vert", "orange"]
    secret_color = random.choice(colors)
    player_guess = ""
    attempts = 0
    has_won = False

    print("Bienvenue dans le jeu Trouver la Bonne Couleur !")
    print("Devinez la couleur parmi : rouge, bleu, jaune, vert, orange")

    while not has_won:
        player_guess = input("Entrez votre réponse : ")
        attempts += 1

        if player_guess == secret_color:
            print("Félicitations ! Vous avez trouvé la bonne couleur")
            has_won = True
        else:
            print("Ce n'est pas la bonne couleur. Essayez encore.")

if __name__ == '__main__':
    main()
