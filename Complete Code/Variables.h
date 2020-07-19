bool LINEFALLOW=true;
int ir0=0;
int ir1=0;
int ir2=0;
int ir3=0;
int ir4=0;
int ir5=0;
int ir6=0;
int ir7=0;
int ir8=0;
int ir9=0;
int ir10=0;
int ir11=0;

//left wheel 
int pwma=2;
int in1=50;//N4
int in2=48;//N3

// right wheel 
int pwmb=3;
int in3=44;//N2
int in4=46;//N1

int last_missed;
int sensor[12];
int *sensor2;

int max_value_a;
int max_value_b;
int tilt_sensor1=0;
int tilt_sensor2=0;
int tilt_value1 = 10;
int tilt_value2 = 10;

int white_line_count;
//volatile byte tilt_sensor=LOW; 

const int trig_left = A13;
const int echo_left = A12;
long left_distance =0;

const int trig_right = A9;
const int echo_right = A8;
long right_distance =0;

const int trig_front = A11;
const int echo_front = A10;
long front_distance =0;

const int moter_left = 3;
const int moter_right = 2;

int Llimit = 550;
int Rlimit = 550;
const int Flimit = 700;

const int LlimitU = 1300;
const int RlimitU = 1300;


const int delay90 = 650;
const int delay180 = 1500;

float er;
float older;
float drvt;

int pwm_left = 150;
int pwm_right = 150;

//IMDA

#define S0 9
#define S1 8
#define S2 A14
#define S3 52
#define out A15

int para = 1000;
int R=0;
int G=0;
int B=0;


int Red_LED = 30;
int Green_LED = 32;
int Blue_LED = 34;
int pos1 = 70;

Servo servo1;
Servo servo2;
Servo servo3;

int Spin1 = 11;
int Spin2 = 12;
int Spin3 = 13;

int servo1_initial = 35;
int servo2_initial = 15;
int servo3_initial = 80;
int color = 0; //1=red, 2=green, 3=blue

//Water
Servo water_servo;
# define relay 24
int water_servo_pin = 6;
