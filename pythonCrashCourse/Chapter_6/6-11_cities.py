cities = {
    'santiago': {
        'country': 'chile',
        'population': 6158080,
        'nearby mountains': 'andes',
    },
    'talkeetna': {
        'country': 'alaska',
        'population': 876,
        'nearby mountains': 'alaska range',
    },
    'kathmandu': {
        'country': 'nepal',
        'population': 1003285,
        'nearby mountains': 'himilaya',
    }
}
for city, city_info in cities.items():
    country = city_info['country']
    nearby = city_info['nearby mountains']
    print(f"\n{city.title()} is in {country.title()}.")
    print(f"It has a polulation of about {city_info['population']}.")
    print(f"The {nearby.title()} mountains are nearby.")

'''
Kathmandu is in Nepal.
It has a population of about 1003285.
The Himilaya mountains are nearby.
'''