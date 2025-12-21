import logging

logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(levelname)s - %(message)s'
)

logging.critical('Critical error! Critical error!')
logging.disable(logging.CRITICAL)
logging.critical('Second critical error!')
logging.error('Error! Error!')