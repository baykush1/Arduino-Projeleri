 /*Açıklama: Arduino'nun A0 pinine bağlı olan potansiyometre kullanılarak
             9.pin de bulunan LED'in parlaklığı ayarlanır.*/

int pot_deger; //Potansiyometre'den Arduino'ya gönderilen değerleri almak için "pot_deger" adında integer veri tipinde bir değişken oluşturuldu.
 
void setup() //Uygulama içinde tek seferlik işlemlerin yapılacağı bölüm.
{
  pinMode(9,OUTPUT);  //3.pin çıkış(OUTPUT) olarak ayarlandı.
  pinMode(A0,INPUT);  //A0 pini giriş(INPUT) olarak ayarlandı.
  Serial.begin(9600); //Seri port ekranını açabilmek için Bilgisayar ile Arduino arasında seri haberleşme başlatılır.
                      //9600 --> Baud Rate ayar değeri.
}

void loop()  //Uygulama içinde sürekli yapılması istenen işlemlerin yapılacağı bölüm.
{
  pot_deger = analogRead(A0); //analogRead komutu ile potansiyometrenin ürettiği değerler okunup "pot_deger" değişkenine gönderildi.
  pot_deger = map(pot_deger,0,1023,0,255); // "map" komutu ile 0-1023 arasıdaki değerler 0-255 arasına ölçeklendi.
  Serial.println(pot_deger); //Ölçeklenmiş değerler seri port ekranına yazıldı.
  analogWrite(9,pot_deger); //0-255 arasına ölçeklenmiş değerler, "analogWrite" komutu ile 6.pine gönderilir.
}
