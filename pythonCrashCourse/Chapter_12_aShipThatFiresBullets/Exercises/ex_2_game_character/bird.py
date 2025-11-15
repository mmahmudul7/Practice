import pygame

class Bird:

    def __init__(self, bb_game):
        self.screen = bb_game.screen
        self.screen_rect = bb_game.screen.get_rect()
        self.image = pygame.image.load('images/bird_small.bmp')
        self.rect = self.image.get_rect()
        self.rect.center = self.screen_rect.center

    def blitme(self):
        self.screen.blit(self.image, self.rect)