import sys
import time
import os

# Colors
CYAN = "\033[96m"
PINK = "\033[95m"
YELLOW = "\033[93m"
GREEN = "\033[92m"
WHITE = "\033[97m"
RESET = "\033[0m"

# Lyrics
lyrics = [
    (PINK + "Tu saanwal phull kastoory... 🌸✨" + RESET, 0.08, 0.8),
    (CYAN + "Tedi thi gayi bahu mash-hoori... 💫" + RESET, 0.08, 0.8),
    (WHITE + "Jha jha te, har jha te... 🕊️" + RESET, 0.07, 0.6),
    (YELLOW + "Pave dende lok misaal... 🤍" + RESET, 0.08, 1.1),
    (PINK + "Chalray chalray waal... 🎀✨" + RESET, 0.09, 0.7),
    (CYAN + "Mondhe rakhdae kaali shawl... 🖤" + RESET, 0.08, 0.8),
    (YELLOW + "Hath chenae ratta rumal... 🌹" + RESET, 0.08, 0.9),
    (GREEN + "Teriyan reesaan kaun kare... 👑💫" + RESET, 0.09, 1.4),
    (PINK + "Ve teriyan reesaan kaun kare... 💖✨" + RESET, 0.09, 1.5)
]

# Clear screen
if os.name == "nt":
    os.system("cls")
else:
    os.system("clear")

time.sleep(0.5)

# Heading
print("\n" + "=" * 45)
print("✨ C H A L R A Y   W A A L ✨")
print("=" * 45)

# Print lyrics with typing effect
for text, char_speed, pause in lyrics:
    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(char_speed)

    print()
    time.sleep(pause)

print("\n" + "=" * 45 + "\n")
