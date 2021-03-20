from instabot import Bot
bot = Bot()
user = input()
psswd = input()
#user = '**********'
#psswd = '********'
bot.login(username=user, password=psswd)
my_followers = bot.followers()
for i in my_followers:
    print(i)
