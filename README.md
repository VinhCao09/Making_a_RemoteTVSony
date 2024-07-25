
# Build a TV Sony Remote with Arduino Nano using IR Transmitter

![images](https://github.com/VinhCao09/Making_a_RemoteTVSony/blob/main/images/1.jpg)

## Version Recommend
*Version Arduino IDE:*
`2.3.2`

*Version Board:* Arduino AVR Board - `1.8.6`

*Version Library:* IRremote by shirriff, z3t0, ArminJo - `2.6.0`
`⚠️Library version 2.6.1 or higher may cause error. I use version 2.6.0 which is quite good`
Link Library: https://downloads.arduino.cc/libraries/github.com/z3t0/IRremote-2.6.0.zip?

## How to use

✔️Please read the code to connect the button pins.

![images](https://github.com/VinhCao09/Making_a_RemoteTVSony/blob/main/images/3.jpg)

Power Supply: 9V Battery

Button: Use internal pull-up resistor

Joystick: 5V from Arduino Nano Pin

Ở đoạn code có 2 code test, một code test để kết nối với mắt thu hồng ngoại. Mục đích là sử dụng code này để thử nghiệm lấy mã hồng ngoại. Ở đây mình sử dụng điều khiển Tivi nhà mình và thử một số nút, mã hồng ngoại đọc vào được là dạng mã hóa Sony 12 bit. Kết quả được liệt kê như sau:

Button |Code | 
--- | --- |
Power Toggle | 0xA90 |
Vol + | 0x490 |
Vol - | 0xC90 |
Up | 0x2F0 |
Down | 0xAF0 |
Left| 0x2D0 |
Enter | 0xA70 |

Ngoài ra, các bạn có thể xem mã tại đây, mình thấy nó khá chính xác: https://tasmota.github.io/docs/Codes-for-IR-Remotes/#sony-kdl-ex540-tv

Ở link đính kèm bao gồm một số mã TV: Samsung AA59 TV, TCL 55P715 TV, Panasonic TX65FXW784 TV, LG 55UH8509 TV, AppleTV Gen4,... Nếu không có thì bạn dùng code test ở trên để tự lấy mã hồng ngoại nhé. Ngoài tivi ra thì bạn có có thể thử nghiệm làm remote với điều hòa, máy quạt,... chỉ với code test trên để lấy mã. Sau đó lập trình cho nó phát ra thôi.

Schematic: 
![images](https://github.com/VinhCao09/Making_a_RemoteTVSony/blob/main/images/4.jpg)


## 🚀 About Me
Hello 👋I am Vinh. I'm studying HCMC University of Technology and Education

**Major:** Electronics and Telecommunication

**Skill:** 

*- Microcontroller:* ESP32/8266 - ARDUINO - PIC - Raspberry Pi - PLC Rockwell Allen Bradley

*- Programming languages:* C/C++/HTML/CSS/PHP/SQL and
related Frameworks (Bootstrap)

*- Communication Protocols:* SPI, I2C, UART, CAN

*- Data Trasmissions:* HTTP, TCP/IP, MQTT
## Authors

- [@my_fb](https://www.facebook.com/vcao.vn)
- [@my_email](contact@vinhcaodatabase.com)

## Demo

👉Click on the icon below to watch the demo video:

[![Watch the video](https://media3.giphy.com/media/A7LF3J4uMJQ4r8ApLg/giphy.gif?cid=6c09b95275l1l3krhehcppcrgllmv64r7jd6py964efin2av&ep=v1_internal_gif_by_id&rid=giphy.gif&ct=s)](https://www.tiktok.com/@vinhcaoplay/video/7389532656867740944?lang=vi-VN)

https://www.tiktok.com/@vinhcaoplay/video/7389532656867740944?lang=vi-VN


![Logo](https://codingninja.asia/images/codeninjalogo.png)

