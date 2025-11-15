import sys # for exit the game
import pygame # contains the functionality to make games

from settings import Settings

class AlientInvasion:
    """Overall class to manage game assets and behavior."""
    def __init__(self):
        """Initialize the game, and create game resources."""
        pygame.init()
        self.clock = pygame.time.Clock()
        self.settings = Settings() # 1 - Make a instance of Settings
       
        self.screen = pygame.display.set_mode((self.settings.screen_width, self.settings.screen_height)) # 2
        pygame.display.set_caption("Alien Invasion")
        # self.bg_color = (230, 230, 230)

    def run_game(self):
        """Start the main loop for the game."""
        while True:
            # Watch for keyboard and mouse events. 
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    sys.exit()

            # Redraw the screen during each pass through the loop. 
            self.screen.fill(self.settings.bg_color) # 3

            # Make the most recently draw screen visible 
            pygame.display.flip()
            self.clock.tick(60)


if __name__ == '__main__':
    # Make a game instance, and run the game. 
    ai = AlientInvasion()
    ai.run_game()

