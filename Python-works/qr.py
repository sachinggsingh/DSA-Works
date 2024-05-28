import qrcode
img = qrcode.make("https://www.google.com/")#Enter the url#
img.save("googleQR.jpg") #store that images#
