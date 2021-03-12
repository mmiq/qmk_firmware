#AUDIO_ENABLE = yes
MUSIC_ENABLE = no
AUTO_SHIFT_ENABLE = no
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
COMMAND_ENABLE = no        # Commands for debug and configuration 
CONSOLE_ENABLE = no         # Console for debug
EXTRAKEY_ENABLE = no       # Audio control and System control
FAUXCLICKY_ENABLE = yes
KEY_LOCK_ENABLE = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
# NKRO_ENABLE = yes
RGBLIGHT_ENABLE = yes
SLEEP_LED_ENABLE = no
SPLIT_KEYBOARD = yes
SWAP_HANDS_ENABLE = yes
TAP_DANCE_ENABLE = no
VELOCIKEY_ENABLE = no

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
