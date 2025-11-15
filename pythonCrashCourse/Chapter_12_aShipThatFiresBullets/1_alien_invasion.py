# Createing a Pygame window and Responding to User Input 
import sys # for exit the game
import pygame # contains the functionality to make games

class AlientInvasion:
    """Overall class to manage game assets and behavior."""
    def __init__(self):
        """Initialize the game, and create game resources."""
        pygame.init() # 1--> background settings for Pygame
        # Global varibale self.screen (surface)
        self.screen = pygame.display.set_mode((1280, 720)) # 2--> Display window. Surface in px
        pygame.display.set_caption("Alien Invasion")

    def run_game(self):
        """Start the main loop for the game."""
        while True: # 3 --> run continually
            # Watch for keyboard and mouse events. 
            for event in pygame.event.get(): # 4 function retrun a list of events
                if event.type == pygame.QUIT: # 5 Game widow's close button
                    sys.exit()

            # Make the most recently draw screen visible 
            pygame.display.flip() # 6 most recently drawn screen visible


if __name__ == '__main__':
    # Make a game instance, and run the game. 
    ai = AlientInvasion()
    ai.run_game()

