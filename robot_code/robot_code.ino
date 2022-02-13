/*

3 SENSÖRLÜ YAPAY ZEKA VE HARİTALANDIRMA PROJELERİNE UYGUN
ENGELDEN KAÇAN ROBOT PROJESİ

İDRİS İBRAHİM ERTEN
TARAFINDAN KODLANMIŞTIR.

*/

//ön mesafe sensörünün haberleşme pinleri ataması
const int trig = A3;
const int echo = A2;

//sağ mesafe sensörünün haberleşme pinleri ataması
const int trig1 = 12;
const int echo1 = 11;

//sol mesafe sensörünün haberleşme pinleri ataması
const int trig2 = A1;
const int echo2 = A0;

//ön mesafe sensörüne göre motor hareketleri için pin ataması
const int leftForward = 4;
const int leftBackward = 5;
const int rightForward = 10;
const int rightBackward = 9;

//sağ mesafe sensörüne göre motor hareketleri için pin ataması
const int leftForward1 = 4;
const int leftBackward1 = 5;
const int rightForward1 = 10;
const int rightBackward1 = 9;

//sol mesafe sensörüne göre motor hareketleri için pin ataması
const int leftForward2 = 10;
const int leftBackward2 = 9;
const int rightForward2 = 4;
const int rightBackward2 = 5;

//ön mesafe sensörü için süre ve mesafe bilgileri 0'a kalibre edildi.
int duration = 0;
int distance = 0;

//sağ mesafe sensörü için süre ve mesafe bilgileri 0'a kalibre edildi.
int duration1 = 0;
int distance1 = 0;

//sol mesafe sensörü için süre ve mesafe bilgileri 0'a kalibre edildi.
int duration2 = 0;
int distance2 = 0;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);

  pinMode(trig1 , OUTPUT);
  pinMode(echo1 , INPUT);
  pinMode(leftForward1 , OUTPUT);
  pinMode(leftBackward1 , OUTPUT);
  pinMode(rightForward1 , OUTPUT);
  pinMode(rightBackward1 , OUTPUT);

  pinMode(trig2 , OUTPUT);
  pinMode(echo2 , INPUT);
  pinMode(leftForward2 , OUTPUT);
  pinMode(leftBackward2 , OUTPUT);
  pinMode(rightForward2 , OUTPUT);
  pinMode(rightBackward2 , OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);

  digitalWrite(trig1 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig1 , LOW);


  duration1 = pulseIn(echo1 , HIGH);
  distance1 = (duration1/2) / 28.5 ;
  Serial.println(distance1);

  digitalWrite(trig2 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig2 , LOW);


  duration2 = pulseIn(echo2 , HIGH);
  distance2 = (duration2/2) / 28.5 ;
  Serial.println(distance2);
  

  if ( distance < 30 )
  {
    digitalWrite(leftForward , LOW);
    digitalWrite(leftBackward , HIGH);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
    delay(100);
  }
  else
  {
    digitalWrite(leftForward , HIGH);
    digitalWrite(leftBackward , LOW);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
  }

  if ( distance1 < 20 )
  {
    digitalWrite(leftForward1 , LOW);
    digitalWrite(leftBackward1 , HIGH);
    digitalWrite(rightForward1 , HIGH);
    digitalWrite(rightBackward1 , LOW);
    delay(100);
  }
  else
  {
    digitalWrite(leftForward1 , HIGH);
    digitalWrite(leftBackward1 , LOW);
    digitalWrite(rightForward1 , HIGH);
    digitalWrite(rightBackward1 , LOW);
  }

  if ( distance2 < 20 )
  {
    digitalWrite(leftForward2 , LOW);
    digitalWrite(leftBackward2 , HIGH);
    digitalWrite(rightForward2 , HIGH);
    digitalWrite(rightBackward2 , LOW);
    delay(100);
  }
  else
  {
    digitalWrite(leftForward2 , HIGH);
    digitalWrite(leftBackward2 , LOW);
    digitalWrite(rightForward2 , HIGH);
    digitalWrite(rightBackward2 , LOW);
  }
 
}
