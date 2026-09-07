# BagLiveChat
A little project where you can upload text or images on my personal website and see it displayed IRL, I have an ita-bag and had this idea to put inside the clear plastic cover! There's gonna be a QR code IRL so onlookers can display stuff on my bag!

## How it works:
  Anyone anywhere can upload an image, or input some text into a field in my personal website (similar to a straw page!) and then the image and/or text will be put into a filesystem in the backend of the website, where it will be processed from a .jpg or .png (or maybe other filetypes too?!) to a .bin RGB565 binary file that will be available to my ESP32 through an HTTP GET request! My ESP32 is connected to a TFT screen and the classic LCD I2C display for text (I will make the text scrolling!)

## Current progress...
  The website is basically done! At least the front-facing front-end, the only things left are to add a backend that converts images into a RGB565 .bin file then make my ESP32 make an HTTP GET request to fetch it and flash the .bin image into memory and display the image onto a TFT screen connected to the ESP32!
