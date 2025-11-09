"""12-1. Blue Sky: Make a Pygame window with a blue background.
12-2. Game Character: Find a bitmap image of a game character you like or convert
an image to a bitmap. Make a class that draws the character at the center of the
screen, then match the background color of the image to the background color of the
screen or vice versa."""
import sys
import pygame

from settings import Settings

class BlueSkyGame:
    def __init__(self):
        self.clock = pygame.time.Clock()
        self.settings = Settings()

        self.screen = pygame.display.set_mode((
            self.settings.screen_width,
            self.settings.screen_height
        ))

        pygame.display.set_caption("Blue Sky Game")

    def run_game(self):
        while True:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    sys.exit()

            self.screen.fill(self.settings.bg_color)
            pygame.display.flip()
            self.clock.tick(60)


if __name__ == '__main__':
    bsg = BlueSkyGame()
    bsg.run_game()