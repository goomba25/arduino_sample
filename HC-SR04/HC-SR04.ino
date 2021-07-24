const int VccPin = 4;  //Vcc
const int GNDPin = 7;  //GND
const int trigPin = 5;  //Trig
const int echoPin = 6;  //Echo

void setup()
{
    pinMode(VccPin, OUTPUT);
    digitalWrite(VccPin, HIGH);
    pinMode(GNDPin, OUTPUT);
    digitalWrite(GNDPin, LOW);

    Serial.begin(115200);
    Serial.println("Connect");
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    pinMode(13, OUTPUT);
}

void loop()
{
    long duration, distance;

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    //음파의 속도는 340m/s
    distance = duration / 29 / 2;   //  cm

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm\n");

//    if(distance > 15)
//        digitalWrite(13, HIGH);
//    else
//        digitalWrite(13, LOW);

    delay(100);
}
