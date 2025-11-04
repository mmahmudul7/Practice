from city_functions import city_country
def test_city_country():
    city_country_name = city_country('rajshahi', 'bangladesh')
    assert city_country_name == 'Rajshahi, Bangladesh'