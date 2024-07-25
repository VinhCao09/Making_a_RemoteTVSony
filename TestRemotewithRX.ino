#include <IRremote.h>

const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  irrecv.blink13(true);
}

void loop() {
  if (irrecv.decode(&results)) {
    switch (results.decode_type) {
      case NEC:         Serial.print("NEC: "); break;
      case SONY:        Serial.print("SONY: "); break;
      case RC5:         Serial.print("RC5: "); break;
      case RC6:         Serial.print("RC6: "); break;
      case PANASONIC:   Serial.print("PANASONIC: "); break;
      case JVC:         Serial.print("JVC: "); break;
      case SAMSUNG:     Serial.print("SAMSUNG: "); break;
      case WHYNTER:     Serial.print("WHYNTER: "); break;
      case LG:          Serial.print("LG: "); break;
      case AIWA_RC_T501:Serial.print("AIWA_RC_T501: "); break;
      case SANYO:       Serial.print("SANYO: "); break;
      case MITSUBISHI:  Serial.print("MITSUBISHI: "); break;
      case DISH:        Serial.print("DISH: "); break;
      case SHARP_ALT:   Serial.print("SHARP_ALT: "); break;
      case SHARP:       Serial.print("SHARP: "); break;
      case DENON:       Serial.print("DENON: "); break;
      case LEGO_PF:     Serial.print("LEGO_PF: "); break;
      case BOSEWAVE:    Serial.print("BOSEWAVE: "); break;
      case MAGIQUEST:   Serial.print("MAGIQUEST: "); break;
      case UNKNOWN:     Serial.print("UNKNOWN: "); break;
      default:          Serial.print("OTHER: "); break;
    }
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}
