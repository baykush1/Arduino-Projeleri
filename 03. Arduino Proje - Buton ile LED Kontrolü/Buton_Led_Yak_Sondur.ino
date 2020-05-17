//Açıklama: Butona basıldığında LED'in yanmasını, butondan elimizi çektiğimizde LED'in sönmesini sağlayan program.

void setup() //Uygulama içinde tek seferlik işlemlerin yapılacağı bölüm.
{
  pinMode(7,INPUT); //7.pin giriş(INPUT) olarak ayarlandı.
  pinMode(13,OUTPUT); //13.pin çıkış(OUTPUT) olarak ayarlandı.
}

void loop() //Uygulama içinde sürekli yapılması istenen işlemlerin yapılacağı bölüm.
{
 byte gelen_deger = digitalRead(7); //digitalRead komutu ile butonun ürettiği değer okunup "gelen_deger" değişkenine gönderildi.
 if(gelen_deger == 1) //Eğer butondan gelen değer 1 ise 13.pine bağlı olan LED yanacak.
 {
  digitalWrite(13,HIGH); //13.pine bağlı olan LED yakıldı.
 }
 else //Eğer butondan gelen değer 1 değil ise 13.pine bağlı olan LED söndürülecek.
 {
  digitalWrite(13,LOW); //13.pine bağlı olan LED söndürüldü.
 }

}
