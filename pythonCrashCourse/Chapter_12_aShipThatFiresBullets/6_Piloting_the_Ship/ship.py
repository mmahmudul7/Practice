import pygame # rect = rectangle

class Ship:
    """A class to manage the ship."""

    def __init__(self, ai_game): # ai_game = main game object / ai_game = AlienInvasion()
        """Initialize the ship and set its starting postion."""
        self.screen = ai_game.screen # 1 - self.screen = pygame.display.set_mode((1280, 720))
        self.screen_rect = ai_game.screen.get_rect() # 2 - make rectangle boundary <rect(0, 0, 1280, 720)> / game window er boundary er man Ship ke dey

        # Load the ship image and get its rect. 
        self.image = pygame.image.load('images/ship.png') # 3
        self.rect = self.image.get_rect() # Loaded image reactangle er moto act korbe and position / movement er jonno tar cordinate nirdharon korbe 

        # Start each new ship at the bottom center of the screen. 
        self.rect.midbottom =  self.screen_rect.midbottom # 4

    def blitme(self): #5
        """Draw the ship at its current location."""
        self.screen.blit(self.image, self.rect) # blit = Block Image Transfer


"""

Origin (0, 0) top left
+---------------+
|               |
|               |
|               |
+---------------+ (1280, 720) bottom right corner

"""