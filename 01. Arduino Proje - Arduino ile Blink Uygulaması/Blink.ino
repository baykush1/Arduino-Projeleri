 /*Açıklama: Arduino'nun 8.pinine bağlı olan LED
             1'er saniyelik aralıklarla yakılıp söndürülür.*/

void setup() //Uygulama içinde tek seferlik işlemlerin yapılacağı bölüm.
{

  
  pinMode(8, OUTPUT); //8.pin çıkış(OUTPUT) olarak ayarlandı.
}

void loop() //Uygulama içinde sürekli yapılması istenen işlemlerin yapılacağı bölüm.
{

  
  digitalWrite(8, HIGH);   // LED'e gerilim gönderilir.(Yani LED ışık verir.)
  delay(1000);             // 1 saniye beklenir. (1000 ms = 1 s)
  digitalWrite(8, LOW);    // LED'e gönderilen gerilim kesilir. (LED söner.)
  delay(1000);             // 1 saniye beklenir. (1000 ms = 1 s)
}
