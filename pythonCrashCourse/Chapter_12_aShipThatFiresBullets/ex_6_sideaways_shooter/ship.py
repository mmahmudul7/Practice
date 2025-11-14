import pygame

class Ship:
    # Manage the ship 
    def __init__(self, ss_game):
        """Initialize the shiop and set its starting position."""
        self.screen = ss_game.screen
        # self.screen = pygame.display.set_mode(
        #     (self.settings.screen_width, self.settings.screen_height)
        # )
        
        self.settings = ss_game.settings
        # self.screen_width = 1280
        # self.screen_height = 720
        # self.bg_color = (230, 230, 230)
        # self.ship_speed = 1.5

        self.screen_rect = ss_game.screen.get_rect()
        # .get_rect()
        # screen_rect.left   = 0
        # screen_rect.right  = 1280
        # screen_rect.top    = 0
        # screen_rect.bottom = 720

        # Load the ship image and get its rect 
        self.image = pygame.image.load('images/rocket_small.png')
        self.rect = self.image.get_rect()

        # Start each new ship at the center of the left side of the screen 
        self.rect.midleft = self.screen_rect.midleft

        # Store a decimal value for the ship's vertical position. 
        self.y = float(self.rect.y)

        # Moving flags 
        self.moving_up = False
        self.moving_down = False

    def update(self):
        """Update the ship's position based on movement flags."""
        # Update the ship's y value, not the rect 
        if self.moving_up and self.rect.top > 0:
            self.y -= self.settings.ship_speed
        if self.moving_down and self.rect.bottom < self.screen_rect.bottom:
            self.y += self.settings.ship_speed

        # Update rect object from self.y. 
        self.rect.y = self.y

    def blitme(self):
        """Draw the ship at its current location."""
        self.screen.blit(self.image, self.rect)