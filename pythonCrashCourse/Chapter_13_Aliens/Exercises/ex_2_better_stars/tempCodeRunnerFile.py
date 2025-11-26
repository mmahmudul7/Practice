def _create_star(self, x_position, y_position):
        new_star = Star(self)
        new_star.rect.x = x_position + self._get_star_offset()
        new_star.rect.y = y_position + self._get_star_offset()
        self.stars.add(new_star)

    def  _get_star_offset(self):
        """Return a random adjustment to a star's position."""
        offset_size = 15
        return randint(-1 * offset_size, offset_size)