# Wrong script for trffic light 

def switchLights(stoplight):
    """
    stoplight is a dictionary with keys 'ns' and 'ew'
    values are 'green', 'yellow', or 'red'
    """

    # Sanity check: intersection chowrastay anototo akta dike red thakte hobe
    assert 'red' in stoplight.values(), (
        "Neither light is red! BEFORE switch: " + str(stoplight)
    )

    # Light switching logic
    for key in stoplight.keys():
        if stoplight[key] == 'green':
            stoplight[key] = 'yellow'
        elif stoplight[key] == 'yellow':
            stoplight[key] = 'red'
        elif stoplight[key] == 'red':
            stoplight[key] = 'green'

    # Sanity check আবার করা হচ্ছে (switch করার পরও rule মানা হচ্ছে কিনা)
    assert 'red' in stoplight.values(), (
        "Neither light is red! AFTER switch: " + str(stoplight)
    )


# ----------- Simulation -----------

market_2nd = {'ns': 'green', 'ew': 'red'}
mission_16th = {'ns': 'red', 'ew': 'green'}

print("Before switch:", market_2nd)
switchLights(market_2nd)
print("After switch :", market_2nd)

print()

print("Before switch:", mission_16th)
switchLights(mission_16th)
print("After switch :", mission_16th)
