

---------------------------------------------------------------------------------------------------------
Kodun açıklaması: 

Arduino Nano üzerinde bağlı seri port tanımlaması ve ayarlarını gerçekleştiriyoruz. 

*/

void setup() 
{
  Serial.begin(9600); // Seri haberleşmeyi başlat (baud rate: 9600)
}

void loop() 
{
  if (Serial.available() > 0) // Seri porttan veri al
  {
    char receivedChar = Serial.read();

    if (receivedChar == 'H')  // Alınan karakter 'H' ise Seri port ekranına H Bilgisi Geldi yaz
    {
      Serial.println("H Bilgisi Geldi");
      delay(1000); // 1000 milisaniye (1 saniye) bekle
    }
    else if (receivedChar == 'L') // Alınan karakter 'L' ise Seri port ekranına L Bilgisi Geldi yaz
    {
      Serial.println("L Bilgisi Geldi");
      delay(1000); // 1000 milisaniye (1 saniye) bekle
    }
  }
}
