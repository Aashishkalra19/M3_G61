
# Test Plans and Output

## Highh Level Test Plan
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Sleep State  | Push Switch = 0| sleep mode | PASS  |
| TID_02  | Locking Feature  | push button = 1 push|car windows and doors will lock| PASS  |
| TID_03  | Unlocking Feature| push button = 2 push| car doors and windows were Unlocked| PASS  |
| TID_04  | Alarm Feature ON | push button=3 push| Alarm will start ringing | PASS  |
| TID_05  | Alarm Feature OFF | push button=4 push| Alaram will stop| PASS  |
| TID_06  | Getting acknowledge | Any buttn presed| give feedback | PASS  |


## Low Level Test Plan
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Sleep State  | Push Switch = 0| All Leds turned "OFF"|:heavy_check_mark: PASS  |
| TID_02  | Locking Feature  | push button = 1 push| All Leds turned "ON" & printing lock|:heavy_check_mark: PASS  |
| TID_03  | Unlocking Feature| push button = 2 push| All Leds turned "OFF" & Printing Unlocked |:heavy_check_mark: PASS  |
| TID_04  | Alarm Feature ON | push button=3 push| Leds turning clockwise & printing Alarm "ON"|:heavy_check_mark: PASS  |
| TID_05  | Alarm Feature OFF | push button=4 push| Leds turning anticlockwise & printing Alarm"OFF"|:heavy_check_mark: PASS  |
| TID_06  | Getting acknowledge | Any buttn presed| printing I am Active|:heavy_check_mark: PASS  |