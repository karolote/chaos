[![Build Version](https://img.shields.io/badge/version-v1.1-brightgreen.svg)](https://github.com/NeKzor/chaos)
[![Release Status](https://img.shields.io/github/release/NeKzor/chaos/all.svg)](https://github.com/NeKzor/chaos/releases)

## Supported Systems

- Linux
- Windows

## Commands & Variables

|Name|Default|Description|
|---|:-:|---|
| chaos_start | cmd | Starts chaos mode. |
| chaos_stop | cmd | Stops chaos mode. |
| chaos_reset_queue | cmd | Resets chaos mode queue. |
| chaos_set_seed | cmd | Sets the seed to generate randomness. |
| chaos_set_quantity | cmd | Sets quantity of specific state. |
| chaos_set_next | cmd | Sets specific state to be invoked next. |
| chaos_states | cmd | Prints all possible states. |
| chaos_pause | cmd | Pauses or unpauses chaos mode. |
| chaos_skip | cmd | Skips current state. |
| chaos_mode | 0 | Mode of chaos-plugin.<br>0 = Default.<br>1 = States can only occur once, mode will end automatically.<br>2 = States can only occur once, mode will reset automatically. |
| chaos_time | 30 | How long a state should last, in seconds.<br>-1 = Random number between chaos_time_lower_bound and chaos_time_upper_bound.<br>Value cannot be lower than 10 seconds. |
| chaos_time_lower_bound | 30 | See chaos_time. |
| chaos_time_upper_bound | 40 | See chaos_time. |
| chaos_cooldown | 0 | Amount of seconds to wait between states.<br>-1 = Random number between chaos_cooldown_lower_bound and chaos_cooldown_upper_bound. |
| chaos_cooldown_lower_bound | 30 | See chaos_cooldown. |
| chaos_cooldown_upper_bound | 40 | See chaos_cooldown. |
| chaos_spoiler | 0 | Prints name of current state into chat. |

## Route Credit

- baister09 (motivation)
- tanger2b (commands, coop testing)
- spidda (coop testing)
