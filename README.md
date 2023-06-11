# OskarPwrSignal

Namenjeno da aktivira PWR_OK pin pri startu i de-activira ga kad pada napon napajanja.
Koristio sam:
- Optokapler da bi se detektovao napon mreze sa otpornikom da ograniči struju i usmeračkom diodom da spreči negativni polaritet na ulaznoj diodi.
- ATtiny85 Digispark modul za svu logiku (izlaz je na B1 pinu preko otpornika od 1K)
- Napajanje od 5V (najjeftiniji punjač za telefon) odakle sam izvukao i 220 za optokapler
- Arduino IDE za programiranje modula.

Napomena:
Ostatak komponenata sa šeme je već na Digispark Arduino modulu
