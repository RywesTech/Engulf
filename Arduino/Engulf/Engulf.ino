int pins[5] = {4,3,2,1,0};

void setup() {
  Serial.begin(9600);
}

void loop() {

  //THIS CODE IS UGLY:
  
  int level = 0;

  if(analogRead(4) > 1010){
    level = level + 20;
    if(analogRead(3) > 1010){
      level = level + 20;
      if(analogRead(2) > 1010){
        level = level + 20;
        if(analogRead(1) > 1010){
          level = level + 20;
          if(analogRead(0) > 1010){
            level = level + 20;
          }
        }
      }
    }
  }

/*
 * Why does this not work?
 * 
  Serial.println();
  for(int i = 0; i < 5; i++){
    Serial.println(analogRead(pins[i]));
    if(analogRead(pins[i] < 1010)){
      break;
      Serial.println("break");
    }else {
      level = level + 20;
    }
  }
  */
  Serial.println(level);

  delay(500);
}
