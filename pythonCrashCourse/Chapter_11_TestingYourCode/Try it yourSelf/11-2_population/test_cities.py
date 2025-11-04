from city_functions import city_country
def test_city_country():
    city_country_name = city_country('rajshahi', 'bangladesh')
    assert city_country_name == 'Rajshahi, Bangladesh'

def test_city_country_population():
    city_country_name = city_country('rajshahi', 'bangladesh', population=5_000_000)
    assert city_country_name == 'Rajshahi, Bangladesh - population 5000000'