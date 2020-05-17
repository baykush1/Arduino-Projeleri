void setup() //Uygulama içinde tek seferlik işlemlerin yapılacağı bölüm.
{
  pinMode(A0,INPUT); //Arduino'nun analog girişlerinden biri olan A0 pini giriş(INPUT) olarak ayarlandı.
  Serial.begin(9600); ////Seri port ekranını açabilmek için Bilgisayar ile Arduino arasında seri haberleşme başlatılır.
                      //9600 --> Baud Rate ayar değeri.
}

void loop() //Uygulama içinde sürekli yapılması istenen işlemlerin yapılacağı bölüm.
{
  int pot_deger = analogRead(A0); //analogRead komutu ile potansiyometrenin ürettiği değerler okunup "pot_deger" değişkenine gönderildi.
  float gerilim_deger = pot_deger*(5.0/1023.0); //Potansiyometrenin ürettiği değerler kullanılarak gerilim değerleri hesaplandı.
  Serial.print("Analog Deger:     ");
  Serial.println("Gerilim Degeri");
  Serial.print(pot_deger); //A0 pininden okunan ham değerler seri port ekranına yazıldı.
  Serial.print("                   ");
  Serial.println(gerilim_deger); //Hesaplanan gerilim değeri seri port ekranına yazdırıldı.
  delay(500); //Değerleri seri port ekranında rahatlıkla görebilmek için 500 ms'lik bekleme süresi eklendi.
}
