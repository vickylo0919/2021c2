void setup()
{
  size(300,300);
}
String line = "";
void draw()
{
  background(#E5B0B0);
  fill(0);
  textSize(50);
  text(line,20,50);
}
void keyPressed()//按鍵盤就會呼叫他
{
 line = "key: "+ key;
 line += "\nkeyCode: " + keyCode;
}
