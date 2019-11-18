import telebot
import json
import requests
from telebot.types import Message

TOKEN = '920701297:AAEXht7AP6aedWn4LvBn1X8XkN5UT97uNqI'
URL = "https://translate.yandex.net/api/v1.5/tr.json/translate"  #это адрес для обращения к API
KEY = "trnsl.1.1.20191019T201004Z.0eb74479fc221fff.ebd670514707833091dca135c1d4cc899182e026" #Это ваш API ключ
bot = telebot.TeleBot(TOKEN)

def translate_me(mytext):

    params = {
        "key": KEY,
        "text": mytext,
        "lang": 'ru-tt',  #Здесь мы указываем с какого языка на какой мы делаем переводим

    }
    response = requests.get(URL ,params=params)
    return response.json()


#@bot.message_handler(func= lambda message: True)
#def otvet(message):
 #   json1 = translate_me(message.text)
  #  bot.reply_to(message, ''.join(json1["text"]))
smile = ['🙋']
@bot.message_handler(commands= ['start'])
def send_welcome(message):
    bot.send_message(message.chat.id, smile)

@bot.message_handler(func= lambda message: True)
def otvet(message):
    json1 = translate_me(message.text)
    bot.send_message(message.chat.id, ''.join(json1["text"]))

bot.polling()
